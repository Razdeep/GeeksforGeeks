// https://practice.geeksforgeeks.org/problems/collection-of-pens/0
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0)
			return false;
	}
	return true;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int a, b;
		cin >> a >> b;
		int c;
		for (c = 1; true; ++c)
		{
			if (isPrime(a + b + c))
			{
				cout << c << endl;
				break;
			}
		}
	}
	return 0;
}
