#include<bits/stdc++.h>
using namespace std;
int dfs(vector<vector<int>>& adj, vector<int>& vis, int node, int parent){
    vis[node]=1;
    for(auto child : adj[node]){
        if(!vis[child]){
            if(dfs(adj, vis, child, node)){
                return 1;
            }
        }else{
            if(child!=parent)
                return 1;
        }
    }
    return 0;
}
int bfs(vector<vector<int>> &adj, vector<int> &vis, int node){
    queue<pair<int, int>>q;
    q.push({node,-1});
    vis[node]=1;
    while(!q.empty()){
        pair<int,int> f = q.front();
        q.pop();
        for(auto child: adj[f.first]){
            if(!vis[child]){
                q.push({child,f.first});
                vis[child]=1;
            }else{
                if(child!=f.second){
                    return 1;
                }
                
            }
        }
    }
    return 0;
}

string cycleDetection (vector<vector<int>>& edges, int n, int m)
{
    vector<vector<int>>adj(n+1);
    vector<int>visbfs(n+1,0);
    vector<int>visdfs(n+1,0);
    for(auto x:edges){
        int u = x[0];
        int v = x[1];
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int a = 0, b = 0;
    for(int i=1;i<=n;i++){
        if(!visdfs[i]){
            if(dfs(adj, visdfs, i, -1)){
                a=1;
                break;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(!visbfs[i]){
            if(bfs(adj, visbfs, i)){
                b=1;
                break;
            }
        }
    }
    if(a == 1 && b == 1){
        return "Yes";
    }
    return "No";
}
