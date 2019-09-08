// https://practice.geeksforgeeks.org/problems/prime-string/0
#include <iostream>
using namespace std;
typedef long long ll;
ll isPrime(ll n)
{
	if (n <= 1)	return false;
	for(ll i = 2; i * i <= n; ++i)
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
		ll text_size;
		string text;
		cin >> text_size >> text;
		ll sum_of_ascii = 0;
		for (int i = 0; i < int(text.size()); ++i)
			sum_of_ascii += (int)text[i];
		cout << (isPrime(sum_of_ascii) ? "YES" : "NO" ) << endl;
	}
	return 0;
}
