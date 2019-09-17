// https://practice.geeksforgeeks.org/problems/next-larger-element/0
// https://www.geeksforgeeks.org/next-greater-element-in-same-order-as-input/
#include <iostream>
#include <vector>
#include <stack>
typedef long long ll;
using namespace std;
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		stack<ll> st;
		vector<ll> arr(n, 0LL), ans(n, 0LL);
		for (int i = 0; i < n; ++i)
			cin >> arr[i];
		for (int i = int(arr.size()) - 1; i >= 0; --i)
		{
			while (!st.empty() && arr[i] >= st.top())
				st.pop();
			if (st.empty())
				ans[i] = -1;
			else
				ans[i] = st.top();
			st.push(arr[i]);	
		}
		for (int i = 0; i < int(ans.size()); ++i)
			cout << ans[i] << " ";
		cout << endl;
	}
	return 0;
}
