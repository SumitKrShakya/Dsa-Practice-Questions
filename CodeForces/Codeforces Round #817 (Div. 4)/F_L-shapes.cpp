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
// const int dx[4]{1,0,-1,0},  dy[4]{0,1,0,-1}; // for every grid problem!!
int dx[8] = {1,0,0,-1,1,-1,1,-1};
int dy[8] = {0,1,-1,0,1,-1,-1,1};


// <----------------------- SOLUTION ------------------------------------>

bool isValid(long long x,long long y, long long n, long long m ,vector<vector<long long>> &vis ){
    if(x>=0 && y>=0 && x<n && y<m && vis[x][y]==0) return true;
    
    return false;
}

bool isValid2(long long x,long long y, long long n, long long m ){
    if(x>=0 && y>=0 && x<n && y<m ) return true;
    
    return false;
}
    
    
    
long long bfs(vector<string> & grid, long long i, long long j, vector<vector<long long>> &vis){
    long long n = grid.size(),m = grid[0].size();
    queue<pair<long long,long long>>q;
    long long cnt = 0 ;
    
    vis[i][j]=1;
    q.push({i,j});    
    
    while(!q.empty()){
        long long tx = q.front().first;
        long long ty = q.front().second;
        q.pop();
        cnt++;
        for(long long i=0;i<8;i++){
            long long a = tx + dx[i];
            long long b = ty + dy[i];
            if(isValid(a,b,n,m, vis) && grid[a][b]=='*'){
                q.push({a,b});
                vis[a][b]=1;
            }
        }
    }
    
    return cnt;
}

long long upleft(vector<string> & grid, long long i, long long j,vector<vector<long long>> &vis){
    long long n = grid.size(),m = grid[0].size();
    if(isValid(i-1, j, n, m , vis) && isValid(i, j-1, n, m , vis) && grid[i-1][j]=='*' && grid[i][j-1]=='*') return 1;
    
    return 0;
}
long long upright(vector<string> & grid, long long i, long long j,vector<vector<long long>> &vis){
    long long n = grid.size(),m = grid[0].size();
    if(isValid(i-1, j, n, m , vis) && isValid(i, j+1, n, m , vis) && grid[i-1][j]=='*' && grid[i][j+1]=='*') return 1;
    
    return 0;

}
long long downleft(vector<string> & grid, long long i, long long j,vector<vector<long long>> &vis){
    long long n = grid.size(),m = grid[0].size();
    if(isValid(i+1, j, n, m , vis) && isValid(i, j-1, n, m , vis) && grid[i+1][j]=='*' && grid[i][j-1]=='*') return 1;
    
    return 0;

}
long long downright(vector<string> & grid, long long i, long long j,vector<vector<long long>> &vis){
    long long n = grid.size(),m = grid[0].size();
    if(isValid(i+1, j, n, m , vis) && isValid(i, j+1, n, m , vis) && grid[i+1][j]=='*' && grid[i][j+1]=='*') return 1;
    
    return 0;

}

long long left(vector<string> & grid, long long i, long long j ){
    long long n = grid.size(),m = grid[0].size();
    if(isValid2(i, j-1, n, m ) &&  grid[i][j-1]=='*') return 1;
    
    return 0;

}
long long right(vector<string> & grid, long long i, long long j){
    long long n = grid.size(),m = grid[0].size();
    if(isValid2(i, j+1, n, m )  && grid[i][j+1]=='*') return 1;
    
    return 0;

}
long long up(vector<string> & grid, long long i, long long j){
    long long n = grid.size(),m = grid[0].size();
    if(isValid2(i-1, j, n, m ) && grid[i-1][j]=='*' ) return 1;
    
    return 0;

}
long long down(vector<string> & grid, long long i, long long j){
    long long n = grid.size(),m = grid[0].size();
    if(isValid2(i+1, j, n, m ) && grid[i+1][j]=='*' ) return 1;
    
    return 0;

}


void solve(){
    long long n,m;
    cin>>n>>m;
    vector<string> vec(n);
    for(auto &x:vec)cin>>x;
    vector<vector<long long>> vis(n,vector<long long>(m,0));
    int noofisland = 0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            if(!vis[i][j] && vec[i][j]=='*'){
                long long cnt = bfs(vec, i, j, vis);
                if(cnt != 3){
                    cout<<"NO"<<endl;
                    return;
                }
                noofisland++;
            }
        }
    }
    long long elbow = 0;
    for(long long i=0;i<n;i++){
        for(long long j=0;j<m;j++){
            if( vec[i][j]=='*'){
                long long u=0,d=0,l=0,r=0;
                if(i-1>=0 && vec[i-1][j]=='*') u = 1;
                if(i+1<n  && vec[i+1][j]=='*') d = 1;
                if(j-1>=0 && vec[i][j-1]=='*') l = 1;
                if(j+1<m  && vec[i][j+1]=='*') r = 1;
                if((u&&l)||(u&&r)||(d&&l)||(d&&r))elbow++;
            }
        }
    }

    if(elbow==noofisland){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;

    }
    
    // for(long long i=0;i<n;i++){
    //     for(long long j=0;j<m;j++){
    //         if(!vis[i][j] && vec[i][j]=='*'){
    //             long long cnt = bfs(vec, i, j, vis);
    //             if(cnt != 3){
    //                 cout<<"NO"<<endl;
    //                 return;
    //             }else{
    //                 if(j+2 < m){
    //                     if(vec[i][j]=='*' && vec[i][j+1]=='*' && vec[i][j+2]=='*'){
    //                         cout<<"NO"<<endl;
    //                         return;
    //                     }
    //                 }
    //                 if(i+2 < n){
    //                     if(vec[i][j]=='*' && vec[i+1][j]=='*' && vec[i+2][j]=='*'){
    //                         cout<<"NO"<<endl;
    //                         return;
    //                     }
    //                 }

    //                 long long l = left(vec, i, j);
    //                 long long r = right(vec, i, j);
    //                 long long u = up(vec, i, j);
    //                 long long d = down(vec, i, j);

    //                 if(!(l||r||u||d)) {
    //                     cout<<"NO"<<endl;
    //                     return;
    //                 }
                    
    //             }
    //         }
    //     }
    // }
    
    // cout<<"YES"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
