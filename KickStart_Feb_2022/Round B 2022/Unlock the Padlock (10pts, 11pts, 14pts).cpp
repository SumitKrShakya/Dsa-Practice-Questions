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
    
    int nnn,dddd;
    cin>>nnn>>dddd;
    vector<int>v(nnn);
    for (int i = 0; i < nnn; i++)
    {
        cin>>v[i];
    }
    // v.push_back(0);
    int ans=0;
    for (int i = 1; i <=nnn; i++)
    {
        if(v[i]==0) continue;
        if(v[i]==1){
            
            ans++;
        }
        while(v[i]==1){
                i++;
            }
    }
    cout<<ans<<endl;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
