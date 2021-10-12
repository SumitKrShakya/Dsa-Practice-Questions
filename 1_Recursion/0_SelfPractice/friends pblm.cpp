#include<bits/stdc++.h>

using namespace std;

int ans(int n){
    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    




    return ans(n-1)+(n-1)*ans(n-2);
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