#include <queue>
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int>arr;
        for(int i=0;i<stones.size();i++){
            arr.push(stones[i]);
        }
        while(arr.size()>1){
            int x=arr.top();
            arr.pop();
            int y=arr.top();
            arr.pop();
            if(x!=y){
                arr.push(abs(y-x));
            }
        }
        if(arr.empty()){
            return 0;
        }
        return arr.top();
    }
};