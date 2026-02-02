// 167. Two Sum II - Input Array Is Sorted

class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int i=0;
        int j=k;
        double maxaverage=0;
        while(j<nums.size()){
            int sum=0;
            for(int i=0;i<j;i++){
                sum+=nums[i];
            }
            double a=(double)sum/k;
            maxaverage=max(maxaverage,a);
            i++;
            j++;
        }
        return maxaverage;
    }
};