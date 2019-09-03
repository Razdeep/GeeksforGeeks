// https://practice.geeksforgeeks.org/problems/mansi-and-her-series/0

#include <iostream>
#include <vector>
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
	vector<int> prime_numbers;
	prime_numbers.push_back(0);
	for (int i = 2; prime_numbers.size() <= 6000; ++i)
		if (isPrime(i))
			prime_numbers.push_back(i);
	while(t--)
	{
		int n;
		cin >> n;
		cout << (prime_numbers[n] + 1) * n << endl;
	}
	return 0;
}
