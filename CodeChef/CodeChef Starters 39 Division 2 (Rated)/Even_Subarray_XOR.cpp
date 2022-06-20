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
    
    
     
// 1	00001
// 2	00010
// 3	00011
// 4	00100
// 5	00101
// 6	00110
// 7	00111
// 8	01000
// 9	01001
// 10	01010
// 11	01011
// 12	01100
// 13	01101
// 14	01110
// 15	01111
// 16	10000
// 17	10001
// 18	10010
    long long n;
    cin>>n;
    vector<long long> a(n),b(n);
    long long k=3;
    long long l=2;
    for(long long i=0;i<a.size();i++){
        long long temp;
        if(i%2==0){
            temp = (2*k);
           
            
        }else{
            temp = (2*k)+1;
            k+=2;
        }
        
        a[i]=temp;
    }
    for(long long i=0;i<b.size();i++){
        long long temp;
        if(i%2==0){
            temp = (2*l);
        }else{
            temp = (2*l)+1;
            
            l+=2;
        }
        
        b[i]=temp;
    }
    for(auto x:a){
        cout<<x<<" ";
    }cout<<endl;

    for(auto x:b){
        cout<<x<<" ";
    }cout<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
