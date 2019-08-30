// https://practice.geeksforgeeks.org/problems/express-n-as-sum-of-4-prime-numbers/0

#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if (n < 8)
		{
			cout << -1 << endl;
			continue;
		}
		else if (n & 1)
		{
			cout << "2 3 ";
			for (int i = 2; i + 5 < n; ++i)
			{
				if (isPrime(i) && isPrime(n - 5 - i))
				{
					cout << i << " " << (n - 5 - i) << endl;
					break;
				}
			}
		}
		else
		{
			cout << "2 2 ";
			for (int i = 2; i + 4 < n; ++i)
			{
				if (isPrime(i) && isPrime(n - 4 - i))
				{
					cout << i << " " << (n - 4 - i) << endl;
					break;
				}
			}
		}
	}
	return 0;
}
