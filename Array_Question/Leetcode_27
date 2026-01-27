//27. Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=nums.size()-1;
        int j=0;
        while(j<=i){
            if(nums[j]==val){
                swap(nums[j],nums[i]);
                i--;
            }
            else{
                j++;
            }
        }
        return i+1;
    }
};