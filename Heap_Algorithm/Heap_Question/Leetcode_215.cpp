#include <queue>
class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int>arr;
        for(int i=0;i<nums.size();i++){
            arr.push(nums[i]);
        }
        int largest=0;
        for(int i=0;i<k;i++){
            largest=arr.top();
            arr.pop();
        }
        return largest;
    }
};