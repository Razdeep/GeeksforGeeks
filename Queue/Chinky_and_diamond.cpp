// https://practice.geeksforgeeks.org/problems/chinky-and-diamonds/0
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, k;
        cin >> n >> k;
        priority_queue<int> pq;
        for (int i = 0; i < n; ++i)
        {
            int x;
            cin >> x;
            pq.push(x);
        }
        long long ans = 0;
        while(k--)
        {
            ans += pq.top();
            pq.push(pq.top() / 2);
            pq.pop();
        }
        cout << ans << endl;
    }
    return 0;
}