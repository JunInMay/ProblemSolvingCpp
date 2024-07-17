// https://www.acmicpc.net/problem/2587 boj 2587 대표값2 2023-11-20
#include <iostream>
#include <vector>

using namespace std;

void bubble_sort(vector<int>& list)
{
	int length = list.size();

	for (int i = 0; i < length - 1; i++)
	{
		for (int j = i + 1; j < length; j++)
		{
			if (list[i] > list[j])
			{
				int temp = list[i];
				list[i] = list[j];
				list[j] = temp;
			}
		}
	}
}

int main()
{
	vector<int> list;

	for (int i = 0; i < 5; i++)
	{
		int input;
		cin >> input;
		list.push_back(input);
	}

	bubble_sort(list);

	int sum = 0;
	for (int i = 0; i < 5; i++)
	{
		sum += list[i];
	}
	int mid = list[list.size() / 2];
	int avg = sum / 5;
	cout << avg << "\n" << mid;
}