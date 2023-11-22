// https://www.acmicpc.net/problem/25305 BOJ 25305 커트라인 2023-11-21
#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& result, vector<int>& left, vector<int>& right)
{
	int l_index = 0;
	int r_index = 0;

	while (l_index < left.size() && r_index < right.size())
	{
		if (left[l_index] < right[r_index])
		{
			result.push_back(left[l_index++]);
		}
		else
		{
			result.push_back(right[r_index++]);
		}
	}

	while (l_index < left.size())
	{
		result.push_back(left[l_index++]);
	}
	while (r_index < right.size())
	{
		result.push_back(right[r_index++]);
	}
}

void copy_vector(vector<int>& original, vector<int>& target, int start, int end)
{
	for (int i = start; i < end; i++)
	{
		target.push_back(original[i]);
	}
}

void merge_sort(vector<int>& array)
{
	int len = array.size();
	if (len <= 1)
		return;

	vector<int> left;
	vector<int> right;

	copy_vector(array, left, 0, len / 2);
	copy_vector(array, right, len / 2, len);

	merge_sort(left);
	merge_sort(right);

	vector<int> result;
	merge(result, left, right);
	array = result;
}

int main()
{
	int N, k;
	cin >> N >> k;

	vector<int> array;
	for (int i = 0; i < N; i++)
	{
		int value;
		cin >> value;
		array.push_back(value);
	}

	merge_sort(array);

	for (int i = 0; i < N; i++)
	{
		if (i == N - k)
			cout << array[i];
	}
}