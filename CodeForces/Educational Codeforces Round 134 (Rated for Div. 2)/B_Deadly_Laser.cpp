/*
░██████╗██╗░░░██╗███╗░░░███╗██╗████████╗  ██╗░░██╗██╗░░░██╗███╗░░░███╗░█████╗░██████╗░  ░██████╗██╗░░██╗░█████╗░██╗░░██╗██╗░░░██╗░█████╗░
██╔════╝██║░░░██║████╗░████║██║╚══██╔══╝  ██║░██╔╝██║░░░██║████╗░████║██╔══██╗██╔══██╗  ██╔════╝██║░░██║██╔══██╗██║░██╔╝╚██╗░██╔╝██╔══██╗
╚█████╗░██║░░░██║██╔████╔██║██║░░░██║░░░  █████═╝░██║░░░██║██╔████╔██║███████║██████╔╝  ╚█████╗░███████║███████║█████═╝░░╚████╔╝░███████║
░╚═══██╗██║░░░██║██║╚██╔╝██║██║░░░██║░░░  ██╔═██╗░██║░░░██║██║╚██╔╝██║██╔══██║██╔══██╗  ░╚═══██╗██╔══██║██╔══██║██╔═██╗░░░╚██╔╝░░██╔══██║
██████╔╝╚██████╔╝██║░╚═╝░██║██║░░░██║░░░  ██║░╚██╗╚██████╔╝██║░╚═╝░██║██║░░██║██║░░██║  ██████╔╝██║░░██║██║░░██║██║░╚██╗░░░██║░░░██║░░██║
╚═════╝░░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░░╚═╝░░░  ╚═╝░░╚═╝░╚═════╝░╚═╝░░░░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝  ╚═════╝░╚═╝░░╚═╝╚═╝░░╚═╝╚═╝░░╚═╝░░░╚═╝░░░╚═╝░░╚═╝
*/

#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef vector<int>         vi;
typedef vector<long long>   vll;
typedef vector<string>      vs;
typedef vector<vi>          vvi;
typedef vector<vll>         vvll;
typedef vector<pair<int,int>>vpi;
typedef pair<int, int>      pii;
typedef map<int,int>        mpii;


#define ins             insert 
#define pb              push_back
#define all(c)          (c).begin(),(c).end()
#define rep(i, x , y)   for(ll i= x;i< y;++i)
#define rrep(i, x , y)  for(ll i= x ;i>= y;--i)


// <---------------------------- INPUT ------------------------------->
void inpt(vi &t)    {for(auto &x:t) cin>>x; }
void inpt(vvi &t)   {for(auto &x:t) inpt(x);}
void inpt(vll &t)   {for(auto &x:t) cin>>x; }
void inpt(vvll &t)  {for(auto &x:t) inpt(x);}


// <------------------------ DEBUGGING PRINT --------------------------->
void prnt()             {cout<<endl;}
void prnt(int &t)       {cout<<t<<endl;}
void prnt(ll &t)        {cout<<t<<endl;}
void prnt(string &t)    {cout<<t<<endl;}
void prnt(char &t)      {cout<<t<<endl;}
void prnt(double &t)    {cout<<t<<endl;}
void prnt(pii &t)       {cout<<"{"<<t.first<<","<<t.second<<"}"<<endl;}
void prnt(vi &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vs &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vll &t)       {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vvi &t)       {for(auto &x:t)  prnt(x);        cout<<endl;}
void prnt(vvll &t)      {for(auto &x:t)  prnt(x);        cout<<endl;}
void prnt(vpi &t)       {for(auto &x:t)  cout<<"{"<<x.first<<","<<x.second<<"}  ";   cout<<endl;}
void prnt(mpii &t)      {for(auto &x:t)  {cout<<x.first<<" -> "<<x.second<<endl; }   cout<<endl;}
void prnt(set<int> &t)  {for(auto &x:t)  cout<<x<<" _ "; cout<<endl;}


const int MOD = 1e9+7;
const int dx[4]{1,0,-1,0},  dy[4]{0,1,0,-1}; // for every grid problem!!


// <----------------------- SOLUTION ------------------------------------>

// bool isValid(int &x,int &y, int &n, int &m ){
//     if(x>=0 && y>=0 && x<n && y<m ) return true;
    
//     return false;
// }

// int bfs(vector<vector<int>>&mat, int &n, int &m){
//     vector<vector<int>> dist(n,vector<int>(m, -1));
//     vector<vector<int>> vis(n, vector<int> (m, 0));
//     queue<pair<int,int>>q;
    
//     q.push({0,0});
//     vis[0][0]==1;
//     dist[0][0]=0;
//     while(!q.empty()){
//         int tx = q.front().first;
//         int ty = q.front().second;
//         q.pop();
//         for(int i=0;i<4;i++){
//             int a = tx + dx[i];
//             int b = ty + dy[i];
//             if(isValid(a,b,n,m) && vis[a][b]==0 && mat[a][b]==0){
//                 dist[a][b] = dist[tx][ty] + 1;
//                 q.push({a,b});
//                 vis[a][b]=1;
//                 if(a==n-1 && b==m-1)return dist[a][b];

//             }
//         }
//     }
//     cout<<"dist"<<endl;
//     for(auto x:dist){
//         for(auto y:x){
//             cout<<y<<" ";
//         }cout<<endl;
//     }cout<<endl;
//     return dist[n-1][m-1];
// }

void solve(){
    
    
    
    int n,m,x,y,d;
    cin>>n>>m>>x>>y>>d;
    // x--;
    // y--;
    // int a=0,b=0;
    // vvi vec(n, vi (m,0));
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(abs(i-x) + abs(j-y) <= d){
    //             vec[i][j]=1;
    //         }
    //     }
    // }
    // for(int i=0;i<n;i++){
    //     // cout<<i<<" "<<m-1<<endl;
    //     if(abs(i-x) + abs(m-1-y) <= d){
    //         a=1;
    //         // cout<<"found a"<<endl;
    //     }
    // }

    if(x+d >= n && y+d >= m ){
        cout<<-1<<endl;
    }else if(x-d <=1 && y-d<=1){
        cout<<-1<<endl;
    }else if(x-d <=1 && x+d>=n){
        cout<<-1<<endl;
    }else if(y-d <=1 && y+d>=m){
        cout<<-1<<endl;
    }else{
        cout<<n+m-2<<endl;
    }

    // for(int i=0;i<m;i++){
    //     // cout<<n-1<<" "<<i<<endl;
    //     if(abs(n-1-x) + abs(i-y) <= d){
    //         b=1;
    //         // cout<<"found b"<<endl;

    //     }
    // }
    // if(a && b){
    //     cout<<-1<<endl;
    // }else{
    //     cout<<n+m-2<<endl;
    // }
    // // cout<<bfs(vec, n, m)<<endl;
    // // cout<<"vector"<<endl;
    // // for(auto x:vec){
    // //     for(auto y:x){
    // //         cout<<y<<" ";
    // //     }cout<<endl;
    // // }cout<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
