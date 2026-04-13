class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>pq;
        for(int i=0;i<gifts.size();i++){
            pq.push(gifts[i]);
        }
        while(k>0){
            int max=pq.top();
            pq.pop();
            pq.push(floor(sqrt(max)));
            k--;    
        }
        long long sum=0;
        while(!pq.empty()){
            long long  a= pq.top();
            sum+=a;
            pq.pop();
        }
        return sum;
    }
};