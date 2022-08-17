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
    
    
    int n;
    cin>>n;
    vi vec(n);
    inpt(vec);
    map<int,vector<int>> mp;

    for(int i=0;i<n;i++){
        mp[vec[i]].push_back(i+1);
    }
    for(int i=0;i<n;i++){
        if(!mp.count(i+1)){
            mp[i+1].push_back(-1);
        }
    }
    vector<int>ans;
    for(auto x:mp){
        if(x.second[0] == -1){
            ans.push_back(0);
        }
        else if(x.second.size()==0){
            ans.push_back(0);
        }
        else if(x.second.size()==1){
            ans.push_back(1);
        }else{
            int prev = -1;
            int temp = 0;
            // cout<<"check"<<endl;
            // for(auto y:x.second){
            //     cout<<y<<" ";
            // }cout<<endl;
            for(auto y:x.second){
                // cout<<prev<<" ";
                if(prev == -1){
                    prev = y;
                    temp++;
                }else{
                    int t = y-prev;
                    if(t==1){
                        prev = y;
                        temp++;
                    }else if((t-1)%2==0 && t-1!=0){
                        prev = y;
                        temp++;
                    }else{
                        continue;
                    }
                }
            }
            // cout<<endl;
            // cout<<"temp"<<temp<<endl;
            ans.push_back(temp);
        }
    }
    // cout<<"final answer"<<endl;
    for(auto x: ans){
        cout<<x<<" ";
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
