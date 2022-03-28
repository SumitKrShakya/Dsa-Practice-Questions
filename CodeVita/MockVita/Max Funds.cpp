#include<bits/stdc++.h>

using namespace std;

void dfs(vector<vector<int>>&adj, vector<bool>&vis, vector<int>&amt ,int node,int &curr){
    vis[node]=true;
    curr+=amt[node];
    for(auto child: adj[node]){
        if(!vis[child]){
            dfs(adj, vis , amt, child, curr);
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>amount(n+1);
    int temp;
    for(int i=0;i<n;i++){
        cin>>temp;
        amount[i+1]=temp;
    }
    int conn;
    cin>>conn;
    vector<vector<int>>adj(n+1);
    vector<bool>vis(n+1);
    int u,v;
    for(int i=0;i<conn;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int curr=0;
    int ans=0;
    for(int i=1;i<=n;i++){
        curr=0;
        dfs(adj, vis , amount,i,curr);
        ans=max(ans,curr);
    }
    
    cout<<ans<<endl;

    return 0;
}