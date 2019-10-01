// https://practice.geeksforgeeks.org/problems/number-of-unique-paths/0
#include <iostream>
using namespace std;
int solve(int m, int n)
{
	int dp[n][m];
	for (int i = 0; i < n; ++i)
		dp[i][0] = 1;
	for (int i = 0; i < m; ++i)
		dp[0][i] = 1;
	for (int i = 1; i < n; ++i)
	{
		for (int j = 1; j < m; ++j)
		{
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
		}
	}
	return dp[n - 1][m - 1];
}
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		int m, n;
		cin >> m >> n;
		cout << solve(m, n) << endl;
	}
	return 0;
}
