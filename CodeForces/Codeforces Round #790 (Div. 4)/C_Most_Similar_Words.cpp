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


// void rec(int &n,int &m, vector<string> &s,int i, vector<string>ch){
    
    
//     // cout<<i<<" "<<ch.size()<<endl;
//     if(ch.size()==2){
//         // cout<<"here"<<endl;
//         int ans=0;
//         string s1 = ch[0];
//         string s2 = ch[1];
//         // cout<<s1<<"++++"<<s2<<endl;
//         for(int i=0;i<s1.length();i++){
//             ans+=abs(s1[i]-s2[i]);
//         }
//         // cout<<"->"<<ans<<endl;
//         // if(ans!=0)
//         fans=min(ans,fans);
//         return;
//     }
//     if(i>=n) return;
    


//     rec(n,m,s,i+1,ch);
//     ch.push_back(s[i]);
//     // cout<<"--->"<<ch.size()<<endl;
//     rec(n,m,s,i+1,ch);
// }

void solve(){
    
    
    int n,m;
    cin>>n>>m;
    vector<string>s(n);
    for(auto &x:s) cin>>x;
    // for(auto x:s) cout<<x<<" ";
    // cout<<endl;
    
    // int ans=0;

        // cout<<"sdfdsfds"<<s.size()<<endl;
    // vector<string> ch;
    // rec(n,m,s,0,ch);
    int fans=INT_MAX;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i!=j){

                int ans=0;
                string s1 = s[i];
                string s2 = s[j];
                for(int i=0;i<s1.length();i++){
                    ans+=abs(s1[i]-s2[i]);
                }
                // cout<<ans<<" "<<s1<<" "<<s2<<endl;
                fans=min(ans,fans);
            }
        }
    }

    // cout<<endl;
    cout<<fans<<endl;
    // cout<<"sdfdsfds"<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
