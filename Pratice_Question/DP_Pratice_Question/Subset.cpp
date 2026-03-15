#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void subset(vector<vector<int>> &set, vector<int> &dp, vector<int> &nums, int index)
    {
        if (index >= nums.size())
        {
            set.push_back(dp);
            return;
        }
        dp.push_back(nums[index]);
        subset(set, dp, nums, index + 1);
        dp.pop_back();
        subset(set, dp, nums, index + 1);
    };
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> dp;
        vector<vector<int>> set;
        subset(set, dp, nums, 0);
        return set;
    }
};