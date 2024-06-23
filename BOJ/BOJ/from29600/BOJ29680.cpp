// https://www.acmicpc.net/problem/29680 2024-06-23 BOJ 29680 ¬·¬à¬Ü¬Ü¬Ö¬Û¬ß¬í¬Ö ¬Ó¬à¬â¬à¬ä¬Ñ
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	double height, width, w1, w2;

	cin >> height >> width >> w1 >> w2;

	double diagonal = sqrt(pow(w2 - w1, 2) + pow(height, 2));

	double s1, s2, s3, s4;
	s1 = width * diagonal;
	s2 = width * w1;
	s3 = (w2 * height) - ((w2 - w1) * height / 2);
	s4 = s3;

	cout << setprecision(5) << fixed;
	cout << s1 + s2 + s3 + s4;

}
/*

diagonal = sqrt(0.5 * 0.5 + 4) = 2.061552812...

2 * 1.5 = 3

1.5 * 1.5 = 2.25

2.06155 * 1.5 = 3.092325
1.5 * 1 = 1.5
1.5 * 2 - (0.5 * 2 / 2) = 2.5
1.5 * 2 - (0.5 * 2 / 2) = 2.5



*/