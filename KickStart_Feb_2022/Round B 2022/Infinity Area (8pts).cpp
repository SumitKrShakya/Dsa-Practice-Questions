#include <bits/stdc++.h>

typedef long long ll;

#define loop(x, n) for(int x = 0; x < n; ++ x)
#define rloop(x, n) for(int x = n-1; x >= 0; x--)
#define ins insert 
#define pb push_back

const int MOD = 1e9+7;
const double pi = M_PI;
const int dx[4]{1,0,-1,0}, dy[4]{0,1,0,-1}; // for every grid problem!!

using namespace std;

void solve(){
    int r,a,b;
    cin>>r>>a>>b;
    int radius=r;
    double area = pi * r * r;
    while(radius){
        // cout<<radius<<endl;
        radius = radius*a;
        area+=pi * radius * radius;
        radius = radius / b;
        // cout<<radius<<endl;
        if(radius){
            area+=pi * radius * radius;
        }
    }
    // cout<<pi<<endl;
    cout<<fixed<<setprecision(6)<<area<<endl;

    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
