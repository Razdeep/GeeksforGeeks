// https://practice.geeksforgeeks.org/problems/product-of-prime-factors/0

#include <iostream>
#include <set>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1) return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		int cur = 2;
		set<int> prime_factors;
		while(n > 1)
		{
			if (isPrime(cur))
			{
				while(n % cur == 0)
				{
					n /= cur;
					prime_factors.insert(cur);
				}
			}
			cur++;
		}
		int res = 1;
		for (int i : prime_factors)
			res *= i;
		cout << res << endl;
	}
	return 0;
}
