#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        if((n-k)==1){
            cout<<"-1"<<endl;
        }else{
            for(int i=1;i<=n;i++){
                if(i<=k){
                    cout<<i<<" ";
                }else if(i==n){
                    cout<<k+1<<" ";
                }else{
                    cout<<i+1<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}