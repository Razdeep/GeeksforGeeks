#include <iostream>
#include <vector>
using namespace std;
int findEquilibrium(int arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)
		sum += arr[i];
	int prefix_sum[n];
	prefix_sum[0] = arr[0];
	for (int i = 1; i < n; ++i)
		prefix_sum[i] = prefix_sum[i - 1] + arr[i];
	for (int i = 0; i < n; ++i)
		if (prefix_sum[i] - arr[i] == sum - prefix_sum[i])
			return i;
	return -1;
}
int main()
{
	int testcase;
	cin >> testcase;
	while (testcase--)
	{
		int n;
		cin >> n;
		int arr[n];
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		cout << findEquilibrium(arr, n) << endl;
	}
	return 0;
}
