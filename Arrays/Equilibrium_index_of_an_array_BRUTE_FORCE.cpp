#include <iostream>
#include <vector>
using namespace std;
int findEquilibrium(vector<int>& arr)
{
	for (int i = 0; i < arr.size(); ++i)
	{
		int left, right;
		left = right = 0;
		for (int j = 0; j < i; ++j) 			left += arr[j];
		for (int j = i + 1; j < arr.size(); ++j)	right += arr[j];
		if (left == right)	return i;
	}
	return -1;
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
		cout << findEquilibrium(arr) << endl;
	}
	return 0;
}
