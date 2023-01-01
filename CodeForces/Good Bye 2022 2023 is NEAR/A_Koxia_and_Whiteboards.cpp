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
    ll n,m;
    cin>>n>>m;
    // vll a(n);
    // vll b(m);
    // inpt(a);
    // inpt(b);
    // sort(all(b),greater<ll>());
    // sort(all(a));
    // ll mina = a[0];
    // ll maxb = b[0]; 
    // // prnt(a);
    // // prnt(b);
    // a.erase(a.begin());
    // b.erase(b.begin());
    // // prnt(a);
    // // prnt(b);
    // for(auto x:b){
    //     a.push_back(x);
    // }
    // ll ans=0;
    // sort(all(a),greater<ll>());
    // // prnt(a);
    // for(ll i=0;i<n-1;i++){
    //     ans+=a[i];
    // }
    // ans+=maxb;
    // cout<<ans<<endl;






    priority_queue<ll,vector<ll>,greater<ll>>pq;
    for(ll i=0;i<n;i++){
        ll a;
        cin>>a;
        pq.push(a);
    }

    vll b(m);
    inpt(b);
    for(auto x:b){
        pq.pop();
        pq.push(x);
    }
    ll ans = 0;
    while(!pq.empty()){
        ans+=pq.top();
        pq.pop();
    }
    cout<<ans<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
