// https://practice.geeksforgeeks.org/problems/james-bond-and-divisors/0
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e5 + 5;
int findNoOfDivisors(int n)
{
	int res = 0;
	for (int i = 1; i * i <= n; i++)
	{
		if (i * i != n && n % i == 0)
			res += 2;
		else if (n % i == 0)
			res++;
	}
	return res;
}
int main()
{
	int testcase;
	cin >> testcase;
	vector<int> precomputed(MAX, 0);
	for (int i = 1; i < MAX; ++i)
	{
		precomputed[i] = precomputed[i - 1] + findNoOfDivisors(i);	
	}
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << precomputed[n] << endl;
	}
	return 0;
}
