// https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions/0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int lps(string& text)
{
	int n = int(text.size());
	vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
	for (int i = 0; i < n; ++i)
		dp[i][i] = 1;
	for (int len = 2; len <= n; ++len)
	{
		for(int start = 0; start < n - len + 1; ++start)
		{
			int end = start + len - 1;
			if ((text[start] == text[end]) && (len == 2))
			{
				dp[start][end] = 2;
			}
			else if (text[start] == text[end])
			{
				dp[start][end] = 2 + dp[start + 1][end - 1];
			}
			else
			{
				dp[start][end] = max(dp[start + 1][end], dp[start][end - 1]);
			}
		}
	}
	return dp[0][n - 1];
}
signed main()
{
	int tc;
	cin >> tc; 
	while(tc--)
	{
		int n;
		cin >> n;
		string text;
		cin >> text;
		cout << (int(text.size()) - lps(text)) << endl;
	}
	return 0;
}
