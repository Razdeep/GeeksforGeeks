// https://practice.geeksforgeeks.org/problems/prime-factorization-and-geek-number/0
#include <iostream>
#include <set>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
bool isGeek(int n)
{
	int n1 = n;
	if (n == 1)	return false;
	set<int> myset;
	for (int i = 2; i * i <= n1; ++i)
	{
		while(isPrime(i) && n % i == 0)
		{
			if (myset.find(i) != myset.end())
			{
				return false;
			}
			myset.insert(i);
			n /= i;
		}
	}
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
		cout << (isGeek(n) ? "Yes" : "No") << endl;
	}
	return 0;
}
