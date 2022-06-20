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
//     string s;
//     cin>>s;

//     int ans = 1;
//     for(auto x: s){
//         map<int,int>mp;
//         mp[abs(x-'a')]++;
//         mp[abs(x-'e')]++;
//         mp[abs(x-'i')]++;
//         mp[abs(x-'o')]++;
//         mp[abs(x-'u')]++;

//         ans = ((ans % MOD) * (mp.begin()->second % MOD))%MOD;
//     }

//     cout<<ans<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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


#include<bits/stdc++.h>
#define mod 1000000007
#define ll long long 
using namespace std;
const int N = 1000001;
int arr[N];

void gupta(){
    int n;
    cin>>n;
    string ss;
    cin>>ss;
    // map<char,int>m;
    set<char>t;
    string s="";
    for(auto x:ss){
        t.insert(x);
    }
    for(auto x:t){
        s+=x;
    }
    vector<int>ct;
    ll ans=1;
    // ll sum=0;
    for(int i =0;i<n;i++){
        set<int>st;
        // cout<<"e1 :"<<abs(s[i]-'a')<<endl;
        st.insert(abs(s[i]-'a'));
        // cout<<"e1 :"<<abs(s[i]-'e')<<endl;

        st.insert(abs(s[i]-'e'));
        // cout<<"e1 :"<<abs(s[i]-'i')<<endl;

        st.insert(abs(s[i]-'i'));
        // cout<<"e1 :"<<abs(s[i]-'o')<<endl;

        st.insert(abs(s[i]-'o'));
        // cout<<"e1 :"<<abs(s[i]-'u')<<endl;

        st.insert(abs(s[i]-'u'));
        // for(auto x:st) cout<<"st :"<<x<<" ";
        // cout<<endl;
        // if(st.count(0)) ct.push_back(1);
        // else{
        // int temp = 5-st.size()+1;
        // // cout<<"temp :"<<temp<<" "<<endl;
        // ct.push_back(temp);}
        cout<<"sfdsf"<<*st.begin()<<endl;
        ct.push_back(*st.begin());
    }
    // cout<<endl;
    // cout<<"ct: ";
    // for(auto x:ct){
    //     sum+=x;
    //     // cout<<x<<" ";
    // }
    // // cout<<endl;
    // if(sum==0) cout<<1<<endl;
    // else{

    
    for(int i =0;i<ct.size();i++){
        ans=(ans*ct[i])%mod;
    }
    cout<<ans<<endl;
    // }
    


    // for(auto x:v) cout<<x<<" ";
    // cout<<endl;

}

int main(){
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    int t;
    cin>>t;
    while(t--){
        gupta();
    }
    return 0;
}