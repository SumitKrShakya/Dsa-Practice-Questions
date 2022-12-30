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

// class fabric{
//     public:
//     string color;
//     ll durability;
//     ll id;
//     fabric(){
//         color= "";
//         durability = 0;
//         id= 0;
//     }
//     fabric(string s, ll d, ll i){
//         color= s;
//         durability = d;
//         id= i;
//     }
// };

// class fabricCompareColor {
// public:
//     bool operator()(const fabric& a, const fabric& b){
//         if (a.color < b.color) {
//             return true;
//         }
//         return false;
//     }
// };

// class fabricCompareDurability {
// public:
//     bool operator()(const fabric& a, const fabric& b){
//         if (a.durability < b.durability) {
//             return true;
//         }
//         return false;
//     }
// };

void solve(){
    
    ll n;
    cin>>n;

    vector<pair<string,ll>>color(n);
    vector<pair<ll,ll>>durab(n);

    for(int i=0;i<n;i++){
        string s;
        ll d,id;
        cin>>s>>d>>id;
        color[i] = {s,id};
        durab[i] = {d,id};
    }

    sort(color.begin(),color.end());
    sort(durab.begin(),durab.end());
    ll cnt=0;
    for(int i=0;i<n;i++){
        if(color[i].second == durab[i].second)cnt++;
    }
    cout<<cnt<<endl;




    // vector<fabric>vec(n);
    // for(auto &x:vec) cin>>x.color>>x.durability>>x.id;

    // vector<fabric>v1 = vec;
    // sort(v1.begin(), v1.end(), [](const fabric& lhs, const fabric& rhs) {
    //   return lhs.color < rhs.color;
    // });
    // vector<fabric>v2 = vec;
    // sort(v1.begin(), v1.end(), [](const fabric& lhs, const fabric& rhs) {
    //   return lhs.durability < rhs.durability;
    // });
    // ll cnt=0;
    // for(ll i=0;i<n;i++){
    //     if(v1[i].color==v2[i].color && v1[i].durability==v2[i].durability && v1[i].id==v2[i].id)cnt++;
    // }
    // cout<<cnt<<endl;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    ll t;
    cin>>t;
    for(ll tt=1;tt<=t;tt++){
        cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
