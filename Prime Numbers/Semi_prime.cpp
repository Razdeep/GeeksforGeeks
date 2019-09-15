// https://practice.geeksforgeeks.org/problems/semi-prime/0
#include <iostream>
using namespace std;
bool isPrime(int n)
{
	if(n <= 1)
		return false;
	for(int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			return false;
	return true;
}
bool isSemiPrime(int n)
{
	for (int i = 2; i * i <= n; ++i)
		if (n % i == 0)
			if (isPrime(i) && isPrime(n / i))
				return true;
	return false;
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		cout << (isSemiPrime(n) ? "True" : "False") << endl;
	}
	return 0;
}
