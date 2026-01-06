#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void generate(vector<string> &set, string &dp, int open, int close, int n)
    {
        if (dp.size() == 2 * n)
        {
            set.push_back(dp);
            return;
        }
        if (open < n)
        {
            dp.push_back('(');
            generate(set, dp, open + 1, close, n);
            dp.pop_back();
        }
        if (close < open)
        {
            dp.push_back(')');
            generate(set, dp, open, close + 1, n);
            dp.pop_back();
        }
    };

    vector<string> generateParenthesis(int n)
    {
        vector<string> set;
        string dp = "";
        generate(set, dp, 0, 0, n);
        return set;
    }
};