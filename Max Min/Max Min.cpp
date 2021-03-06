// Max Min.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int N, K, temp, unfairness = INT_MAX;
	cin >> N >> K;
	vector<int> list(N);
	for (int i = 0; i < N; i++)
		cin >> list[i];

	sort(list.begin(), list.end());
	for (int i = 0; i <= N - K; i++) {
		temp = list[i + K - 1] - list[i];
		if (temp < unfairness) unfairness = temp;
	}
	cout << unfairness << "\n";

    return 0;
}

