// https://practice.geeksforgeeks.org/problems/count-numbers-containing-4/0
#include <iostream>
#include <vector>
using namespace std;
const int MAX = 1e6 + 5;
bool contains4(int n)
{
	while(n)
	{
		if (n % 10 == 4)
			return true;
		n /= 10;
	}
	return false;
}
int main()
{
	int testcase;
	cin >> testcase;
	// Preprocessing
	vector<int> dp(MAX, 0);
	for (int i = 1; i < MAX; ++i)
	{
		dp[i] = dp[i - 1] + contains4(i);	
	}
	while(testcase--)
	{
		int n;
		cin >> n;
		cout << dp[n] << endl;
	}
	return 0;
}
