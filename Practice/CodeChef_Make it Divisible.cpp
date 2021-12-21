#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n],zero=0,one=0,two=0;
        for(ll i = 0;i<n;i++){
            cin>>a[n];
            if(a[n]%3==0)
                {zero++;}
            else if(a[n]%3==1)
                {one++;}
            else
                {two++;}
        }
        // cout<<"one:"<<one<<"two:"<<two<<endl;
        if(one==two){
            cout<<one<<endl;
            // cout<<"here"<<endl;
        }else if((abs(one-two))%3==0){
            ll ans=one>two?two:one;
            cout<<(ans+((abs(one-two))/3)*2)<<endl;
        }else{
            cout<<-1<<endl;
        }
    }
	return 0;
}
