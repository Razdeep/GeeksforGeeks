// https://practice.geeksforgeeks.org/problems/count-divisors-of-factorial/0
// @TODO
#include <iostream>
#include <set>
using namespace std;

int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n; 
		set<int> myset;
		for (int i = 1; i <= n; ++i)
		{
			for(int j = 1; j <= i; ++j)
			{
				if (i % j == 0)
					myset.insert(j);
			}
		}
		cout << myset.size() << endl;
	}
	return 0;
}
