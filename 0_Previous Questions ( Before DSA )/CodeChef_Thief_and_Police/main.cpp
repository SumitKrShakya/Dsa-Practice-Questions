#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
int main()
{
    ll t;
    while(t--){

        ll m,n,x,y,a,b,p,c;

        cin>>m>>n>>x>>y>>a>>b;

        p=max(n-a,m-b);

        c=((n-a)+(m-b));

        cout<<(c<=p)?"yes":"no";

    }
    return 0;
}
