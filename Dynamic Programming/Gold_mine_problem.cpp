// https://practice.geeksforgeeks.org/problems/gold-mine-problem/0
#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int m, n;
		cin >> n >> m;
		vector<vector<int>> arr(n + 2, vector<int>(m + 2, 0));
		for (int i = 1; i <= n; ++i)
			for (int j = 1; j <= m; ++j)
				cin >> arr[i][j];

		int ans = INT_MIN;
		vector<vector<int>> dp(n + 2, vector<int>(m + 2, 0));
		// Using dp
		for (int j = 1; j <= m; ++j)
		{
			for (int i = 1; i <= n; ++i)
			{
				dp[i][j] = arr[i][j] + max(dp[i - 1][j - 1], max(dp[i][j - 1], dp[i + 1][j - 1]));
				ans = max(ans, dp[i][j]);
			}
		}
		cout << ans << endl;
	}
	return 0;
}
