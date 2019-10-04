// https://practice.geeksforgeeks.org/problems/reach-a-given-score/0
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e3 + 5;
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
		for (int i = 3; i <= n; ++i)
			dp[i] += dp[i - 3];
		for (int i = 5; i <= n; ++i)
			dp[i] += dp[i - 5];
		for (int i = 10; i<= n; ++i)
			dp[i] += dp[i - 10];
		cout << dp[n] << endl;
	}
	return 0;
}
