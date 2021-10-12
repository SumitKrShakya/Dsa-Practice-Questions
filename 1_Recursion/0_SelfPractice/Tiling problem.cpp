#include<bits/stdc++.h>

using namespace std;

int ans(int n){

    if(n<=3){
        return 1;
    }
    return ans(n-1)+ ans(n-4);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        cout<<n<<" -> "<<ans(n)<<endl;
    }
    

    return 0;
}