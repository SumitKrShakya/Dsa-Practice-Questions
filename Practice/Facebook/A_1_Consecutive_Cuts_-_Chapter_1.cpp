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
    ll n,k;
    cin>>n>>k;
    vll v1(n);
    vll v2(n);
    inpt(v1);
    inpt(v2);
    ll rot = 0;
    for(ll i=0;i<n;i++){
        if(v2[i]==v1[0]) rot = i;
    }


    

    for(ll i=0;i<n;i++){
        if(v1[i] != v2[ (i + rot) % n ]) {
            cout<<"NO"<<endl;
            return;
        }
    }

// 2 2
// 1 2
// 2 1

    if(n==2){
        if(k%2==rot%2){
            cout<<"YES"<<endl;
            return;
        }else{
            cout<<"NO"<<endl;
            return;
        }
        // if(k==0){
        //     if(rot==0){
        //         cout<<"YES"<<endl;
        //         return;
        //     }else{
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        // }else if(k==1){
        //     if(rot==0){
        //         cout<<"NO"<<endl;
        //         return;
        //     }else{
        //         cout<<"YES"<<endl;
        //         return;
        //     }
        // }else{
        //     // if(k%2==0 && rot==0 || k%2==1 && rot==1){
        //     //     cout<<"YES"<<endl;
        //     //     return;
        //     // }else{
        //     //     cout<<"NO"<<endl;
        //     //     return;
        //     // }
        //     if(k%2==rot%2){
        //         cout<<"YES"<<endl;
        //         return;
        //     }else{
        //         cout<<"NO"<<endl;
        //         return;
        //     }
        // }
    }


    if(k==0){
        if(rot!=0){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            return;
        }
    }

    if(k==1){
        if(rot==0){
            cout<<"NO"<<endl;
            return;
        }else{
            cout<<"YES"<<endl;
            return;
        }
    }

    

    // 3
    // 5 1 2 4 3
    // 2 4 3 5 1
    // 3 5 1 2 4
    // 2 4 3 5 1
    // 5 1 2 4 3

    // 4
    // 1 2 
    // 2 1
    // 
    // 3 3
// 3 2 1
// 1 3 2
// 2 1 3
// 1 3 2
// 3 2 1
    cout<<"YES"<<endl;










    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("validt.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
