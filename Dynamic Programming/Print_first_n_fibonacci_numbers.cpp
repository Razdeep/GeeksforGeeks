#include <iostream>
using namespace std;
typedef long long ll;
ll fibonacci(ll n)
{
	if (n == 0 || n == 1)
		return 1;
	ll a = 1, b = 1;
	ll c;
	for (int i = 1; i < n; ++i)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return c;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		ll n;
		cin >> n;
		for (int i = 0; i < n; ++i)
			cout << fibonacci(i) << " ";
		cout << endl;
	}
	return 0;
}
