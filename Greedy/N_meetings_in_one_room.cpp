// https://practice.geeksforgeeks.org/problems/n-meetings-in-one-room/0
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
struct Activity{
    int starting, ending, id;
};
bool comp(struct Activity& a, struct Activity& b)
{
    if (a.ending == b.ending)
    {
        return a.starting < b.starting;
    }
    return a.ending < b.ending;
}
int main()
{
    int tc; 
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        vector<Activity> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i].starting;
            arr[i].id = i + 1;
        }
        for (int i = 0; i < n; ++i)
            cin >> arr[i].ending;
        sort(all(arr), comp);
        cout << arr[0].id << " ";
        int cur_ending = arr[0].ending;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i].starting >= cur_ending)
            {
                cout << arr[i].id << " ";
                cur_ending = arr[i].ending;
            }
        }
        cout << endl;
    }
    return 0;
}