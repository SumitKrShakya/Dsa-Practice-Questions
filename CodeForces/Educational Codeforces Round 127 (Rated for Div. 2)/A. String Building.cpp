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
    
    string s;
    cin>>s;
    int cnt=0;
    int prev=0;
    // char prev = s[0];
    int flag=1;
    for(int i=0;i<s.length();i++){
        cnt=1;
        prev = i;
        // ++i;
        while(s[i+1]==s[prev]){
            cnt++;
            prev++;
            i++;
        }
        // cout<<cnt<<endl;
        if(cnt==1){
            flag= 0;
            break;
        }
        // cout<<cnt<<endl;
        // cnt=0;
    }
    // if(s[s.length()-1]!= s[s.length()-2]) flag=0;

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
    for(int tt=1;tt<=t;tt++) {
        //cout<< "Case #" << tt << ": ";
        solve();
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s;
//         cin>>s;
//         int n = s.length();
//         int cta = 0;
//         int ctb =0;
//         int ct =0;
//         vector<int>v;
//         for(int i =0;i<n-1;i++){
//             if(s[i]==s[i+1]){
//                 ct++;
//             }
//             if(s[i]!=s[i+1]){
//                 v.push_back(ct+1);
//                 ct=0;
//             }

//         }
//         int flag=0;
//         v.push_back(ct+1);
//         for(auto x:v){
//             cout<<x<<" ";
//             if(x==1){ 
//                 flag=1;
//             break;
//             }
//             else{
//                 flag=0;
//             }
//         }
//         if(flag==1) cout<<"NO"<<endl;
//         else cout<<"YES"<<endl;
//     }
// }