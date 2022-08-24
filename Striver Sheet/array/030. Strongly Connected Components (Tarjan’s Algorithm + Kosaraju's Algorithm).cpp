#include<bits/stdc++.h>
using namespace std;

void Kosaraju_TransDfs(vector<vector<int>> &transAdj, vector<int>&transVis, vector<int> &SSC, int transNode){
    transVis[transNode]=1;
    for(auto transChild : transAdj[transNode]){
        if(!transVis[transChild]){
            Kosaraju_TransDfs(transAdj, transVis, SSC, transChild);
        }
    }
    SSC.push_back(transNode);
}

void Kosaraju_DfsOrder(vector<vector<int>>&adj, vector<int>&vis, vector<int>&order, int node){
    vis[node]=1;
    for(auto child:adj[node]){
        if(!vis[child]){
            Kosaraju_DfsOrder(adj, vis, order, child);
        }
    }
    order.push_back(node);
}

vector<vector<int>> Kosaraju_s (vector<vector<int>> & adj, vector<vector<int>> & transAdj, int n){
    vector<int>vis(n,0);
    vector<int>transVis(n,0);
    vector<int>order;

    for(int i=0;i<n;i++){
        if(!vis[i]){
            Kosaraju_DfsOrder(adj, vis, order, i);
        }
    }
    
    vector<vector<int>>ans;
    int k = order.size();
    for(int i = k-1;i>=0;i--){
        int x = order[i];
        if(!transVis[x]){
            vector<int>SSC;
            Kosaraju_TransDfs(transAdj, transVis, SSC, x);
            ans.push_back(SSC);
        }
    }
    return ans;
}

void tarjan_Dfs(vector<vector<int>> &adj, vector<int> &vis, vector<int> &in, vector<int> &lowLinkValue, vector<int> &inStack, stack<int> &st, int node, int &i, vector<vector<int>> &ans){
    vis[node]  = 1;
    in[node]   = i;
    lowLinkValue[node]  = i;
    inStack[node] = 1;
    st.push(node);
    i++;
    for(auto child : adj[node]){
        if(!vis[child]){
            tarjan_Dfs(adj, vis, in, lowLinkValue, inStack, st, child, i, ans);
            if(inStack[child]){
                lowLinkValue[node] = min(lowLinkValue[node], lowLinkValue[child]);
            }
        }else{
            if(inStack[child]){
                lowLinkValue[node] = min(lowLinkValue[node], in[child]);
            }
        }
    }
    
    if(lowLinkValue[node]==in[node]){
        vector<int>ssc;
        while(st.top()!=node){
            ssc.push_back(st.top());
            inStack[st.top()]=0;
            st.pop();
        }
        ssc.push_back(st.top());
        inStack[st.top()]=0;
        st.pop();
        ans.push_back(ssc);
    }
}

vector<vector<int>>Tarjan_s (vector<vector<int>> & adj, int n){
    vector<int>vis(n,0);
    vector<int> in (n);
    vector<int> lowLinkValue(n);
    vector<int> inStack(n,0);
    stack<int>st;
    vector<vector<int>> ans;
    int k = 1;
    for(int i=0;i<n;i++){
        if(!vis[i]){
            tarjan_Dfs(adj, vis, in, lowLinkValue, inStack, st, i, k, ans);
        }
    }
    
    
    return ans;
}

vector<vector<int>> stronglyConnectedComponents(int n, vector<vector<int>> &edges) {
    vector<vector<int>>adj(n);
    
    vector<vector<int>>transAdj(n);
    

    for(auto x:edges){
        int u = x[0];
        int v = x[1];
        adj[u].push_back(v);
        transAdj[v].push_back(u);
    }
    
    vector<vector<int>> KosarajuAns = Kosaraju_s(adj, transAdj, n);
    return KosarajuAns;   
    
    vector<vector<int>> TarjanAns = Tarjan_s(adj, n);
    return TarjanAns;
}