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
// void solve(){
    
//     int n;
//     cin>>n;
//     vector<long long>v1(n);
//     vector<long long>v2(n);
//     inpt(v1);
//     inpt(v2);
//     map<int,int>mp1;
//     map<int,int>mp2;
//     int ans = 0;
//     for(auto x:v1) mp1[x]++;

//     for(auto x:v2){
//         if(mp1.count(x)){
//             mp1[x]--;
//             if(mp1[x]==0)
//                 mp1.erase(x);
//         }else{
//             mp2[x]++;
//         }
//     }
//     // cout<<ans<<endl;
//     for(auto x:mp1){
//         int key = x.first;
//         int val = x.second;
//         if(key >= 10){
//             int temp = to_string(key).size();
//             mp1[temp] += mp1[key];
            
//             ans+=mp1[key];
//             mp1.erase(key);
//         }
//     }
//     // cout<<ans<<endl;
//     for(auto x:mp2){
//         int key = x.first;
//         int val = x.second;
//         if(key >= 10){
//             int temp = to_string(key).size();
//             mp2[temp] += mp2[key];
            
//             ans+=mp2[key];
//             mp2.erase(key);
//         }
//     }
//     // cout<<ans<<endl;
//     // cout<<"mp1"<<endl;
//     // prnt(mp1);
//     // cout<<"mp2"<<endl;
//     // prnt(mp2);
//     vi v3(10),v4(10);
//     for(auto x:mp1){
//         v3[x.first] = x.second;
//     }
//     for(auto x:mp2){
//         v4[x.first] = x.second;
//     }
//     for(int i=2;i<=9;i++){
//         ans+= abs(v3[i]-v4[i]);
//     }
//     // prnt(v3);    prnt(v4);

//     cout<<ans<<endl;
    

//     // for(auto x:mp1){
//     //     int key = x.first;
//     //     int val = x.second;
//     //     if(mp2.count(key)){
//     //         cout<<"key"<<key<<endl;
//     //         int a = abs(mp1[key]-mp2[key]);
//     //         ans+=a;
//     //         mp2.erase(key);
//     //         mp1.erase(key);
//     //     }
//     // }
//     // cout<<ans<<endl;
//     // for(auto x:mp2){
//     //     int key = x.first;
//     //     int val = x.second;
//     //     ans+=val;
//     // }
//     // cout<<ans <<endl;



//     // for(auto x:v2){
//     //     if(mp1.count(x)){
//     //         mp1[x]--;
//     //         if(mp1[x]==0){
//     //             mp1.erase(x);
//     //         }
//     //     }else{
//     //         if(x/10 > 9){
//     //             x = to_string(x).size();
//     //             ans++;
//     //         }
//     //         if(mp1.count(x)){
//     //             mp1[x]--;
//     //             if(mp1[x]==0){
//     //                 mp1.erase(x);
//     //             }
//     //         }else{
//     //             mp2[x]++;
//     //         }
//     //     }
//     // }

//     // for(auto x:mp1){
//     //     int key = x.first;
//     //     int val = x.second;
//     //     if(key/10>9){
//     //         int temp = to_string(key).size();
//     //         ans++;
//     //         mp1[temp] = mp1[key];
//     //         mp1.erase(key);
//     //     }
//     // }
//     // for(auto x:mp1){
//     //     int key = x.first;
//     //     int val = x.second;
//     //     int abss = abs(mp1[key]-mp2[key]);
//     //     mp2.erase(key);
//     //     ans += abss;
//     // }
//     // cout<<ans + mp2.size()<<endl;

//     // cout<<"mp1"<<endl;
//     // prnt(mp1);
//     // cout<<"mp2"<<endl;
//     // prnt(mp2);
//     // cout<<"ans "<<ans<<endl;
//     // cout<<endl;
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
void solve(){
    
    int n;
    cin>>n;
    vector<long long>v1(n);
    vector<long long>v2(n);
    inpt(v1);
    inpt(v2);
    map<int,int>mp1;
    map<int,int>mp2;
    int ans = 0;
    for(auto x:v1) mp1[x]++;

    for(auto x:v2){
        if(mp1.count(x)){
            mp1[x]--;
            if(mp1[x]==0)
                mp1.erase(x);
        }else{
            mp2[x]++;
        }
    }
    // cout<<ans<<endl;
    for(auto x:mp1){
        int key = x.first;
        int val = x.second;
        if(key >= 10){
            int temp = to_string(key).size();
            mp1[temp] += mp1[key];
            
            ans+=mp1[key];
            mp1.erase(key);
        }
    }
    // cout<<ans<<endl;
    for(auto x:mp2){
        int key = x.first;
        int val = x.second;
        if(key >= 10){
            int temp = to_string(key).size();
            mp2[temp] += mp2[key];
            
            ans+=mp2[key];
            mp2.erase(key);
        }
    }
    // cout<<ans<<endl;
    // cout<<"mp1"<<endl;
    // prnt(mp1);
    // cout<<"mp2"<<endl;
    // prnt(mp2);
    vi v3(10),v4(10);
    for(auto x:mp1){
        v3[x.first] = x.second;
    }
    for(auto x:mp2){
        v4[x.first] = x.second;
    }
    for(int i=2;i<=9;i++){
        ans+= abs(v3[i]-v4[i]);
    }
    // prnt(v3);    prnt(v4);

    cout<<ans<<endl;
    

    // for(auto x:mp1){
    //     int key = x.first;
    //     int val = x.second;
    //     if(mp2.count(key)){
    //         cout<<"key"<<key<<endl;
    //         int a = abs(mp1[key]-mp2[key]);
    //         ans+=a;
    //         mp2.erase(key);
    //         mp1.erase(key);
    //     }
    // }
    // cout<<ans<<endl;
    // for(auto x:mp2){
    //     int key = x.first;
    //     int val = x.second;
    //     ans+=val;
    // }
    // cout<<ans <<endl;



    // for(auto x:v2){
    //     if(mp1.count(x)){
    //         mp1[x]--;
    //         if(mp1[x]==0){
    //             mp1.erase(x);
    //         }
    //     }else{
    //         if(x/10 > 9){
    //             x = to_string(x).size();
    //             ans++;
    //         }
    //         if(mp1.count(x)){
    //             mp1[x]--;
    //             if(mp1[x]==0){
    //                 mp1.erase(x);
    //             }
    //         }else{
    //             mp2[x]++;
    //         }
    //     }
    // }

    // for(auto x:mp1){
    //     int key = x.first;
    //     int val = x.second;
    //     if(key/10>9){
    //         int temp = to_string(key).size();
    //         ans++;
    //         mp1[temp] = mp1[key];
    //         mp1.erase(key);
    //     }
    // }
    // for(auto x:mp1){
    //     int key = x.first;
    //     int val = x.second;
    //     int abss = abs(mp1[key]-mp2[key]);
    //     mp2.erase(key);
    //     ans += abss;
    // }
    // cout<<ans + mp2.size()<<endl;

    // cout<<"mp1"<<endl;
    // prnt(mp1);
    // cout<<"mp2"<<endl;
    // prnt(mp2);
    // cout<<"ans "<<ans<<endl;
    // cout<<endl;
    


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
