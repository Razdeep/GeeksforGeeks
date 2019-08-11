// https://practice.geeksforgeeks.org/problems/composite-and-prime/0
// @TODO
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e7;
int main()
{
	int testcase;
	cin >> testcase;
	vector<int> sieve(MAX, true);
	sieve[0] = sieve[1] = false;
	for (int i = 2; i * i <= MAX; ++i)
	{
		if (sieve[i])
			for (int j = i * i; j < MAX; j += i)
				sieve[j] = false;
	}
	for (int i = 1; i < MAX; i++)
		sieve[i] += sieve[i - 1];
	while(testcase--)
	{
		int left, right;
		cin >> left >> right;
		int no_of_elements = right - left + 1;
		int no_of_primes = sieve[right] - sieve[left - 1];
		int no_of_composite = no_of_elements - no_of_primes;
		cout << no_of_composite - no_of_primes << endl;
	}
	return 0;
}
