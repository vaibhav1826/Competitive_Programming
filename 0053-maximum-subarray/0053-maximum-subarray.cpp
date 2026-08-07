class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int largest=INT_MIN;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            largest=max(sum,largest);
            if(sum<0){
                sum=0;
            }
        }
        return largest;
    }
};