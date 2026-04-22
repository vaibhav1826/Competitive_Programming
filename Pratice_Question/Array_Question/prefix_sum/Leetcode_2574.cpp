class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int sum=0;
        for(auto it:nums){
            sum+=it;
        }
        int left=0;
        int right=0;
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
           right=sum-left-nums[i];
           arr.push_back(abs(right-left));
           left+=nums[i];

        }
        return arr;
    }
};