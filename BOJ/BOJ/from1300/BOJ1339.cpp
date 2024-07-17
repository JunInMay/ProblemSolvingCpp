// https://www.acmicpc.net/problem/1339 BOJ 1339 단어 수학 2023-12-27
/* 문제풀이 일지
1. 헛짓거리
문제를 간단히해서 3자리 이하 숫자로만 이루어져 있다고 하자.
ABB
ABB
BB
..
BB
와 같은 입력일 때 A는 무조건 9가 들어가야 하고 B는 무조건 8이 들어가야 한다.
반대로 이러면 어떨까?
ABB
BB
..
BB
이 경우 두번째 자리에 있는 B 10개는 첫번째 자리에 있는 A 1개와 동일하다. (A = B * 10 = 900 = 90 * 10 이니까)
이 말은 다음과 같이 문제를 접근할 수 있다는 말이다.
우선 각 자리 수 별로 최대한 많이 있는 문자 순으로 정렬한다.
각 자리수 별로 제일 많은 문자를 고른다. 여기선 A, B만 고려해보자.
1) 그 문자가 2개 이상이라면 그냥 그 문자에 지금 부여할 수 있는 최대값을 부여한다. 만약 A가 첫째자리에 2개 이상 있다면 A가 9가 될 것이다.
2) 근데 첫째 자리에 제일 많은 문자가 1개라면? 둘째 자리의 문자를 봐야 한다.
2-1) 둘째 자리의 문자 B의 수가 10개라면? 첫째 자리의 문자 1개와 대체될 것이다.
2-1-1) 근데 셋째 자리에 문자 B의 수가 6개 이상이라면 셋째 자리에 문자 A의 개수는 4개가 최대이며, 즉 B를 골랐을 때 이득이다. 따라서 B가 9가 된다.
2-2) 둘째 자리의 문자 B의 수가 9개였다면? 그리고 둘째 자리의 문자 C가 1개, 즉 둘째자리에 (B, C) = (9, 1) 이라고 하자.
2-2-1) 그럼 셋째자리도 고려해야 한다. B가 10개 있을지 모른다. 셋째자리에 (B = 10) 일 수 있다. 물론 이래도 A 1개와 겨우 대체되는 수준이다.
2-2-2) 그런데 만약 넷째자리도 있다면 넷째자리도 고려해야 한다. B가 몇 개 더 있다면 A 1개에 9를 대입하는 것보다 이득이기 때문이다.
2-2-3) 예시 설명은 아래와 같다. 아래 예시에선 넷째 자리에 (B, C) = (1, 9) 인데, 이 B = 1 때문에 B를 고르는게 더 이득이다.
ABBC
BBC
BBC
BBC
BBC
BBC
BBC
BBC
BBC
CBB
2-3) 지금까진 두 개를 비교했지만, 만약 개수가 같은 문자가 여러 개라면 어떨 때 이득일까?
2-3-1) 여기서 벽을 느꼈다. 이런 모든 케이스를 고려하기가 매우 어렵다.
A?A?
A??B
B??C
B?D?
C?D?
C??A
D??B
D?C?

2. 문득 떠오른 생각
대체 이렇게 어려운 걸 어떻게 풀지?

가만보자... 어차피 숫자는 8자리가 최대인데, 결국 숫자를 대입한다는건... 가중치를(weighting) 그만큼 주면 된다는 것 아닌가?
4자리가 최대인 예시에서, A가 첫째 자리에 있다면, 예를 들어
AAAA
BBB
ABC
위와 같은 입력일때, 첫째자리에 있는 A에 (10^4) 가중치를 주고, 둘째자리에 있는 A는 2개니까 2(10^3) 가중치를 주고...
이런 식으로 가중치를 주는 것이다.
그러면 가중치가 가장 높은 문자에 가장 큰 수를 대입하면 된다.

결국 숫자를 대입한다는건... 그만큼 곱해준다는 뜻이 되는구나! 라는걸 깨달았다..
*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

bool compare(pair<char, int> left, pair<char, int> right) {
	return right.second < left.second;
}

int main() {
	int word_count;
	map<char, int> weightings;
	map<char, int> char_countings;
	int char_count = 0;

	cin >> word_count;

	for (int i = 0; i < word_count; i++) {
		string word;
		cin >> word;

		for (int i = 0; i < word.size(); i++) {
			char c = word[i];
			int weighting = pow(10, word.size() - i - 1);

			if (weightings.find(c) == weightings.end()) {
				weightings[c] = weighting;
				char_countings[c] = 1;
				++char_count;
			}
			else {
				weightings[c] += weighting;
				char_countings[c] += 1;
			}
		}
	}

	vector<pair<char, int>> v(weightings.begin(), weightings.end());
	sort(v.begin(), v.end(), compare);
	int number = 9;
	int result = 0;
	for (int i = 0; i < v.size(); i++) {
		result += v[i].second * (number--);
	}
	cout << result << '\n';
}