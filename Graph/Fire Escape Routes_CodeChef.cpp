#include <bits/stdc++.h>

#define mod 1000000007
using namespace std;

void dfs(vector<vector<long long int>> &adj, vector<bool> &vis, long long int root, long long int &c){
    vis[root]=true;
    c++;

    for(auto ele:adj[root]){
        if(!vis[ele]){
            dfs(adj, vis, ele, c);
        }
    }
}

int main(){
    long long int t;
    cin>>t;
    while(t--){
        long long int n,m,u,v;
        cin>>n>>m;
        vector<vector<long long int>>adj(n+1);
        for(long long int i=0;i<m;i++){
            cin>>u>>v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        long long int cc_componenet=0,ans1=1;
        vector<bool>vis(n+1,false);
        for(long long int i=1;i<=n;i++){
            long long int component=0;
            if(!vis[i]){
                dfs(adj, vis, i, component);
                cc_componenet++;
                ans1=(ans1*component) % mod;
            }
        }
        cout<<cc_componenet<<" "<<ans1<<endl;
    }
    return 0;
}