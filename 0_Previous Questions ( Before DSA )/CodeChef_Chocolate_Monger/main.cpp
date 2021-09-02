#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,x,diff=0;
        cin>>n>>x;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr, arr + n);
        for(ll i=0;i<n-1;i++){
            if(arr[i]!=arr[i+1]){
                    diff++;
               }
        }
        if(diff>x){
            cout<<diff<<endl;
        }else{
            cout<<n-x<<endl;
        }
    }
    return 0;
}
