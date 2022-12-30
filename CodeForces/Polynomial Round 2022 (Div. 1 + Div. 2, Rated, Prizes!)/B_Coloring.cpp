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
    
    
    // int n,m,k;
    // cin>>n>>m>>k;
    // vll v(m);
    // inpt(v);
    // int a = (n/k);
    // if(n%k!=0){
    //     a+=1;
    //     for(auto x:v){
    //         if(x>a){
    //             cout<<"NO"<<endl;
    //             return;
    //         }
    //     }
    //     cout<<"YES"<<endl;
    //     return;
    // }
    // for(auto x:v){
    //     if(x>a){
    //         cout<<"NO"<<endl;
    //         return;
    //     }
    // }
    // cout<<"YES"<<endl;
    
    // int n, m, k;
    // cin >> n >> m >> k;
    // vector<int> a(m);
    // a[0]=0;
    // for (int i = 0; i < m; i++)
    // {
    //     cin >> a[i];
    // }
    // sort(a.begin(), a.end(), greater<int>());
    // if ((n + k - 1) / k < a[0] )
    //     cout << "NO";
    // else
    //     cout << "YES";
    // cout << endl;
    

    ll n, m, k;
    cin >> n >> m >> k;
 
    vll a(m);
    ll temp = INT_MIN;
    for (int i=0; i<=m-1; i++){
        cin >> a[i];
        temp = max(temp, a[i]);
    };
 
    ll div = n / k;
    ll sks = n % k;
    if (sks != 0) {
        if (temp > div + 1) {
            cout << "NO" << endl;
            return;
        }
        for (int i = 0; i < m; i++) {
            if (a[i] == div + 1) {
                if (sks <= 0) {
                    cout << "NO" << endl;
                    return;
                }
                sks--;
            }
        }
    } else {
        if (temp > div) {
            cout << "NO" << endl;
            return;
        }
    }
 
    cout << "YES" << endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
