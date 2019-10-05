// https://practice.geeksforgeeks.org/problems/skip-the-work/0
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int solve(vector<int>& arr)
{
	int n = int(arr.size());
	vector<int> incl(n, 0), excl(n, 0);
	incl[0] = arr[0];
	for (int i = 1; i < n; ++i)
	{
		incl[i] = arr[i] + min(incl[i - 1], excl[i - 1]);
		excl[i] = incl[i - 1];
	}
	return min(incl[n - 1], excl[n - 1]);
}
int main()
{
	int tc;
	cin >> tc;
	while(tc--)
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
