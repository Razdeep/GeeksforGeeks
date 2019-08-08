#include <iostream>
#include <vector>
#include <algorithm>
#define deb(x) cerr << #x << " --> 
#define all(v) v.begin(), v.end()
using namespace std;

bool solve(vector<int>& arr)
{
	int n = arr.size();
	vector<int> prefix(n, 0);
	prefix[0] = arr[0];
	for (int i = 1; i < n; ++i)
		prefix[i] = prefix[i - 1] + arr[i];
	sort(all(prefix));
	for (int i = 0; i + 1 < n; ++i)
	{
		if (prefix[i] == prefix[i + 1] || prefix[i] == 0 || prefix[i + 1] == 0)
			return true;
	}
	return false;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		vector<int> arr(n, 0);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		cout << (solve(arr) ? "Yes" : "No") << endl;
	}
	return 0;
}
