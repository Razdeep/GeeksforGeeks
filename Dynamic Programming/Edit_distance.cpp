// https://practice.geeksforgeeks.org/problems/edit-distance/0

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int len1, len2;
        cin >> len1 >> len2;
        string text1, text2;
        cin >> text1 >> text2;
        vector<vector<int>> dp(len1, vector<int>(len2, 0));
        for (int i = 0; i < len1; ++i)
        {
            for (int j = 0; j < len2; ++j)
            {
                if (i == 0)
                    dp[i][j] = j;
                else if (j == 0)
                    dp[i][j] = i;
                else if (text1[i] == text2[j])
                    dp[i][j] = dp[i - 1][j - 1];
                else 
                    dp[i][j] = 1 + min(dp[i - 1][j], min(dp[i][j - 1], dp[i - 1][j - 1]));
            }
        }
        cout << dp[len1 - 1][len2 - 1] << endl;
    }
}