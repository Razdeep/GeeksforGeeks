// https://practice.geeksforgeeks.org/problems/fractional-knapsack/0
#include <iostream>
#include <vector>
#include <algorithm>
#define all(v) v.begin(), v.end()
using namespace std;
struct Item
{
    double value, weight;
};
bool comp(struct Item& a, struct Item& b)
{
    double rate_a = a.value / a.weight;
    double rate_b = b.value / b.weight;
    return rate_a > rate_b;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int no_of_items, knapsack_capacity;
        cin >> no_of_items >> knapsack_capacity;
        vector<struct Item> arr(no_of_items);
        for (int i = 0; i < no_of_items; ++i)
            cin >> arr[i].value >> arr[i].weight;

        sort(all(arr), comp);
        double cur_weight = 0, cur_value = 0;
        for (int i = 0; i < no_of_items; ++i)
        {
            if (cur_weight + arr[i].weight <= knapsack_capacity)
            {
                cur_weight += arr[i].weight;
                cur_value += arr[i].value;
            }
            else
            {
                double remaining = knapsack_capacity - cur_weight;
                cur_weight += remaining;
                cur_value += (arr[i].value / arr[i].weight) * remaining;
            }            
        }
        // cout << (double)cur_value << "\n";
        printf("%.2f\n", cur_value);
    }
    return 0;
}