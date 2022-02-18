#include <bits/stdc++.h>
using namespace std;
void bfs(vector<vector<int>> &v1,int v){
    cout<<"sdfds";
    vector<bool>vis(v,false);
    for(int i = 1;i<v;i++){
        if(!vis[i]){
            queue<int>q1;
            q1.push(i);
            vis[i] = true;
            while(!q1.empty()){
                int popval = q1.front();
                q1.pop();
                cout<<popval<<" ";
                for(int j = 0;j<v1[popval].size();j++){
                    if(!vis[v1[i][j]]){
                        q1.push(v1[i][j]);
                        vis[j] = true;
                    }
                }
            }
        }
    }
}

int main(void){
    // create adjacency list
    vector<vector<int>> v1;
    int n ;
    cin>>n;
    for(int i = 0;i<n+1;i++){
        vector<int>v2;
        int a ;
        cin>>a;
        for(int j = 0;j<a;j++){
            int b ;
            cin>>b ;
            v2.push_back(b);
        }
        v1.push_back(v2);
    }

    for(int i=1;i<v1.size();i++){
        for(int j=0;j<v1[i].size();j++){
            cout<<v1[i][j]<<" 3";
        }
        cout<<" 2 ";
        cout<<"sdfds";
    }
    
    bfs(v1,n + 1);
    return 0;
}