// https://practice.geeksforgeeks.org/problems/prime-factors/0

#include <iostream>
#include <vector>
#include <set>
using namespace std;
const int MAX = 1e6 + 6;
int main()
{
	int t;
	cin >> t;
	vector<int> sieve(MAX, true);
	for (int i = 2; i * i <= MAX; ++i)
	{
		if (sieve[i])
		{
			for (int j = i * i; j < MAX; j += i)
			{
				sieve[j] = false;
			}
		}
	}
	while(t--)
	{
		int n;
		cin >> n;
		set<int> myset;
		vector<int> res;
		while (n % 2 == 0)
		{
			if (myset.find(2) == myset.end())
			{
				myset.insert(2);
				res.push_back(2);
			}
			n /= 2;
		}
		for (int i = 3; i * i <= n; i += 2)
		{
			while (sieve[i] && n % i == 0)
			{
				if (myset.find(i) == myset.end())
				{
					myset.insert(i);
					res.push_back(i);
				}
				n /= i;
			}
		}
		if (n > 2)
			res.push_back(n);
		for (int i : res)
			cout << i << " ";
		cout << endl;
	}
	return 0;
}
