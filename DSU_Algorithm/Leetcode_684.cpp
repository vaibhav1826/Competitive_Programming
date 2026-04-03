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

    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n=edges.size();
        DSU dsu(n+1);
        for(int i=0 ;i<n;i++){
            if(dsu.find(edges[i][0])==dsu.find(edges[i][1])){
                return {edges[i][0],edges[i][1]};
            }
            dsu.unite(edges[i][0],edges[i][1]);
        }
        return {};
    }
};