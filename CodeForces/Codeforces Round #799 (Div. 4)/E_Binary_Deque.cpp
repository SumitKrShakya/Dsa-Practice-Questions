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


// int call(vector<vector<int>>&dp,vector<int>&v,int s,int e){
//     if(s>e){
//         return ;
//     }
//     if(dp[s][e]!=-1) return dp[s][e];

// }

int lenOfLongSubarr(vector<int>arr,
					int n,
					int k)
{

	// unordered_map 'um' implemented
	// as hash table
	unordered_map<int, int> um;
	int sum = 0, maxLen = 0;

	// traverse the given array
	for (int i = 0; i < n; i++) {

		// accumulate sum
		sum += arr[i];

		// when subarray starts from index '0'
		if (sum == k)
			maxLen = i + 1;

		// make an entry for 'sum' if it is
		// not present in 'um'
		if (um.find(sum) == um.end())
			um[sum] = i;

		// check if 'sum-k' is present in 'um'
		// or not
		if (um.find(sum - k) != um.end()) {

			// update maxLength
			if (maxLen < (i - um[sum - k]))
				maxLen = i - um[sum - k];
		}
	}

	// required maximum length
	return maxLen;
}

void solve(){
    
    
    
    
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    inpt(v);
    int sum=0;
    for(auto x:v){
        sum+=x;
    }
    if(sum==m){
        cout<<0<<endl;
        return;
    }else if(sum<m){
        cout<<-1<<endl;
        return;
    }else{
        int ans = n - lenOfLongSubarr(v,n,m);
        cout<<ans<<endl;
        // vector<int>vn;
        // for(int i=0;i<n;i++){
        //     if(v[i]==1){
        //         vn.push_back(v[i]);
        //         continue;
        //     }
        //     int cnt=1;
        //     while(v[i]==0 && i<n){
        //         cnt++;
        //         i++;
        //     }
        //     i--;
        //     vn.push_back(cnt);
        // }
        // // for(auto x:vn){
        // //     cout<<x<<" ";
        // // }
        // // cout<<endl;

        // int del = sum-m;
        // int s = 0;
        // int e = vn.size()-1;
        // int ans=0;
        // // for(auto x:v){
        // //     cout<<x<<" ";
        // // }cout<<endl;
        // // for(auto x:vn){
        // //     cout<<x<<" ";
        // // }cout<<endl;
        // while(del--){
        //     if(vn[s]==vn[e]){
        //         s++;
        //         ans+=(vn[s]==1?vn[s]:vn[s]-1);
        //     }else if(vn[s]<vn[e]){
        //         s++;
        //         ans+=(vn[s]==1?vn[s]:vn[s]-1);

        //     }else{
        //         e--;
        //         ans+=(vn[s]==1?vn[s]:vn[s]-1);
        //     }
        // }
        // cout<<ans<<endl;

















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
