// algorithm for 0/1 knapsack

#include <bits/stdc++.h>
using namespace std;

int knapsack(int W, vector<int> &wt, vector<int> &val)
{
    vector<int> dp(W + 1, 0);
    for (int i = 0; i < wt.size(); i++)
    {
        for (int w = W; w >= wt[i]; w--)
        {
            dp[w] = max(dp[w], val[i] + dp[w - wt[i]]);
        }
    }
    return dp[W];
}

int main()
{
    int W = 7;
    vector<int> wt = {1, 3, 4, 5};
    vector<int> val = {1, 4, 5, 7};

    cout << knapsack(W, wt, val) << endl;

    return 0;
}
