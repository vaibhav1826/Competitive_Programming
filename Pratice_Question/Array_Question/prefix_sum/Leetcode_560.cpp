// Prefix sum using Hashmap 

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        int sum=0;
        int res=0;
        map[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int need=sum-k;
            if(map.find(need)!=map.end()){
                res+=map[need];
            }
            map[sum]++;
        }
        return res;
    }
};