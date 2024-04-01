#include <iostream>

using namespace std;

int main() {
	int T, d, n, s, p;
	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> d >> n >> s >> p;

		int parallel = d + p * n;
		int serial = s * n;

		string result = "does not matter";
		if (parallel > serial) {
			result = "do not parallelize";
		}
		else if (parallel < serial) {
			result = "parallelize";
		}

		cout << result << '\n';
	}
}