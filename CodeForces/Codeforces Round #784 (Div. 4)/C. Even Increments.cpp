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
    int same=1;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        // if(i!=0){
        //     if(arr[i]!=arr[i-1]) same=0;
        // }
    }
    // if(same==1){
    //     cout<<"YES"<<endl;
    // }else{
    //     bool altr=true;
    //     bool same=true;
    //     int check = arr[1]%2;
    //     int prev = arr[0]%2;
    int even=1,odd=1;
    int evenp = arr[0]%2;
    int oddp = arr[1]%2;
    for (int i = 0; i < n; i++)
    {
        if(i%2==0){
            if(arr[i]%2 != evenp){even=0;}
        }else{
            if(arr[i]%2 != oddp){odd=0;}

        }
        
        
    }
    if(even==0 || odd==0 ){
        cout<<"NO"<<endl;
    }else{
        cout<<"YES"<<endl;
    }
    //     if(prev==check){
    //         cout<<"NO"<<endl;
    //     }else{
    //         cout<<"YES"<<endl;
    //     }
    
    // }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
