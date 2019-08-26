// https://practice.geeksforgeeks.org/problems/prime-number-of-set-bits/0
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n == 1) return false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int countSetBits(int n)
{
	int res = 0;
	while (n)
	{
		res += (n & 1);
		n >>= 1;
	}
	return res;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int left, right;
		cin >> left >> right;
		int ans = 0;
		for (int i = left; i <= right; ++i)
		{
			if (isPrime(countSetBits(i)))
					ans++;
		}
		cout << ans << endl;
	}
	return 0;	
}
