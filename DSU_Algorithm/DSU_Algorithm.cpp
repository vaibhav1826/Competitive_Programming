#include <iostream>
using namespace std;

class DSU{
public:
vector<int>rank,parent;

DSU(int n){  // constructor
    rank.resize(n,0);
    parent.resize(n);
    for(int i=0 ;i<n ;i++){
        parent[i]=i;
    }
}

int find(int x){  // Path Compression
    if(parent[x]!=x){
        parent[x]=find(parent[x]);
    }
    return parent[x];
}

void unite(int x, int y){ // union by Rank 
    int px=find(x);
    int py=find(y);
    if(px == py) return;

    if(rank[px]>rank[py]){
        parent[py]=px;
    }
    else if(rank[px]<rank[py]){
        parent[px]=py;
    }
    else{
        parent[py]=px;
        rank[px]++;
    }
}

}