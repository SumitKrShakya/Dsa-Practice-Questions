#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;

int main(void){
    int n,m,a,b,w;
    cin>>n>>m;
    vector< vector<pair<int,int>> > adj(n+1);

    vector<int>dist(n+1,INF);

    while(m--){
        cin>>a>>b>>w;
        adj[a].push_back({b,w});
        adj[b].push_back({a,w});
    }

    priority_queue< pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>> > pq;

    pq.push({0,1});
    dist[1]=0;
    while(!pq.empty()){
        int curr = pq.top().second;
        int curr_d = pq.top().first;
        pq.pop();

        if(dist[curr]!=curr_d) continue;
        for(auto child : adj[curr]){
            if(curr_d + child.second < dist[child.first]){
                dist[child.first] = curr_d + child.second;
                pq.push({dist[child.first],child.first});
            }
        }
    }

    for(int i=1;i<=n;i++){
        cout<<i<<" -> "<<dist[i]<<endl;
    }
    
    return 0;
}