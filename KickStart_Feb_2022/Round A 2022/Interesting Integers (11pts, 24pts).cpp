#include <bits/stdc++.h>
using namespace std;
void sumofd(int a,int s, int p){
    int sa=0,ta=a;
    while(ta>=0){
        s+=ta%10;
        p *= ta % 10;
        ta/=10;
    }
}

int main(){
    long long t;
    cin>>t;
    for(long long k = 0; k < t; k++){
        cout<<"Case #"<<k+1<<": ";
        int a,b;
        cin>>a>>b;
        int ans=0;
        for(int i=a;i<=b;i++){
            int s=0,p=1;
            sumofd(i, s, p);
            if(p%s==0) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}