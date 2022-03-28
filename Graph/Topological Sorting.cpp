#include<bits/stdc++.h>

using namespace std;

void kahn(vector<vector<int>>&adj, vector<int>&in, int n){
    vector<int>ans;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=1;i<=n;i++){
        if(in[i]==0){
            pq.push(i);
        }
    }
    while(!pq.empty()){
        int curr = pq.top();
        pq.pop();
        ans.push_back(curr);
        for(auto child:adj[curr]){
            in[child]--;
            if(in[child]==0){
                pq.push(child);
            }
        }
    }

    if(n==ans.size()){
        for(auto ele: ans){
            cout<<ele<<" ";
        }
    }else{
        // cout<<ans.size()<<" "<<n<<endl;
        cout<<"Sandro fails."<<endl;
    }
}

int main(){
    int n,m,u,v;

    cin>>n>>m;
    vector<vector<int>>adj(n+1);
    vector<int>in(n+1,0);

    for(int i=0;i<m;i++){
        cin>>u>>v;
        adj[u].push_back(v);
        in[v]++;
    }
    kahn(adj, in , n);
    return 0;
}