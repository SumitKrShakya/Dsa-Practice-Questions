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
    
//     string s;
//     cin>>s;
//     int n = s.length();
//     if(s[0]==s[n-1]){
//         cout<<s[0]<<" "<<s.substr(1,n-2)<<" "<<s[n-1]<<endl;
//         return;
//     }
//     char start = s[0];
//     for(int i=1;i<n;i++){
//         if(s[i]==start){
//             cout<<s.substr(0,i)<<" "<<s[0]<<" "<<s.substr(i+1)<<endl;
//             return;
//         }
//     }
//     cout<<s.substr(0,n-3)<<" "<<s[n-2]<<" "<<s[n-1]<<endl;
    
// }

void solve(){
    string stringsss;
    cin>>stringsss;
    int n = stringsss.length();

    if(stringsss[0]==stringsss[n-1]){
        cout<<stringsss[0]<<" "<<stringsss.substr(1,(n-2))<<" "<<stringsss[n-1]<<endl;
        return;
    }
    if(stringsss[0]!=stringsss[n-1]){
        string middops = stringsss.substr(1,(n-2));
        if(middops[0]=='b'){
            cout<<stringsss[0]<<" "<<middops<<" "<<stringsss[n-1]<<endl;
            return;
        }
        if(middops[0]=='a'){
            cout<<stringsss[0]<<" "<<"a"<<" "<<middops.substr(1,middops.size()-1)<<stringsss[n-1]<<endl;
            return;
        }
    }
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
