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
    
    
//     string s;
//     cin>>s;
//     int zero=0;
//     int noOfOneRemoved = 0;
//     for(auto x: s){
//         if(x=='0') zero++;
//     }
//     int p=-1;
//     // if(p==-1){
//         //     if(s[i]=='0' ){
//         //         s.erase(i,1);
//         //         i--;
//         //     }
//         // }
//     int cnt=0;
//     for(int i=0;i<s.length();i++){
//         if(s[i]=='1'){
//             cnt++;
//             if(p==-1) {p=1 ; continue;}

//             if(cnt)

//             p=i;    
//         }else{
//             cnt--;
//         }
//     }

    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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




#include<iostream>
#include<cstring>
#include<algorithm>
#include<queue>
#include<cmath>
#include<vector>
#include<bitset>
#include<assert.h>
#include<stack>
#include<set>
#include<map>
#include<sstream>
#include<unordered_map>
#include<unordered_set>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> pll;
typedef pair<int,int> pii;
typedef pair<int,pii> pipii;
typedef pair<long long,int> pli;
ll qmi(ll x,ll k,int mod){ll res=1;while(k){if(k&1)res=res*x%mod;x=x*x%mod;k>>=1;}return res;}
const int N=2e5+10,INF=0x3f3f3f3f;
int a[N],b[N];
int n;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int T;
    cin>>T;
    
    while(T--) {
    	string s;
    	cin>>s;
    	
    	n=s.size();
    	s=" "+s;
    	for(int i=1;i<=n;i++) {
    		a[i]=0,b[i]=0;
    		
    		if(s[i]=='0')a[i]++;
    		else b[i]++;
		}
		
		for(int i=1;i<=n;i++) {
			a[i]+=a[i-1];
			b[i]+=b[i-1];
		}
		
		int res=min(b[n],a[n]);
		
		for(int i=1;i<=n;i++) {
			int l=i,r=n;
			
			while(l<r) {
				int mid=l+r+1>>1;
				
				if(a[mid]-a[i-1]<=b[n]-b[mid]+b[i-1])l=mid;
				else r=mid-1;
			}
			
			res=min(res,max(a[r]-a[i-1],b[n]-b[r]+b[i-1]));
		}
		
		cout<<res<<"\n";
	}
}