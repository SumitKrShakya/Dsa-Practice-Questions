#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,e;
        vector<int>vec;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>e;
            vec.push_back(e);
        }
        sort(vec.begin(),vec.end());
        if(n>1){
            if(vec[n-1] - vec[n-2]<=1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(n==1 && vec[0]==1){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}