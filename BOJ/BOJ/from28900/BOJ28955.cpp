// https://www.acmicpc.net/problem/28955 2026-02-09 BOJ28955 <<Кто хочет стать миллионером?>>
#include <iostream>
#include <cmath>

using namespace std;

int numbers[100];

int getLength(int n) {
    int result = 0;
    if (n == 0) return 1;

    while (n > 0) {
        n /= 10;
        result++;
    }
    return result;
}

int main() {
    int n;
    cin >> n;

    numbers[0] = 100;
    for (int i = 0; i < 24; i++) {
        int temp = numbers[i] * 2;
        int length = getLength(temp);
        int zeroes = ceil(double(length) / 2);
        int next = 0;

        if ((temp / int(pow(10, zeroes - 1))) % 10 > 0) {
            temp += int(pow(10, zeroes));
        }

        for (int j = 0; j < length; j++) {
            if (j < length - zeroes) {
                next += ((temp % int(pow(10, length - j))) / int(pow(10, length - j - 1))) * int(pow(10, length - j - 1));
            }
        }

        numbers[i + 1] = next;
    }

    for (int i = 0; i < n; i++) {
        cout << numbers[i] << '\n';
    }
}