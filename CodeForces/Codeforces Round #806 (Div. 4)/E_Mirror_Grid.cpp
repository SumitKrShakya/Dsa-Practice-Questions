#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef vector<int>         vi;
typedef vector<long long>   vll;
typedef vector<string>      vs;
typedef vector<vector<string>>      vvs;
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
void inpt(vs &t)    {for(auto &x:t) cin>>x;}
void inpt(vi &t)    {for(auto &x:t) cin>>x; }
void inpt(vvi &t)   {for(auto &x:t) inpt(x);}
void inpt(vll &t)   {for(auto &x:t) cin>>x; }
void inpt(vvll &t)  {for(auto &x:t) inpt(x);}
void inpt(vvs &t)   {for(auto &x:t) inpt(x);}


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

// void check(int i,int j, vpi temp,int n){
//     // i = 1 , j = 0 ; 
//     if()
// }

// 00 01 02 03 04
// 10 11 12 13 14
// 20 21 22 23 24
// 30 31 32 33 34
// 40 41 42 43 44
void solve(){
    
    
    int n;
    cin>>n;
    vs grid(n);
    inpt(grid);
    int top =0;
    int ans=0;
    int bottom =n-1;
    while(top<bottom){
        vi temp(bottom-top+1,0);
        int tempi=0;
        for(int i=top;i<=bottom;i++){
            // cout<<"---->"<<top<<i<<" "<<i<<bottom<<" "<<bottom<<n-i-1<<" "<<n-1-i<<top<<endl;
            temp[tempi]  +=  grid[top][i]          ==   '1'?1:0;  
            temp[tempi]  +=  grid[i][bottom]       =='1'?1:0;     
            temp[tempi]  +=  grid[bottom][n - i-1] =='1'?1:0;      
            temp[tempi]  +=   grid[n-1-i][top]          =='1'?1:0; 
            tempi++;
        }
        for(int i=0;i<temp.size()-1;i++){
            int x = temp[i];
            // cout<<x<<" ";
            if(x==2||x==1){
                ans+=x;
            }else if(x==3){
                ans++;
            }
        }
        // cout<<endl;
        top++;
        bottom--;
    }
    // 6
// 1 1 1 0 0
// 1 1 0 1 1
// 0 1 0 1 1
// 1 0 0 1 1
// 1 1 0 0 0


    cout<<ans<<endl;
    // cout<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
