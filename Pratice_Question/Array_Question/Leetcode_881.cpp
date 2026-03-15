// 881. Boats to Save People

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int i=0;
        int j=people.size()-1;
        sort(people.begin(),people.end());
        int count=0;
        while(i<=j){
            if(people[j]==limit){
                count++;
                j--;
            }
            else if(people[i]==limit){
                count++;
                i++;
            }
            else if((people[i]+people[j])<=limit){
                count++;
                j--;
                i++;
            }
            else{
                if(people[j]<limit){
                    count++;
                    j--;
                }
            }
        }
        return count;
    }
};