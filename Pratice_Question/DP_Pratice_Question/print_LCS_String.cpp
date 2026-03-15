#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int longestCommonSubsequence(string text1, string text2)
    {
        int m = text1.length();
        int n = text2.length();
        vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

        for (int i = 1; i <= m; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (text1[i - 1] == text2[j - 1])
                {
                    dp[i][j] = 1 + dp[i - 1][j - 1];
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }
        int i1 = m;
        int j1 = n;
        string str = "";
        while (i1 > 0 && j1 > 0)
        {
            if (text1[i1 - 1] == text2[j1 - 1])
            {
                str.push_back(text1[i1 - 1]);
                i1--;
                j1--;
            }
            else if (dp[i1 - 1][j1] > dp[i1][j1 - 1])
            {
                i1--;
            }
            else
            {
                j1--;
            }
        }
        reverse(str.begin(), str.end());
        cout << str;
        return dp[m][n];
    }
};