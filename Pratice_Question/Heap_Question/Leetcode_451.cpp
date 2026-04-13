class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int>map;
        for(int i=0;i<s.length();i++){
            map[s[i]]++;
        }
        priority_queue<pair<int,char>>pq;
        for(auto it: map){
            pq.push({it.second,it.first});
        }
        string result="";
        while(!pq.empty()){
            auto a = pq.top();
            pq.pop();

            for(int i = 0; i < a.first; i++){
            result += a.second;
    }
}
        return result;
    }
};