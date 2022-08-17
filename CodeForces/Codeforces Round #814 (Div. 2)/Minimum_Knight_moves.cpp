#include <bits/stdc++.h>
using namespace std;




// <----------------------- SOLUTION ------------------------------------>


int dx[8] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int dy[8] = { -1, -2, -2, -1, 1, 2, 2, 1 };

bool isValid(int x, int y, int n, int m, vector<vector<int>>&vis){
    if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==0){
        return true;
    }
    return false;
} 

int bfs(int x, int y, int tar_x, int tar_y){
    if(x==tar_x && y == tar_y) return 0;
    int n = 8, m = 8;
    vector<vector<int>> vis(n, vector<int>(m,0));
    vector<vector<int>> dist(n, vector<int>(m,0));
    queue<pair<int,int>>q;
    q.push({x,y});
    vis[x][y] = 1;
    dist[x][y] = 0;

    while (!q.empty()){
        int frontx = q.front().first;
        int fronty = q.front().second;
        
        q.pop();
        for(int k=0;k<8;k++){
            int a = frontx + dx[k];
            int b = fronty + dy[k];
            if(isValid(a, b, n, m, vis)){
                dist[a][b] = dist[frontx][fronty] + 1;
                if(a==tar_x && b== tar_y) return dist[a][b];
                q.push({a,b});
                vis[a][b]=1;
            }
        }

    }

    return -1;
}

void solve(){
    string s1,s2;
    cin>>s1>>s2;
    int startx,starty,endx,endy;
    startx = s1[0] - 'a';
    starty = s1[1] - '1';
    endx   = s2[0] - 'a';
    endy   = s2[1] - '1';

    cout<<bfs(startx, starty, endx, endy)<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        // cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
