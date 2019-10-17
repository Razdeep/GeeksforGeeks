// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes/0
#include <iostream>
#include <queue>
#define all(v) v.begin(), v.end()
typedef long long ll;
using namespace std;
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        vector<ll> arr(n);
        for (ll i = 0; i < n; ++i)
            cin >> arr[i];
        priority_queue<ll, vector<ll>, std::greater<ll>> pq(all(arr));
        ll ans = 0;
        while(pq.size() >= 2)
        {
            ll first = pq.top();
            pq.pop();
            ll second = pq.top();
            pq.pop();
            ans += (first + second);
            pq.push((first + second));
        }
        cout << ans << endl;
    }
    return 0;
}