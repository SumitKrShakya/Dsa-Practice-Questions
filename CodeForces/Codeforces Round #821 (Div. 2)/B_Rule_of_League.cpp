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
// void solve(){
//     ll n,x,y;
//     cin>>n>>x>>y;
//     if((x==0)^(y==0)){
//         if(x==0){
//             if((n-1)%y==0){
//                 for(ll i=1;i<=n;i++){
//                     for(ll j=0;j<y;j++){
//                         cout<<i<<" ";
//                     }
//                     if(y!=1)i+=y;
//                     else if(y==1 && i==1) i+=y;
//                 }cout<<endl;
//             }else{
//                 cout<<-1<<endl;
//             }
//         }else{
//             if((n-1)%x==0){
//                 for(ll i=1;i<=n;i++){
//                     for(ll j=0;j<x;j++){
//                         cout<<i<<" ";
//                     }if(x!=1)i+=x;
//                     else if(x==1 && i==1) i+=x;
//                 }cout<<endl;
//             }else{
//                 cout<<-1<<endl;
//             }
//         }
//     }else{
//         cout<<-1<<endl;
//     }
// }


void solve() {
    
    ll n, x, y;
    cin >> n >> x >> y;

    if(x != 0 and y != 0) {
        cout<<-1<<endl;
        return;
    }
    if(x == 0 and y == 0) {
        cout<<-1<<endl;
        return;
    }

    if(y != 0) {
        x = y;
    }
    if(x==n-1) {
        for(int i=1; i<=n-1; i++) {
            cout<<1<<" ";
        }
        cout<<endl;
        return;
    }


    ll cnt = 1, number = 1;
    if(((n-1)%x)==0) {
        while(cnt<n and (number<=n)) {
            for(int i=1; i<=x; i++) {
                cout<<number<<" ";
                cnt++;
                if(cnt >= n) break;
            }
            if(number == 1) {
                number += x+1;
            }
            else{
                number += x;
            }
        }
    }
    else {
        cout<<-1<<endl;
        return;
    }
    cout<<endl;




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
