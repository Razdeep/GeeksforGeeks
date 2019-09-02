// https://practice.geeksforgeeks.org/problems/kth-prime-factor-of-a-number/0

#include <iostream>
#include <vector>
using namespace std;
int calc(int n, int k)
{
	vector<int> factors;
	factors.push_back(1);
	int cur = 2;
	while(n > 1)
	{
		while(n % cur == 0)
		{
			factors.push_back(cur);
			n /= cur;
		}
		cur++;
	}
	return (k >= factors.size()) ? -1 : factors[k];
}
int main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		cout << calc(n, k) << endl;
	}
	return 0;
}
