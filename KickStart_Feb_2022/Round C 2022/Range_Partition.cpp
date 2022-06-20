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

bool isValid(int &x, int &y){
    if(x<0 || y<0){
        return false;
    }
    return true;
}
// <----------------------- SOLUTION ------------------------------------>
void solve(){
    
    // cout<<(__gcd(3,9))<<endl;
    int n;
    double a,b;
    cin>>n>>a>>b;
    double sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    double asum = sum*(a/(a+b));
    int achecksum = asum;
    if(asum!=achecksum) {
        cout<<"IMPOSSIBLE"<<endl;
        return;
    }

    // int sks=0;
    // int i=1;
    // int sz=0;
    // while(sks<asum){
    //     sz++;
    //     sks+=i;
    //     i++;
    // }
    // cout<<sks<<" "<<asum<<endl;
    // if(sks==asum){
    //     cout<<"POSSIBLE"<<endl;
    //     i=1;
    //     cout<<sz<<endl;
    //     while(sks){
    //         cout<<i<<" ";
    //         sks-=i;
    //         i++;
    //     }
    //     cout<<endl;
    // }else{
    //     cout<<"IMPOSSIBLE"<<endl;
    // }

    // bool dp[n+1][n+1];
    vector<vector<int>>dp(n+1,vector<int>(asum+1,0));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0){
                dp[i][j]=0;
            }
            if(j==0){
                dp[i][j]=1;
            }
        }
    }
    // prnt(dp);
    // cout<<asum<<endl;
    for(int i=1;i<n+1;i++){
        for(int j=1;j<asum+1;j++){
            // cout<<i<<" "<<j<<" -> "<<dp[i][j-i]<<endl;
            if(i <= j){
                dp[i][j] = dp[i-1][j-i] || dp[i-1][j];
            }else{
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    cout<<endl;
    prnt(dp);
    if(dp[n][asum]){
        cout<<"POSSIBLE"<<endl;
        int startpt;
        for(int tt = 0;tt<n;tt++){
            if(dp[tt][asum]){
                startpt = tt;
                break;
            }
        }
        int tx=startpt,ty=asum,tx1,ty1,tx2,ty2;
        vector<int>ans;
        while(ty!=0){
            // cout<<"loop ty "<<tx<<" "<<ty<<endl;
            tx1 = tx-1;
            ty1 = ty-tx;
            tx2 = tx-1;
            ty2 = ty;
            int flag=1;
            if(isValid(tx1,ty1)){
                // cout<<"t1 valid "<<tx1<<" "<<ty1<<endl;
                if(dp[tx1][ty1]){
                    flag=0;
                    // cout<<"y-1"<<endl;
                    ans.push_back(tx);
                    // cout<<"pb "<<tx<<endl;
                    tx=tx1;
                    ty=ty1;
                }
            }
            if(flag){
                if(isValid(tx2,ty2)){
                    // cout<<"tx2 valid "<<tx2<<" "<<ty2<<endl;
                    if(dp[tx2][ty2]){
                        // cout<<"x-1"<<endl;
                        // ans.push_back(tx2);
                        // cout<<"pb "<<tx2<<endl;
                        tx=tx2;
                        ty=ty2;
                    }
                }
            }
        }
        cout<<ans.size()<<endl;
        sort(ans.begin(),ans.end());
        for(auto x:ans){
            cout<<x<<" ";
        }cout<<endl;
        // cout<<"----"<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;

    }






    // cout<<asum<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
