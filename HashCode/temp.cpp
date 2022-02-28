#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TC(t) while (t--)
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x >= 0; x--)

int main(){
    int t;
    cin>>t;
    set<string>like;
    set<string>dislike;
    loop(x,t){
        // int x=0;
        int n,m;
        string s;
        cin>>n;
        loop(i,n){
            cin>>s;
            like.insert(s);
        }
        cin>>m;
        loop(i,m){
            cin>>s;
            dislike.insert(s);
        }    
    }
    set<string>st;
    set_difference(like.begin(), like.end(), dislike.begin(), dislike.end(), inserter(st, st.end()));
    cout<<st.size();
    for(auto x:st){
        cout<<" "<<x;
    }
    cout<<endl;
    // cout<<endl;
    // int index = 1;
    // cout<<like.size()<<" "<<dislike.size()<<endl;
    // for(auto it:like){
    //     cout<<like.size()<<endl;
    //     like.erase(dislike.find(it.first));
        
    // }
    
    // cout<<like.size()<<"after"<<endl;
    // for(auto x =like.begin();x!=like.end();x++){
    //     cout<<x.first<<" ";
    // }

    

    return 0;
}