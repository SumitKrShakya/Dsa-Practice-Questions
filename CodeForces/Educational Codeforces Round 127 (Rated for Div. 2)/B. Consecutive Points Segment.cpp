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
    vector<int>arr(n);
    int cnt=0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int prev=arr[0];
    int flag=1;
    for(int i = 1; i < n; i++){
        cnt = cnt + (arr[i]-prev-1);
        if(cnt>2){
            flag=0;
            break;
        }
        prev=arr[i];
    }

    if(flag==1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        //cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
