#include<bits/stdc++.h>
using namespace std;


void transDfs(vector<vector<int>> &transAdj, vector<int>&transVis, vector<int> &SSC, int transNode){
    transVis[transNode]=1;
    for(auto transChild : transAdj[transNode]){
        if(!transVis[transChild]){
            transDfs(transAdj, transVis, SSC, transChild);
        }
    }
    SSC.push_back(transNode);
}

void dfsOrder(vector<vector<int>>&adj, vector<int>&vis, vector<int>&order, int node){
    vis[node]=1;
    for(auto child:adj[node]){
        if(!vis[child]){
            dfsOrder(adj, vis, order, child);
        }
    }
    order.push_back(node);
}

vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges) {
    vector<vector<int>>adj(n);
    vector<int>vis(n,0);
    vector<vector<int>>transAdj(n);
    vector<int>transVis(n,0);
    vector<int>order;

    for(auto x:edges){
        int u = x[0];
        int v = x[1];
        adj[u].push_back(v);
        transAdj[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfsOrder(adj, vis, order, i);
        }
    }
    
    vector<vector<int>>ans;
    int k = order.size();
    for(int i = k-1;i>=0;i--){
        int x = order[i];
        if(!transVis[x]){
            vector<int>SSC;
            transDfs(transAdj, transVis, SSC, x);
            ans.push_back(SSC);
        }
    }
    return ans;   
}