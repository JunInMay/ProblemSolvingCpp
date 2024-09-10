// https://www.acmicpc.net/problem/1871 2024-09-10 BOJ 1871 좋은 자동차 번호판
#include <iostream>
#include <cmath>
#include <sstream>

using namespace std;

int getValueAlphabet(string& alphabet) {
  int size = alphabet.size();

  int idx = 0;
  int result = 0;
  while (idx < size) {
    int sumValue = (alphabet[idx] - 'A') * pow(26, size - 1 - idx);
    result += (alphabet[idx] - 'A') * pow(26, size - 1 - idx);
    idx++;
  }

  return result;
}

int main() {
  int n;
  cin >> n;

  while(n-- > 0) {
    string input;
    cin >> input;

    istringstream iss(input);

    string alphabet;
    string number;
    getline(iss, alphabet, '-');
    getline(iss, number, '-');

    int alphabetValue = getValueAlphabet(alphabet);
    int numberValue = stoi(number);

    string result = "not nice";
    int difference = abs(alphabetValue - numberValue);
    if (difference <= 100) result = "nice";

    cout << result << '\n';
  }
}