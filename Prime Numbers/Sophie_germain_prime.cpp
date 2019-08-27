// https://practice.geeksforgeeks.org/problems/sophie-germain-prime/0
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e5;
int main()
{
	int testcase;
	cin >> testcase;
	// Precomputing
	vector<int> sieve(MAX, true);
	sieve[0] = sieve[1] = false;
	for (int i = 2; i * i <= MAX; ++i)
	{
		if (sieve[i])
		for (int j = i * i; j < MAX; j += i)
		{
			sieve[j] = false;
		}
	}
	while (testcase--)
	{
		int n;
		cin >> n;
		for (int i = 2; i < n; ++i)
		{
			if (sieve[i] && sieve[(2 * i) + 1])
			{
				cout << i << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
