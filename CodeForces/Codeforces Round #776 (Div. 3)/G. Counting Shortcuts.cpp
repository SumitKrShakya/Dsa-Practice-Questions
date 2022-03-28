#include<bits/stdc++.h>

using namespace std;

void bfs(vector<vector<int>>&adj, vector<bool>&vis,vector<int>& dist, int node, int &s, int &e){
    queue<int>q;
    q.push(node);
    dist[node]=0;
    vis[node]=true;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        for(auto ele : adj[f]){
            if(!vis[ele]){
                q.push(ele);
                dist[ele]=dist[f]+1;
                vis[f]=true;
            }
        }
    }
}

int main(){

    int t;
    cin>>t; 
    while(t--){
        int n, m, s, t, u, v;
        cin>>n>>m>>s>>t;
        vector<vector<int>>adj(n+1);
        vector<bool>vis(n+1);
        vector<int>dist(n+1);
        for(int i=0;i<n;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        bfs();
    }
    
    return 0;
}