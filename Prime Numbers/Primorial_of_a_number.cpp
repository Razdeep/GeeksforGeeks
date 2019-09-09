// https://practice.geeksforgeeks.org/problems/primorial-of-a-number/0

#include <iostream>
typedef long long ll;
using namespace std;
const int MOD = 1e9 + 7;
bool isPrime(int n)
{
	if(n <= 1)	return false;
	for (ll i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int primorial(int n)
{
	ll res = 1;
	for (int i = 2; i <= n; ++i)
		if (isPrime(i))
		{
			res *= i;
			res %= MOD;
		}
	return res;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << primorial(n) << endl;
	}
	return 0;
}
