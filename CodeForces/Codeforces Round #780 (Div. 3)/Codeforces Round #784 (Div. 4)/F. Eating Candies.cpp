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
    int n;
    cin>>n;
    vector<int>arr(n);
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int l=0,r=n-1;
    int alice=0;
    int bob=0;
    int ans=0;
    while(l<r){
        // if(arr[l]==arr[r]){
        //     ans+=2;
        //     l++;
        //     r--;
        // }else 
        if(bob==alice && (alice!=0 && bob!=0)){
            ans+=2;
            if(arr[l]==arr[r]){
                ans+=2;
                alice+=arr[l];
                bob+=arr[r];
                l++;
                r--;
            }else if(arr[l]<arr[r]){
                alice+=arr[l];
                l++;
            }else if(arr[l]>arr[r]){
                bob+=arr[r];
                r--;
            }
        }else if(bob<alice){
            bob+=arr[r];
            r--;
        }else if(alice<bob){
            alice+=arr[l];
            l++;
        }

    }
    cout<<ans<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
