// https://practice.geeksforgeeks.org/problems/prime-palindrome-sum/0

#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e5 + 5;
int rev(int n)
{
	int res = 0;
	while(n)
	{
		res *= 10;
		res += (n % 10);
		n /= 10;
	}
	return res;
}
int main()
{
	int t;
	cin >> t;
	vector<int> sieve(MAX, true);
	sieve[0] = sieve[1] = false;
	for (int i = 2; i * i <= MAX; ++i)
	{
		if (sieve[i])
		{
			for(int j = i * i; j < MAX; j += i)
			{
				sieve[j] = false;
			}
		}
	}
	while(t--)
	{
		int a, b;
		cin >> a >> b;
		int sum = 0;
		for (int i = a; i <= b; ++i)
			if (sieve[i] && (i == rev(i)))
				sum += i;
		cout << sum << endl;
	}
	return 0;
}
