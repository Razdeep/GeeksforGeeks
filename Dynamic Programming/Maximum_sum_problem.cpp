// https://practice.geeksforgeeks.org/problems/maximum-sum-problem/0
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e5 + 5;
int main()
{
	int testcase;
	cin >> testcase;
	vector<int> dp(MAX, 0);
	dp[0] = 0;
	dp[1] = 1;
	for (int i = 2; i < MAX; ++i)
		dp[i] = max(i, dp[i/2] + dp[i/3] + dp[i/4]);
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
