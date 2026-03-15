//1480. Running Sum of 1d Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum=sum+nums[i];
            nums[i]=sum;
        }
        return nums;

    }
};