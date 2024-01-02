// https://www.acmicpc.net/problem/1339 BOJ 1339 �ܾ� ���� 2023-12-27
/* ����Ǯ�� ����
1. �����Ÿ�
������ �������ؼ� 3�ڸ� ���� ���ڷθ� �̷���� �ִٰ� ����.
ABB
ABB
BB
..
BB
�� ���� �Է��� �� A�� ������ 9�� ���� �ϰ� B�� ������ 8�� ���� �Ѵ�.
�ݴ�� �̷��� ���?
ABB
BB
..
BB
�� ��� �ι�° �ڸ��� �ִ� B 10���� ù��° �ڸ��� �ִ� A 1���� �����ϴ�. (A = B * 10 = 900 = 90 * 10 �̴ϱ�)
�� ���� ������ ���� ������ ������ �� �ִٴ� ���̴�.
�켱 �� �ڸ� �� ���� �ִ��� ���� �ִ� ���� ������ �����Ѵ�.
�� �ڸ��� ���� ���� ���� ���ڸ� ������. ���⼱ A, B�� �����غ���.
1) �� ���ڰ� 2�� �̻��̶�� �׳� �� ���ڿ� ���� �ο��� �� �ִ� �ִ밪�� �ο��Ѵ�. ���� A�� ù°�ڸ��� 2�� �̻� �ִٸ� A�� 9�� �� ���̴�.
2) �ٵ� ù° �ڸ��� ���� ���� ���ڰ� 1�����? ��° �ڸ��� ���ڸ� ���� �Ѵ�.
2-1) ��° �ڸ��� ���� B�� ���� 10�����? ù° �ڸ��� ���� 1���� ��ü�� ���̴�.
2-1-1) �ٵ� ��° �ڸ��� ���� B�� ���� 6�� �̻��̶�� ��° �ڸ��� ���� A�� ������ 4���� �ִ��̸�, �� B�� ����� �� �̵��̴�. ���� B�� 9�� �ȴ�.
2-2) ��° �ڸ��� ���� B�� ���� 9�����ٸ�? �׸��� ��° �ڸ��� ���� C�� 1��, �� ��°�ڸ��� (B, C) = (9, 1) �̶�� ����.
2-2-1) �׷� ��°�ڸ��� �����ؾ� �Ѵ�. B�� 10�� ������ �𸥴�. ��°�ڸ��� (B = 10) �� �� �ִ�. ���� �̷��� A 1���� �ܿ� ��ü�Ǵ� �����̴�.
2-2-2) �׷��� ���� ��°�ڸ��� �ִٸ� ��°�ڸ��� �����ؾ� �Ѵ�. B�� �� �� �� �ִٸ� A 1���� 9�� �����ϴ� �ͺ��� �̵��̱� �����̴�.
2-2-3) ���� ������ �Ʒ��� ����. �Ʒ� ���ÿ��� ��° �ڸ��� (B, C) = (1, 9) �ε�, �� B = 1 ������ B�� �����°� �� �̵��̴�.
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
2-3) ���ݱ��� �� ���� ��������, ���� ������ ���� ���ڰ� ���� ����� � �� �̵��ϱ�?
2-3-1) ���⼭ ���� ������. �̷� ��� ���̽��� �����ϱⰡ �ſ� ��ƴ�.
A?A?
A??B
B??C
B?D?
C?D?
C??A
D??B
D?C?

2. ���� ������ ����
��ü �̷��� ����� �� ��� Ǯ��?

��������... ������ ���ڴ� 8�ڸ��� �ִ��ε�, �ᱹ ���ڸ� �����Ѵٴ°�... ����ġ��(weighting) �׸�ŭ �ָ� �ȴٴ� �� �ƴѰ�?
4�ڸ��� �ִ��� ���ÿ���, A�� ù° �ڸ��� �ִٸ�, ���� ���
AAAA
BBB
ABC
���� ���� �Է��϶�, ù°�ڸ��� �ִ� A�� (10^4) ����ġ�� �ְ�, ��°�ڸ��� �ִ� A�� 2���ϱ� 2(10^3) ����ġ�� �ְ�...
�̷� ������ ����ġ�� �ִ� ���̴�.
�׷��� ����ġ�� ���� ���� ���ڿ� ���� ū ���� �����ϸ� �ȴ�.

�ᱹ ���ڸ� �����Ѵٴ°�... �׸�ŭ �����شٴ� ���� �Ǵ±���! ��°� ���޾Ҵ�..
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