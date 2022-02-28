#include<bits/stdc++.h>

using namespace std;

class graph {
    private:
    map<int,vector<int>>adj;
    void dfsRecur(vector<bool> & vis, int root){
        vis[root] = true;
        cout<<root<<" ";
        for(auto ele: adj[root]){
            if(!vis[ele]){
                dfsRecur(vis, ele);
            }
        }
    }
    bool detCycPri(vector<bool> & vis, int root, int parent){
        vis[root] = true;
        for(auto ele: adj[root]){
            if(!vis[ele]){
                if(detCycPri(vis, ele, root)){
                    return true;
                }
            }else{
                if(ele!=parent){
                    return true;
                }
            }
        }
        return false;
    }

    // REVIEW: 
    // NOTE: sdfsd 
    // HACK: sdfd
    // TODO: public
    // FIXME: abc
    // XXX: abc
    // CHECKME: abc
    // DOCME: abc
    // TESTME: abc
    // PENDING: abc

    public:
    void addEdge(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void dfs(int root){
        vector<bool>vis(adj.size()+1, false);
        dfsRecur(vis, root);
    }

    bool detectcycle(int root){
        vector<bool>vis(adj.size()+1, false);
        return detCycPri(vis, root, -1);
    }
};


int main(){

    graph g;
    int n;
    cin>>n;
    int u,v;
    for(int i=0;i<n;i++){
        cin >> u>>v;
        g.addEdge(u,v);
    }
    g.dfs(1);
    cout<<endl;
    // cout<<g.detectcycle(1);
    if(g.detectcycle(1)){
        cout<<"Cycle Detected"<<endl;
    }else{
        cout<<"No-Cycle Detected"<<endl;
    }
    // int a=0;
    // for(int i=0;i<10;i++)
    // a++, cout<<i<<endl,cout<<(i==2? "alpha\n":"sdf\n");

    return 0;
}