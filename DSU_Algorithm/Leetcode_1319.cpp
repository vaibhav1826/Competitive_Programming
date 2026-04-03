class Solution {
public:
    class DSU{
        public:
        vector<int>parent,rank;
        DSU(int n){
            parent.resize(n);
            rank.resize(n,0);
            for(int i=0;i<n;i++){
                parent[i]=i;
            }
        }

        int find(int x){
            if(parent[x]!=x){
                parent[x]=find(parent[x]);
            }
            return parent[x];
        }

        void unite(int x,int y){
            int px=find(x);
            int py=find(y);
            if ( px==py) return;

            if(rank[px]>rank[py]){
                parent[py]=px;
            }
            else if(rank[py]>rank[px]){
                parent[px]=py;
            }
            else{
                parent[py]=px;
                rank[px]++;
            }
        }
    };
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size()<n-1){
            return -1;
        }

        DSU dsu(n);
        
        for(int i=0;i<connections.size();i++){
           dsu.unite(connections[i][0],connections[i][1]);
        }
        int count=0;
        for(int i=0;i<n;i++){
            if(dsu.find(i)==i){
                count++;
            }
        }
        return count-1;
    }
};