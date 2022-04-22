#include <bits/stdc++.h>

typedef long long ll;

#define loop(x, n) for(int x = 0; x < n; ++ x)
#define rloop(x, n) for(int x = n-1; x >= 0; x--)
#define ins insert 
#define pb push_back

const int MOD = 1e9+7;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1}; // for every grid problem!!

using namespace std;

void solve(){
    int n,k;
    vector<string>arr={"Off","On","Ambiguous"};
    cin>>n>>k;
    
    if(n%4==0){
        cout<<arr[k]<<endl;
    }else if(k==0 && n%4!=0){
        cout<<arr[1]<<endl;
    }else{
        cout<<arr[2]<<endl;
    }
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
