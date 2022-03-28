#include<bits/stdc++.h>

using namespace std;

bool isValid(int x, int y, int &n, int &m, vector<vector<bool>> &vis,vector<string> & grid){
    if(x<0 || x>=n || y<0 || y>=m){
        return false;
    }
    if(vis[x][y]==true || grid[x][y]=='#'){
        return false;
    }
    return true;
}

vector<int>dx{-1, 0, 1,  0};
vector<int>dy{0 , 1, 0, -1};

void dfs(vector<string> & grid,vector<vector<bool>> &vis, int x, int y, int &n, int &m){
    vis[x][y]=true;
    for(int i=0;i<4;i++){
        if(isValid(x+dx[i] ,y+dy[i],n,m, vis, grid)){
            dfs(grid, vis, x+dx[i], y+dy[i] , n, m);
        }
    }

}

int main(){
    int n,m;
    cin>>n>>m;
    vector<string> grid (n);
    vector<vector<bool>>vis{{false}};
    vector<bool>temp(m,false);
    string s;
    for(int i=0;i<n;i++){
        cin>>s;
        grid[i] = s;
        vis.push_back(temp);
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        for(int j = 0;j<m;j++){
            if(isValid(i, j, n , m, vis, grid)){
                dfs(grid, vis, i, j, n, m);
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

}