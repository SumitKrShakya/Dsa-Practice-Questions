// https://codeforces.com/problemset/problem/1025/B
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


// void wcdList(int n,int m, map<int,int> &mp){
//     map<int,int>mps;
//     // cout<<n<<" "<<m<<endl;
//     for(int i=2;i*i<=n;i++){
//         if(n%i==0){
//             while(n%i==0){
//                 n/=i;
//             }
//             mps[i]++;
//         }
//     }
//     if(n>1)mps[n]++;
//     for(int i=2;i*i<=m;i++){
//         if(m%i==0){
//             while(m%i==0){
//                 m/=i;
//             }
//             mps[i]++;
//         }
//     }
//     if(m>1)mps[m]++;
//     // cout<<n<<" "<<m<<endl;
//     // prnt(mps);
//     // cout<<"___"<<endl;
//     for(auto x:mps){
//         mp[x.first]++;
//     }
// }


// void solve(){
    
//     int n;
//     cin>>n;
//     map<int,int>mp;
//     for( int i=0;i<n;i++){
//         int a,b;
//         cin>>a>>b;
//         // cout<<a<<" "<<b<<endl;
//         wcdList(a,b,mp);
//     }
//     int ans = -1;
//     for(auto x:mp){
//         if(x.second==n){ans=x.first;}
//     }
//     // prnt(mp);
//     cout<<ans<<endl;
// }


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     // int t;
//     // cin>>t;
//     // for(int tt=1;tt<=t;tt++){
//         // cout<< "Case #" << tt << ": ";
//         solve();
//     // }
    
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
long long a[150005],b[150005],ct1,ct2,g,ct;
int main()
{
	long long i,n;
	cin>>n;
	g=ct1=ct2=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		g= __gcd(g,a[i]*b[i]);
	}
	if(g==1) cout<<-1<<endl;
	else {
        cout<<"G= "<<g<<endl;
		for(i=1;i<=n;i++) {
			ct = __gcd(g, a[i]);
			if(ct == 1) {
				ct = __gcd(g, b[i]);
			}
			g = ct;
		}
	cout<<g<<endl;
	}
	return 0;
}