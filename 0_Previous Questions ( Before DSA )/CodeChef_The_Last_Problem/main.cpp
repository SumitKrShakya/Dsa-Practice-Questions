#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x1,y1,x2,y2,sum=0;
        cin>>x1>>y1>>x2>>y2;
        while(y1<y2){
            ll n=y1+x1-2;
            ll s=((n*(n+1))/2)+y1;
            cout<<s<<endl;
            sum+=s;
            y1++;
        }
        while(x1<x2){
            ll n=y1+x1-2;
            ll s=((n*(n+1))/2)+x1;
            cout<<s<<endl;
            sum+=s;
            x1++;
        }
        cout<<sum<<endl;

    }
    return 0;
}
