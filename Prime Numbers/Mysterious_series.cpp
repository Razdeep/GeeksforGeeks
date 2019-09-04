// https://practice.geeksforgeeks.org/problems/mysterious-series/0
#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
bool isPrime(ll n)
{
	if (n <= 1)
		return false;
	for(ll i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	// Populating prime list
	vector<ll> prime_list;
	prime_list.push_back(0);
	for (ll i = 2; prime_list.size() <= 5000; ++i)
		if (isPrime(i))
			prime_list.push_back(i);
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		cout <<  (prime_list[n] * prime_list[n]) + 1 << endl;
	}
	return 0;
}
