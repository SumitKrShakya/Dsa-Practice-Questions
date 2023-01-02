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
void solve(){
    ll n,l,k;
    cin>>n>>l>>k;
    vll dist(n),speed(n);
    inpt(dist);
    inpt(speed);
    dist.push_back(l);

    vvll dp(n+1, vll(k+1, INT_MAX));
    // dp[i][j] = flag i tak pahuchne ke liye minimum time kitna lagega if we remove j flag
    //  in between and we are are pushing the answer of possible next postion of the flag
    // if we already placed ith flag (means ith place is confermed and checking for next flag to place)

    dp[0][0] = 0;
    
    // dp[i][0] means no flag is removed.
    for(ll i=1;i<=n;i++){
        dp[i][0] = ((dist[i]-dist[i-1]) * speed[i-1]) + dp[i-1][0];
    }
    
    for(ll i=0;i<=n;i++){
        for(ll j=0;j<=k;j++){
            for(ll pos = i+1; j+pos-(i+1) <= k && pos<=n;pos++){                
                dp[pos][j + pos - (i + 1)] = min(dp[pos][j + pos - (i + 1)], dp[i][j] + speed[i] * (dist[pos] - dist[i]));
            }
        }
    }
    
    ll ans = INT_MAX;
    for (ll i = 0; i <= k; i++) {
        ans = min(dp[n][i], ans);
    }
    cout << ans << endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // int t;
    // cin>>t;
    // for(int tt=1;tt<=t;tt++){
        // cout<< "Case #" << tt << ": ";
        solve();
    // }
    
    return 0;
}
