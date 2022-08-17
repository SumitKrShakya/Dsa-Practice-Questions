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
    
    
    int n,m;
    cin>>n>>m;
    string a,b;
    cin>>a>>b;
    if(m>n){
        cout<<"NO"<<endl;
        return ;
    }else if(m==n && a!=b){
        cout<<"NO"<<endl;
        return ;
    }
    int t = m-1;
    string sa = a.substr(n-t);
    string sb = b.substr(1);
    if(sa!=sb){
        cout<<"NO"<<endl;
        return ;
    }
    int ne = n-t;
    bool flag=true;
    while(ne--){
        if(a[ne]==b[0]){
            flag=false;
            break;
        }
        // cout<<a[ne]<<endl;
    }
    if(flag){
        cout<<"NO"<<endl;
        return ;
    }
    cout<<"YES"<<endl;
    // cout<<sa<<" " << sb<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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



// YES
// YES
// NO
// NO
// NO
// YES
// YES
// NO
// NO
// YES

// 10
// 6 2
// 001001
// 11
// 6 2     yes
// 110111
// 01

// 6 2
// 000001
// 11           no
// 6 2
// 111111
// 01
// 8 5
// 10000101
// 11010

// 7 4
// 1010001
// 1001           yes
// 8 6
// 01010010
// 010010

// 8 4
// 01010101
// 1001
// 8 4              no
// 10101010
// 0110

// 7 5
// 1011100           yes
// 11100