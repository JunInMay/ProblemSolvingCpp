// https://www.acmicpc.net/problem/26502 2025-08-01 BOJ 26502 Decoder
#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  cin.ignore();

  while(n-- > 0) {
    string buf;
    getline(cin, buf);

    for (char& c : buf) {
      char res = c;
      int buf = 0;
      switch(c){
        case 'a':
        res = 'e';
        break;
        case 'e':
        res = 'i';
        break;
        case 'i':
        res = 'o';
        break;
        case 'o':
        res = 'u';
        break;
        case 'u':
        res = 'y';
        break;
        case 'y':
        res = 'a';
        break;
        case 'A':
        res = 'E';
        break;
        case 'E':
        res = 'I';
        break;
        case 'I':
        res = 'O';
        break;
        case 'O':
        res = 'U';
        break;
        case 'U':
        res = 'Y';
        break;
        case 'Y':
        res = 'A';
        break;
        default:
        break;
      }
      cout << res;
    }
    cout << '\n';
  }
}