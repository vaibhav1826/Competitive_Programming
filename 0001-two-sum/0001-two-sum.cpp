class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>map;
        for(int i=0;i<nums.size();i++){
            int a=target-nums[i];
            if(map.find(a)!=map.end()){
                return {map[a],i};
            }
            map[nums[i]]=i;
        }
        return {};
    }
};