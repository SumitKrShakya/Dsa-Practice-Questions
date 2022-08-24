#include<bits/stdc++.h>
using namespace std;

void dfshelper(vector<vector<int>> &adj, vector<int> &vis, int node, stack<int> &st){
    vis[node]=1;
    for(auto child:adj[node]){
        if(!vis[child]){
            dfshelper(adj, vis, child, st);
        }
    }
    st.push(node);
}
vector<int> dfs(vector<vector<int>> &adj, vector<int> &vis, int n) {
    stack<int>st;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            dfshelper(adj, vis, i, st);
        }
    }
    vector<int>ans;
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}

vector<int> bfs(vector<vector<int>> &adj, vector<int> &indegree, int n) {
    queue<int>q;
    vector<int>ans;
    for(int i=0;i<n;i++) {
        for(auto x:adj[i]) {
            indegree[x]++;
        }
    }

    for(int i=0;i<n;i++) {
        if(indegree[i]==0) {
            q.push(i);
        }
    }
    int cnt=0;
    while(!q.empty()) {
        int f = q.front();
        q.pop();
        cnt++;
        ans.push_back(f);
        for(auto child: adj[f]) {
            indegree[child]--;
            if(indegree[child]==0) {
                q.push(child);
            }
        }
    }
    
    return ans;
}


vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
    vector<vector<int>>adj(v);
    vector<int>visbfs(v,0);
    vector<int>visdfs(v,0);
    for(auto x:edges){
        int U = x[0];
        int V = x[1];
        adj[U].push_back(V);
    }

    vector<int>bfsans = bfs(adj, visbfs, v);
    return bfsans;
    vector<int>dfsans = dfs(adj, visdfs, v);
    return dfsans;
    
}