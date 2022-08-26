#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool dfs(vector<vector<int>>& graph, vector<bool>&vis, int root, vector<int> &col, int c){
        vis[root]=true;
        col[root]=c;
        for(auto ele : graph[root]){
            
            if(!vis[ele]){
                if(!dfs(graph, vis, ele, col, c^1)){
                    return false;
                }
            }else{
                    if(col[root]==col[ele]) 
                        return false;
                }
        }
        return true;
    }
    
    bool isBipartite(vector<vector<int>>& graph) {
        
        int n = graph.size();
        vector<bool>vis(n,0);
        vector<int>col(n,-1);
        bool ans=true;
        for(int i=0;i<n;i++){
            if(!vis[i]){
                ans = dfs(graph, vis, i, col, 1);
                if(ans== false){
                    return false;
                }
            }
            
        }
         
        
        // for(auto x: col )cout<<x<<" ";cout<<endl;
        // for(auto x: vis )cout<<x<<" ";cout<<endl;
        
        return ans;
        
        
        
        
    }
};