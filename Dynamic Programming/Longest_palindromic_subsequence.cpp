// https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence/0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int lps(string& text)
{
	int n = int(text.size());
	vector<vector<int>> dp(n, vector<int>(n, 0));

	for (int i = 0; i < n; ++i)
		dp[i][i] = 1;

	for (int len = 2; len <= n; ++len)
	{
		for (int start = 0; start < n - len + 1; ++start)
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
int main()
{
	int tc;
	cin >> tc;
	while (tc--)
	{
		string text;
		cin >> text;
		cout << lps(text) << endl;
	}
	return 0;
}
