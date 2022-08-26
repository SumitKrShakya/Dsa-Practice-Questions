#include<bits/stdc++.h>
using namespace std;

class Solution
{
	public:
	//Function to find the shortest distance of all the vertices
    //from the source vertex S.
    // vector <int> dijkstra(int n, vector<vector<int>> adj[], int s) {
        
        
    //     priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
    //     vector<int>dist(n,1e9+7);
        
    //     pq.push({0,s});
    //     dist[s]=0;
    //     while(!pq.empty()){
    //         int curr = pq.top().second;
    //         int curr_d = pq.top().first;
    //         pq.pop();
    //         for(auto edge :adj[curr]){
    //             if(curr_d + edge[1] < dist[edge[0]]){
    //                 dist[edge[0]] = curr_d + edge[1];
    //                 pq.push({dist[edge[0]], edge[0]});
    //             }
    //         }
    //     }
        
        
        
    //     return dist;
        
        
    // }
    
    
    
    
    vector <int> dijkstra(int n, vector<vector<int>> adj[], int s) {
        
        pair<int, pair<string, int> >start ={s, {to_string(s), 0}};
        priority_queue<pair<int, pair<string, int> >, vector<pair<int, pair<string, int> >>, greater<pair<int, pair<string, int> >> >pq;
        
        
        vector< pair<string, int> >ans(n);
        vector<int>vis(n,0);
        pq.push(start);
        
        while(!pq.empty()){
            int currNode = pq.top().first;
            string currPath = pq.top().second.first;
            int currDist = pq.top().second.second;
            pq.pop();
            vis[currNode]=1;
            ans[currNode] = {currPath, currDist};
            
            for(auto child : adj[currNode]){
                int childNode = child[0];
                int childDist = child[1];
                if(!vis[childNode]){
                    pq.push({childNode, {currPath + to_string(childNode), currDist + childDist }});
                }
            }
        }
        
        for(int i=0;i<n;i++){
            cout<<i<<" via "<<ans[i].first<<" w "<<ans[i].second<<endl;
        }
        
        vector<int>dist(n);
        for(int i=0;i<n;i++){
            dist[i]=ans[i].second;
        }
        
        
        return dist;
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
};