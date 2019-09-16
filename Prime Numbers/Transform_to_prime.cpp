// https://practice.geeksforgeeks.org/problems/transform-to-prime/0

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
		int num = 0;
		for (int i = 0; i < n; ++i)
		{
			int temp;
			cin >> temp;
			num += temp;
		}
		int next_prime;
		for(next_prime = num; 1; ++next_prime)
		{
			if (isPrime(next_prime))
				break;
		}
		cout << (next_prime - num) << endl;
	}
	return 0;
}
