#include <bits/stdc++.h>
using namespace std;

void dfs(vector<vector<int>> adj, vector<bool> &vis, int root, int c){
    vis[root]=true;
    for(auto ele:adj[root]){
        if(!vis[ele]){
            dfs(adj, vis, ele, c);
        }
    }
    c++;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,u,v;
        cin>>n>>m;
        vector<vector<int>>adj(n);
        for(int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        int cc_componenet=0,ans1=1;

        vector<bool>vis(n,false);
        for(int i=1;i<=n;i++){
            int component=0;
            if(!vis[i]){
                dfs(adj, vis, i, component);
                cc_componenet++;
                ans1*=component;
            }
        }
        cout<<cc_componenet<<" "<<ans1<<endl;
    }
    return 0;
}