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
    if(n>=1900){
        cout<<"Division 1"<<endl;
    }else if(n>=1600 && n<=1899){
        cout<<"Division 2"<<endl;
    }else if(n>=1400 && n<=1599){
        cout<<"Division 3"<<endl;
    }else if(n<=1399){
        cout<<"Division 4"<<endl;
    }
    
    
    
    
    // For Division 1: 1900≤rating
    // For Division 2: 1600≤rating≤1899
    // For Division 3: 1400≤rating≤1599
    // For Division 4: rating≤1399
    
    
    
    
    
    
    
    
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
