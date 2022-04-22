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
    
    int noOfShop,admin,temp;
    cin>>noOfShop>>admin;
    vector<int>arr;
    int minn=INT_MAX;
    int sum = 0;
    for (int  i = 0; i < noOfShop; i++)
    {
        cin>>temp;
        sum+=temp;
        minn=min(minn,temp);
        arr.push_back(temp);
    }


    if(admin<=minn){
        cout<<noOfShop<<endl;
    }else{
        // if(sum <= admin){
        //     int t = admin % noOfShop;
        //     t = admin/minn + (t?1:0);
        //     if()
        //     cout<< admin/minn + (t?1:0)<<endl;
        // }else{

        // }
        int t = admin % minn;
        t = admin/minn + (t?1:0);

        if(noOfShop<t){
            cout<<t<<endl;
        }else{
            cout<<noOfShop<<endl;
        }
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
