// https://practice.geeksforgeeks.org/problems/stickler-theif/0/?track=sp-dynamic-programming&batchId=105

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int solve(vector<int>& arr)
{
	int max_value;
	if (int(arr.size()) == 0)
		return 0;
	if (int(arr.size()) == 1)
		return arr[0];
	if (int(arr.size()) == 2)
		return max(arr[0], arr[1]);
	vector<int> dp(arr.size(), 0);
	dp[0] = arr[0];
	dp[1] = max(arr[0], arr[1]);
	dp[2] = max(arr[0] + arr[2], arr[1]);
	max_value = dp[2];
	for (int i = 3; i < dp.size(); ++i)
	{
		dp[i] = arr[i] + max(dp[i - 2], dp[i - 3]);
		max_value = max(max_value, dp[i]);	
	}
	return max_value;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		cout << solve(arr) << endl;
	}
	return 0;
}
