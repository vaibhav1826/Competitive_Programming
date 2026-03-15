//1929. Concatenation of Array

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size=nums.size();
        vector<int>arr((2*size),0);
        for(int i=0;i<size;i++){
            arr[i]=nums[i];
        }
        for(int i=0;i<size;i++){
            arr[size+i]=nums[i];
        }
        return arr;
    }
};