#include <iostream>
using namespace std;
int sumOfDigits(int n)
{
	int res = 0;
	while(n)
	{
		res += (n%10);
		n /= 10;
	}
	return res;
}
bool isPrime(int n)
{
	if (n <= 1)	return false;
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
bool solve(int n)
{
	while(n >= 10)
	{
		n = sumOfDigits(n);
	}
	return isPrime(n);
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << (solve(n) ? "P" : "NP") << endl;	
	}
	return 0;
}
