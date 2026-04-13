class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue<pair<int,int>> pq;

        for(int i = 1; i <= score.size(); i++){
            pq.push({score[i-1], i-1});  
        }

        vector<string> result(score.size());
        int rank = 1;

        while(!pq.empty()){  
            auto top = pq.top(); 
            pq.pop();

            int idx = top.second;

            if(rank == 1){
                result[idx] = "Gold Medal";
            }
            else if(rank == 2){
                result[idx] = "Silver Medal";
            }
            else if(rank == 3){
                result[idx] = "Bronze Medal";
            }
            else{
                result[idx] = to_string(rank);
            }

            rank++;
        }

        return result;
    }
};