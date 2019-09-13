// https://practice.geeksforgeeks.org/problems/sum-of-primes/0

#include <iostream>
using namespace std;
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int s = 0;
		while(n)
		{
			if (n % 10 == 2)
				s += 2;
			else if (n % 10 == 3)
				s += 3;
			else if (n % 10 == 5)
				s += 5;
			else if (n % 10 == 7)
				s += 7;
			n /= 10;
		}
		cout << s << endl;
	}
	return 0;
}
