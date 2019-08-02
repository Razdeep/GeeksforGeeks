/**
 * https://practice.geeksforgeeks.org/problems/find-prime-numbers-in-a-range/0 
 *
 * Solution using Sieve of Eratosthenes
 *
 */
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
const int MAX = 1e6 + 3;
void sieve(vector<int>& is_prime)
{
	int n = (int)is_prime.size();
	for (int i = 2; i * i <= n; ++i)
	{
		if (is_prime[i])
		{
			for (int j = i * i; j <= n; j += i)
				is_prime[j] = false;		
		}
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cout.tie(NULL);
	int testcase;
	cin >> testcase;
	vector<int> is_prime(MAX, true);
	is_prime[0] = is_prime[1] = false;
	sieve(is_prime);
	while (testcase--)
	{
		int start, end;
		cin >> start >> end;
		for (int this_num = start; this_num <= end; ++this_num)
			if (is_prime[this_num])
				cout << this_num << " ";
		cout << endl;
	}
	return 0;
}
