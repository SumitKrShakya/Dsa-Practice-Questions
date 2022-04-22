#include <bits/stdc++.h>

typedef long long ll;

#define loop(x, n) for(int x = 0; x < n; ++ x)
#define rloop(x, n) for(int x = n-1; x >= 0; x--)
#define ins insert 
#define pb push_back

const int MOD = 1e9+7;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1}; // for every grid problem!!

using namespace std;
int fact(int n){
    // int ans = ;
    return (n*(n-1))/2;
}
void solve(){
    int n;
    cin>>n;
    vector<int>arr;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin>>temp;
        arr.push_back(temp);
    }
    int k;
    cin>>k;
    int one=0,zero=0;
    map<int,int>mp;
    for(auto ele:arr){
        // cout<<(ele&k)<<endl;
        mp[ele&k]++;
    }
    // cout<<" ---------- "<<endl;

    int ans=0;
    for(auto ele:mp){
        // cout<<ele.first<<" "<<ele.second<<endl;
        ans+= (fact(ele.second)*2);
    }
    cout<<ans+n<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        //cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
