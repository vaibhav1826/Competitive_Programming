class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int>map;
        map[0]=1;
        int sum=0;
        int res=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int need=sum%k;
            if(need<0){
                need+=k;
            }
            if(map.find(need)!=map.end()){
                res+=map[need];
            }
            map[need]++;
        }
        return res;
    }
};