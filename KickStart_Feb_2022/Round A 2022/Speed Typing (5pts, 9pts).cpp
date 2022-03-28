#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int k=0;k<t;k++){
        cout<<"Case #"<<k+1<<": ";
        string i,p;
        int i1=0,p1=0,ans=0,n,m,flag=0;
        cin>>i>>p;
        n=i.length();
        m=p.length();
        while(i1<n){
            if(p1==m){
                flag=1;
                break;
            }
            if(i[i1]==p[p1]){
                i1++;
                p1++;
                continue;
            }else{
                p1++;
                ans++;
            }
        }
        ans+=(m-p1);
        if(flag){
            cout<<"IMPOSSIBLE"<<endl;
        }else{
            cout<<ans<<endl;
        }

    }





    return 0;
}