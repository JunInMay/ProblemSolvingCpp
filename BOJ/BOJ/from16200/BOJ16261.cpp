// https://www.acmicpc.net/problem/16261 BOJ 16261 Least Common Multiple 2024-09-03
/*
최소공배수 : Gab 니까 Ga * Gb / G 이다. G는 최대공약수. 즉 수를 곱하고, 최대공약수로 나누면 최소공배수.

최대공약수 : 유클리드 호제법으로 구하자.

틀리고 풀이보고 풀었음.

    // frac1.first = frac1.first * (commonDenominator / frac1.second); // 이 점에서 틀렸다
    // frac2.first = frac2.first * (commonDenominator / frac2.second);

틀린 이유는 위 코드임. 분모를 같게 하려다가 곱셈이 들어갔고, 그래서 숫자가 커져서 틀림.

논리로 곱하기 없이 풀었어야 함. 

<접근>
a/b 와 c/d가 있다고 하자. a, b 는 서로소, c, d는 서로소다. 이 둘로 나눠지는(나눠져서 정수가 되는) 가장 작은 수는 lcm(a,c)/gcd(bd) 이다.

<틀린 접근>
근데 그렇게 생각하지 못하고, 나는 gcd(bd) 를 두 분수에 적용해서 만들어야겠다는 생각에 공통 분모로 만들었음.

a * (gcd(bd) / b )/gcd(bd) 로 만들어버림. 그니까 분수 4/5와 21/25 이 있으면 20/25와 21/25로 만들었다는 말임. 이 과정에서 곱셈이 들어가버림.
곱셈이 들어가니 오버플로우로 터지고, 에러가 난 것 같음.

<풀이>
B. Least Common Multiple
Let p / q be divisible by both a / b and c / d, all fractions are irreducible. So the numbers (p / q): (a / b) = (p·b) / (q·a) and (p / q): (c / d) = (p·d) / (q·c) are integers.

Since p·b is divisible by q·a, b and a are relatively prime, then p is divisible by a. p and q are also relatively prime, so b is divisible by q. Similar argument allows to conclude that p is divisible by с, and d is divisible by q.

Therefore p is divisible by lcm(a, c), q is a divisor of gcd(b, d). The fraction lcm(a, c) / gcd(b, d) is divisible by both a / b and c / d, and is therefore the smallest such fraction. So the answer is lcm(a, c) / gcd(b, d).

풀이에서 결국 
*/
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 유클리드 호제법으로 최대 공약수 구함
long long getGCD(long long n1, long long n2) {
  while (n2 != 0) {
    long long temp = n2;
    n2 = n1 % n2;
    n1 = temp;
  }
  return n1;
}

// 최소 공배수를 구하기.
long long getLCM(long long n1, long long n2) {
  long long gcd = getGCD(n1, n2);
  return n1 * n2 / gcd;
}

// 공통분모 찾기. 공통분모는 최소 공배수다..
long long getCommonDenominator(pair<long long, long long> p1, pair<long long, long long> p2) {
  long long lcm = getLCM(p1.second, p2.second);
  return lcm;
}

int main() {
  cin.tie(0);
  ios::sync_with_stdio(0);

  int tc;
  cin >> tc;

  while (tc-- > 0) {
    pair<long long, long long> frac1, frac2;
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    frac1 = {a, b};
    frac2 = {c, d};

    cout << getLCM(a, c) << " " << getGCD(b, d) << '\n';

    /*
    틀린 풀이.
    */
    // // 분모를 같게 한다.
    // long long commonDenominator = getCommonDenominator(frac1, frac2);
    // frac1.first = frac1.first * (commonDenominator / frac1.second); // 이 점에서 틀렸다
    // frac2.first = frac2.first * (commonDenominator / frac2.second);
    // frac1.second = commonDenominator;
    // frac2.second = commonDenominator;

    // // 분자의 최소 공배수를 구한다.
    // pair<long long, long long> answer;
    // answer.first = getLCM(frac1.first, frac2.first);
    // answer.second = commonDenominator;

    // // 분자와 분모를 기약분수로 만든다. 그게 답.
    // long long answerGCD = getGCD(answer.first, answer.second);
    // answer.first = answer.first / answerGCD;
    // answer.second = answer.second / answerGCD;

    // cout << answer.first << ' ' << answer.second << '\n';
  }
}

/*

1
1 10 3 100

*/