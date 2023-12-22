// https://www.acmicpc.net/problem/28940 ¬¥¬ß¬Ö¬Ó¬ß¬Ú¬Ü ¬¤¬â¬Ñ¬Ó¬Ú¬ä¬Ú ¬¶¬à¬Ý¬Ù BOJ 28940 2023-12-22
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int page_width, page_height;
	cin >> page_width >> page_height;

	int char_count, char_width, char_height;
	cin >> char_count >> char_width >> char_height;

	int char_per_page = (page_width / char_width) * (page_height / char_height);
	
	int result = -1;
	if (char_per_page) {
		result = ceil((double)char_count / char_per_page);
	}

	cout << result;
}