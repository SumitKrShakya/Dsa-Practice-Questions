#include <iostream>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll x,y,xr,yr,d;
        cin>>x>>y>>xr>>yr>>d;
        if((xr*d)>=x && (yr*d)>=y){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
    }
    return 0;
}
