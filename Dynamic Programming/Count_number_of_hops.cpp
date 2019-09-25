// https://practice.geeksforgeeks.org/problems/count-number-of-hops/0
#include <iostream>
#include <vector>
const int MAX = 100;
using namespace std;
int main()
{
	int tc;
	cin >> tc;
	while(tc--)
	{
		int n;
		cin >> n;
		vector<int> dp(MAX, 0);
		dp[0] = 1;
		dp[1] = 1;
		dp[2] = 2;
		for (int i = 3; i <= n; ++i)
			dp[i] += dp[i - 1] + dp[i - 2] + dp[i - 3];
		cout << dp[n] << endl;
	}
	return 0;
}
