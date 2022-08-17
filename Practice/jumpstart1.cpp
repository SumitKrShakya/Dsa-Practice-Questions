// #include <bits/stdc++.h>
// using namespace std;

// typedef long long           ll;
// typedef vector<int>         vi;
// typedef vector<long long>   vll;
// typedef vector<string>      vs;
// typedef vector<vi>          vvi;
// typedef vector<vll>         vvll;
// typedef vector<pair<int,int>>vpi;
// typedef pair<int, int>      pii;
// typedef map<int,int>        mpii;


// #define ins             insert 
// #define pb              push_back
// #define all(c)          (c).begin(),(c).end()
// #define rep(i, x , y)   for(ll i= x;i< y;++i)
// #define rrep(i, x , y)  for(ll i= x ;i>= y;--i)


// // <---------------------------- INPUT ------------------------------->
// void inpt(vi &t)    {for(auto &x:t) cin>>x; }
// void inpt(vvi &t)   {for(auto &x:t) inpt(x);}
// void inpt(vll &t)   {for(auto &x:t) cin>>x; }
// void inpt(vvll &t)  {for(auto &x:t) inpt(x);}


// // <------------------------ DEBUGGING PRINT --------------------------->
// void prnt()             {cout<<endl;}
// void prnt(int &t)       {cout<<t<<endl;}
// void prnt(ll &t)        {cout<<t<<endl;}
// void prnt(string &t)    {cout<<t<<endl;}
// void prnt(char &t)      {cout<<t<<endl;}
// void prnt(double &t)    {cout<<t<<endl;}
// void prnt(pii &t)       {cout<<"{"<<t.first<<","<<t.second<<"}"<<endl;}
// void prnt(vi &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vs &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vll &t)       {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vvi &t)       {for(auto &x:t)  prnt(x);        cout<<endl;}
// void prnt(vvll &t)      {for(auto &x:t)  prnt(x);        cout<<endl;}
// void prnt(vpi &t)       {for(auto &x:t)  cout<<"{"<<x.first<<","<<x.second<<"}  ";   cout<<endl;}
// void prnt(mpii &t)      {for(auto &x:t)  {cout<<x.first<<" -> "<<x.second<<endl; }   cout<<endl;}
// void prnt(set<int> &t)  {for(auto &x:t)  cout<<x<<" _ "; cout<<endl;}


// const int MOD = 1e9+7;
// const int dx[4]{1,0,-1,0},  dy[4]{0,1,0,-1}; // for every grid problem!!



// // <----------------------- SOLUTION ------------------------------------>

// // bool check (string s){
// //     long long  a = stoi(s);
// //     int prev,curr;
// //     prev = (a>>1) & 1;
// //     while(a){
// //         curr = (a>>1)&1;
// //         if(prev & curr){
// //             return false;
// //         }
// //         prev = curr;

// //     }

// //     return true;
// // }


// // int generate(int n)
// // {
// //     queue<string> q;
// //     q.push("1");
// //     long long ans = 0;
// //     int i = 1;
// //     while (i++ <= n)
// //     {
// //         q.push(q.front() + "0");
// //         q.push(q.front() + "1");

// //         ans = (ans + check(q.front()))%MOD;
        
// //         q.pop();
// //     }
// //     return ans;
// // }

// // int n=3+1;

// // int ans=0;
// int recurr(int &n,int i,int curr, vector<vector<int>>&dp){
//     if (i==n-1) {
//         return 1;
//     }
//     // if()
//     int left;
//     int right;
//     if(curr==0){
//         if(dp[i][curr]==-1){
//             left = recurr(n,i+1,1,dp);
//             dp[i][curr] = left;
//         }else{
//             left=dp[i][curr];
//         }
//     }
//     if(dp[i][curr]==-1){
//         right = recurr(n,i+1,0,dp);
//         dp[i][curr] = right;
//     }else{
//         right=dp[i][curr];
//     }
//     // recurr(n,i+1,0);

//     return (left + right)%MOD;
// }


// void solve(){
    
//     // int n=3;
//     // int a = 1;
//     // // while(n--){
//     // //     a=a<<1;
//     // // }
//     // n = (pow(2,n)-1) % MOD;
//     // cout<< generate(n)<<endl;
//     int n=3;
//     vector<vector<int>>dp(n,vector<int>(n,-1));

//     cout<<recurr (n,0,-1,dp)<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
// }


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     int t;
//     cin>>t;
//     for(int tt=1;tt<=t;tt++){
//         // cout<< "Case #" << tt << ": ";
//         solve();
//     }
    
//     return 0;
// }

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

// bool check (string s){
//     long long  a = stoi(s);
//     int prev,curr;
//     prev = (a>>1) & 1;
//     while(a){
//         curr = (a>>1)&1;
//         if(prev & curr){
//             return false;
//         }
//         prev = curr;

//     }

//     return true;
// }


// int generate(int n)
// {
//     queue<string> q;
//     q.push("1");
//     long long ans = 0;
//     int i = 1;
//     while (i++ <= n)
//     {
//         q.push(q.front() + "0");
//         q.push(q.front() + "1");

//         ans = (ans + check(q.front()))%MOD;
        
//         q.pop();
//     }
//     return ans;
// }

// int n=3+1;

// int ans=0;
int recurr(int &n,int i,int curr, vector<vector<int>>&dpl,vector<vector<int>>&dpr){
    // cout<<i<<" "<<curr<<" ---"<<endl;
    
    if (i==n) {
        return 1;
    }
    int left;
    int right;
    if(curr==0){
        if(dpl[i][curr]==-1){
            left = recurr(n,i+1,1,dpl,dpr);
            dpl[i][curr] = left;
        }else{
            left=dpl[i][curr];
        }
    }
    if(dpr[i][curr]==-1){
        right = recurr(n,i+1,0,dpl,dpr);
        dpr[i][curr] = right;
    }else{
        right=dpr[i][curr];
    }
    cout<<"left+right"<<left+right<<endl;
    return (left + right);
}


void solve(){
    
    // int n=3;
    // int a = 1;
    // // while(n--){
    // //     a=a<<1;
    // // }
    // n = (pow(2,n)-1) % MOD;
    // cout<< generate(n)<<endl;
    int n=3;
    vector<vector<int>>dpl(n,vector<int>(n,-1));    
    vector<vector<int>>dpr(n,vector<int>(n,-1));

    
    cout<<recurr (n,0,0,dpl,dpr)<<endl;
    cout<<"---"<<endl;
    for(auto x:dpr){
        for(auto y:x){
            cout<<y<<" ";
        }cout<<endl;
    }
    for(auto x:dpl){
        for(auto y:x){
            cout<<y<<" ";
        }cout<<endl;
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
