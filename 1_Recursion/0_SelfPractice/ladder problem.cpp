#include<bits/stdc++.h>

using namespace std;

int ans(int n,int k){

    if(n==0){
        return 1;
    }
    if(n<0){
        return 0;
    }

    int anss=0;
    for(int i=1;i<=k;i++){
        anss+=ans(n-i,k);
    }

    return anss;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        cout<<n<<" -> "<<ans(n,k)<<endl;
    }
    

    return 0;
}