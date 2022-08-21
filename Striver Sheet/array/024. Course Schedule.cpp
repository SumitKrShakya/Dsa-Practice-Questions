#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canFinish(int n, vector<vector<int>>& pre) {
        vector<int>adj[n];
        vector<int> vis(n,0);        
        vector<int> in(n,0);

        for(auto x: pre){
            int u = x[0]; //1
            int v = x[1]; //0
            adj[v].push_back(u);
            in[u]++;
        }
        
        queue<int>q;
        for(int i=0;i<n;i++){
            if(in[i]==0){
                q.push(i);
            }
        }
        
        while(!q.empty()){
            int f = q.front();
            q.pop();
            vis[f]=1;
            for(auto child : adj[f]){
                in[child]--;
                if(in[child]==0){
                    q.push(child);
                }
            }
        }
        
        for(int i=0;i<n;i++){
            if(!vis[i]){
                return false;
            }
        }
        return true;
    }
};