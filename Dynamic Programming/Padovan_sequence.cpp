// https://practice.geeksforgeeks.org/problems/padovan-sequence/0
#include <iostream>
#include <vector>
using namespace std;
const int MOD = 1e9 + 7;
const int MAX = 1e3 + 3;
int main()
{
	int testcase;
	cin >> testcase;
	vector<int> dp(MAX, 0);
	dp[0] = dp[1] = dp[2] = 1;
	for (int i = 3; i < MAX; ++i)
		dp[i] = (dp[i - 2] + dp[i - 3]) % MOD;
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
