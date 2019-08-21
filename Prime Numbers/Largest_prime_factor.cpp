// https://practice.geeksforgeeks.org/problems/largest-prime-factor/0
#include <iostream>
typedef long long ll;
using namespace std;
bool isPrime(ll n)
{
	if (n <= 1)	return false;
	for (ll i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	ll testcase;
	cin >> testcase;
	while(testcase--)
	{
		ll n;
		cin >> n;
		if (isPrime(n))
		{
			cout << n << endl;
			continue;
		}
		ll max_prime = 0;
		for (ll i = 2; i * i <= n; ++i)
		{
			if (n % i == 0)
			{
				if (isPrime(i))
					max_prime = (i > max_prime ? i : max_prime);
				ll other_factor = n / i;
				if (isPrime(other_factor))
					max_prime = (other_factor > max_prime ? other_factor : max_prime);
			}
		}
		cout << max_prime << endl;
	}
	return 0;
}
