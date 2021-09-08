#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t;
    cin>>t;while(t>0){
        ll n,x;
        cin>>n>>x;
        ll arr[n];
        unordered_map<ll,ll> m1;
        for(ll i = 0;i<n;i++){
            cin>>arr[i];
        }
        ll maxInt = INT_MIN;
        pair<ll,ll>p1;
        for(ll i = 0;i<n;i++){
            if(m1.find(arr[i]) != m1.end()){
                m1[arr[i]] ++;
            }
            else{
                m1.insert({arr[i],1});
            }
        }
        ll maxTimes = 0;
        for(ll i = 0;i<n;i++){
            ll xorVal = arr[i]^x;
            ll xorvalTotal = 0;
            if(m1.find(xorVal) != m1.end() && !(xorVal == arr[i])){
                xorvalTotal = m1[xorVal];
            }
            if(m1[arr[i]] + xorvalTotal > maxInt){
                maxInt = m1[arr[i]] + xorvalTotal;
                p1 = {arr[i],maxInt};
                if(xorvalTotal){
                    maxTimes = m1[arr[i]];
                }
            }
            else if(m1[arr[i]] + xorvalTotal == maxInt && maxTimes > m1[arr[i]]){
                maxTimes = m1[arr[i]];
            }
        }
        cout<<p1.second<<" "<<maxTimes<<endl;
        t--;
    }   
	return 0;
}