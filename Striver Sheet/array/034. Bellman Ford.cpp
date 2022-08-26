#include<bits/stdc++.h>
using namespace std;

int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
    vector<int>g(n+1,1e9);
    g[src]=0;
    for(;;){
        bool flag = false;
        for(int j=0;j<m;j++){
            if(g[edges[j][0]] < 1e9){
                if(g[edges[j][1]] > g[edges[j][0]]+edges[j][2]){
                    g[edges[j][1]] = g[edges[j][0]]+edges[j][2];
                    flag=true;
                }
            }
        }
        if(!flag)break;
    }
    return g[dest];
}