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
    
    int n;
    cin>>n;
    deque<int>v;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin>>t;
        v.push_back(t);
    }
    int ans=0;
    int prev = 0;
    while(v.size()){
        int f = v.front();
        int b = v.back();
        if(f==b){
            if(f>=prev) ans++, prev=f;
            v.pop_front();
            // prev=f;
            // cout<<prev <<" f"<<f<<endl;
        }
        else if(f<b){
            if(f>=prev) ans++, prev=f;
            v.pop_front();
            // prev=f;
            // cout<<prev<<" f"<<f<<endl;
        }else if(f>b){
            if(b>=prev) ans++, prev=b;
            v.pop_back();
            // prev=b;
            // cout<<prev<<" b"<<b<<endl;
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
