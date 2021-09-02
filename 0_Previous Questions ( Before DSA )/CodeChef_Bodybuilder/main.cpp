#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,r,ans=0;
        cin>>n>>r;
        ll a[n],b;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll counti;
        for(ll i=0;i<n;i++){
            counti=0;
            cin>>b;
            if(i==0){
                counti=b;
            }else{
                counti=(b-((a[i]-a[i-1])*r));
            }
            ans+=counti;
        }
        cout<<ans<<endl;
    }

    return 0;
}
