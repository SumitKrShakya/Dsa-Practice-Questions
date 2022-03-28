#include<bits/stdc++.h>

using namespace std;

void cutVertex(vector<vector<int>> &adj, vector<bool> &vis, vector<int>&in, vector<int>& low,int node, int parent,int &timer, unordered_set<int>&ans){
    vis[node]=true;
    in[node]=low[node]=timer;
    timer++;
    int children=0;
    for(auto child:adj[node]){
        if(child == parent) continue;

        if(vis[child]){
            low[node] = min(low[node],in[child]);
        }else{
            cutVertex(adj, vis, in, low, child, node, timer, ans);
            children++;
            if(low[child]>=in[node] && parent != -1){
                ans.insert(node);
            }
            low[node]=min(low[node],low[child]);
        }
    }
    if(children>1 && parent==-1){
        ans.insert(node);
    }
}

int main(){
    int n,m,u,v,timer;
    while(true){
        cin>>n>>m;
        if(n==0 && m==0){
            break;
        }
        vector<vector<int>>adj(n+1);
        vector<bool>vis(n+1,false);
        vector<int>in(n+1);
        vector<int>low(n+1);
        unordered_set<int>ans;
        for(int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        timer=0;
        cutVertex(adj, vis, in, low, 1, -1, timer, ans);
        cout<<ans.size()<<endl;
    }
    return 0;
}