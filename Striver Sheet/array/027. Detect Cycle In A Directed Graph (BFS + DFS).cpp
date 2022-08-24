#include<bits/stdc++.h>
using namespace std;

int dfs(vector<vector<int>>& adj, vector<int>& vis, int node){
    vis[node]=1;
    for(auto child : adj[node]){
        if(!vis[child]){
            if(dfs(adj, vis, child)){
                return 1;
            }
        }else{
            if(vis[child]==1)
                return 1;
        }
    }
    vis[node]=2;
    return 0;
}

int bfs(vector<vector<int>> &adj, vector<int> &indegree, int n) {
    queue<int>q;
    for(int i=1;i<n+1;i++) {
        for(auto x:adj[i]) {
            indegree[x]++;
        }
    }
    for(int i=1;i<n+1;i++) {
        if(indegree[i]==0) {
            q.push(i);
        }
    }
    int cnt=0;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        cnt++;
        for(auto child: adj[f]) {
            indegree[child]--;
            if(indegree[child]==0) {
                q.push(child);
            }
        }
    }
    return !(n==cnt);
}

int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
    vector<vector<int>>adj(n+1);
    vector<int>visbfs(n+1,0);
    vector<int>visdfs(n+1,0);
    for(auto x:edges){
        int u = x.first;
        int v = x.second;
        adj[u].push_back(v);
    }
    int a = 0, b = 0;
    for(int i=1;i<=n;i++){
        if(!visdfs[i]){
            if(dfs(adj, visdfs, i)){
                a=1;
                break;
            }
        }
    }
    if(bfs(adj, visbfs, n))               
        b=1;
        
    if(a == 1 && b == 1){
        return 1;
    }
    return 0;
}
