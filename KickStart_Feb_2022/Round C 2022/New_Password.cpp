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
//     bool A=false;
//     bool a=false;
//     bool sch=false;
//     bool num = false;
//     set<char>numst;
//     numst.insert('0');
//     numst.insert('1');
//     numst.insert('2');
//     numst.insert('3');
//     numst.insert('4');
//     numst.insert('5');
//     numst.insert('6');
//     numst.insert('7');
//     numst.insert('8');
//     set<char>sst;
//     sst.insert('*');
//     sst.insert('&');
//     sst.insert('@');
//     sst.insert('#');
//     for(auto x:s){
//         if(sst.count(x)){
//             sch=true;
//         }else if(numst.count(x)){
//             num=true;
//         }else if(isupper(x)){
//             A=true;
//         }else if(islower(x)){
//             a=true;
//         }
//     }
    
//     if(!a){
//         s+="a";
//     }
//     if(!A){
//         s+="A";
//     }
//     if(!sch){
//         s+="#";
//     }
//     if(!num){
//         s+="0";
//     }
//     if(s.length()<7){
//         while(s.length()!=7){
//             s+="1";
//         }
//     }
//     cout<<s<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
// }


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     int t;
//     cin>>t;
//     for(int tt=1;tt<=t;tt++){
//         cout<< "Case #" << tt << ": ";
//         solve();
//     }
    
//     return 0;
// }


#include<bits/stdc++.h>

using namespace std;

#define tc() ll t; cin>>t;for(ll tt=1; tt<=t; tt++)
using vi = vector<int>;
#define pb push_back
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define vii vector<ii>
#define endl '\n'

using ii = pair<int,int>;
#define f first
#define s second

using ll = long long;
using ld = long double;

const int mod = 1e7;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;

// ------------------------------Debug---------------------------------------- //

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void print(T t, V... v) {_print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

// ------------------------------Debug------------------------------------------ //




void solve() {
    
    int n;
    cin>>n;
    string s;
    cin>>s;

    int flagd = 0;
    int flagu = 0; 
    int flagl = 0;
    int flags = 0;
    int flagsz = 0;

    

    for(int i=0; i<n; i++){
        if(isdigit(s[i])){
            flagd = 1;
        }
        else if(isupper(s[i])){
            flagu = 1;
        }
        else if(islower(s[i])){
            flagl = 1;
        }
        else if(s[i]=='#' or s[i]=='@' or s[i]=='*' or s[i]=='&'){
            flagl = 1;
        }
    }

    if(!flagd){
        char ch = '1';
        s += ch;
    }
    if(!flagu){
        s += 'A';
    }
    if(!flagl){
        s+= 'a';
    }
    if(!flags){
        s += '@';
    }

    if(sz(s)<7){
        int siz = 7-sz(s); 
        for(int i=0; i<siz; i++){
            s+= '1';
        }
    }

    cout<<s<<endl;

}



int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("speed.in", "r", stdin);
    // freopen("speed.out", "w", stdout);
    
    int tc = 1;
    cin >> tc;
    for (int t = 1; t <= tc; t++) {
        cout << "Case #" << t << ": ";
        solve();
    }

    return 0;
}