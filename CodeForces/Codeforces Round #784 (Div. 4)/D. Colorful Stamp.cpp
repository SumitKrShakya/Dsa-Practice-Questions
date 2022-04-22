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
    string s;
    cin>>s;
    stringstream ss(s);
    string temp;
    int ans=1;
    // cout<<s<<endl;
    int white=1;
    for (int i = 0; i < s.length(); i++)
    {
        if(s[i]!='W') white=0;
    }
    if(white==1){
        cout<<"YES"<<endl;
    }else{
        while(getline(ss,temp,'W')){
            if(temp.length()==0)continue;
            // cout<<temp<<endl;
            int r=0;
            int b=0;
            for(auto x:temp){
                if(x=='R') r++;
                if(x=='B') b++;
            }
            if(r==0 || b==0){
                ans=0;
            }
        }

        if(ans==1){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
    
    // for (int i = 0; i < n; i++)
    // {
        
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
