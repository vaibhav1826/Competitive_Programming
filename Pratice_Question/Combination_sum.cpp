#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<vector<int>> combination(vector<int> &candidates, vector<vector<int>> &combinations, vector<int> &dp, int target, int index)
    {
        if (index == candidates.size())
        {
            if (target == 0)
            {
                combinations.push_back(dp);
            }
            return combinations;
        }
        if (target >= candidates[index])
        {
            dp.push_back(candidates[index]);
            combination(candidates, combinations, dp, target - candidates[index], index);
            dp.pop_back();
        }
        combination(candidates, combinations, dp, target, index + 1);
        return combinations;
    };

    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> combinations;
        vector<int> dp;
        return combination(candidates, combinations, dp, target, 0);
    }
};