#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll t;
    cin>>t;
    while(t--){
        ll n,m,x,y,u=0,f=0,p=0;
        cin>>n>>m>>x>>y;
        while(n--){
            string s;
            cin>>s;
            for(ll i=0;i<m;i++){
                s[i]=='F'?f++:f;
                s[i]=='U'?u++:u;
                s[i]=='P'?p+:p;
            }
            if(x=<f || ((x-1)+y)<=(u+p)){
                cout<<"1";
            }else{
                cout<<"0";
            }
        }
        cout<<"\n";

    }
    return 0;
}
