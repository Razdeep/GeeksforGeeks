/**
 * --------------------------------------
 *  Maximum rectangle area of histogram
 * --------------------------------------
 *
 * @author: Rajdeep Roy Chowdhury
 *
 * Explanation: @TODO
 *
 * Complexity: Linear using stacks;
 *             Log Linear using segment trees and divide and conquer;
 *
 * SOLUTION USING STACKS
 *
**/

#include <iostream>
#include <climits>
#include <vector>
#include <stack>

typedef long long ll;

using namespace std;

void solve(vector<ll>& arr)
{
	int n = arr.size();
	stack<ll> st;
	ll answer = 0LL;
	ll i = 0, top;
	while (i < n)
	{
		if (st.empty() || arr[i] >= arr[st.top()])
		{
			st.push(i++);
		}
		else{
			//
			top = st.top();
			st.pop();
			ll area_with_popped_as_min_val = arr[top] * (st.empty() ? i : i - st.top() - 1);
			//answer = ( area_with_popped_as_min_val > answer ? area_with_popped_as_min_val : answer);
			if (area_with_popped_as_min_val > answer)
				answer = area_with_popped_as_min_val;
		}
	}
		while(!st.empty())
		{
			top = st.top();
			st.pop();
			ll area_with_popped_as_min_val = arr[top] * (st.empty() ? i : i - st.top() - 1);
			answer = (area_with_popped_as_min_val > answer ? area_with_popped_as_min_val : answer);
		}
	
	cout << answer << endl;
}
int main()
{
	int testcase;
	cin >> testcase;
	while(testcase--)
	{
		int n;
		cin >> n;
		vector<ll> arr(n, 0);
		for (int i = 0; i < n; ++i)  cin >> arr[i];
		solve(arr);
	}
	return 0;
}
