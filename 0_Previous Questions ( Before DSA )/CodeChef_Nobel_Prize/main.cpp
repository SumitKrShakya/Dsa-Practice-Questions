#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n,m,flag=0,l,a[1000000]={0};
        cin>>n>>m;
        for(int i=0;i<n;i++){
            cin>>l;
            a[l-1]=l;
        }
        for(int i=0;i<n;i++){
            if(a[i]==0){
                flag=1;
                cout<<"yes\n";
                break;
            }
        }
        if(flag!=1){
            cout <<"no\n";
        }
        t--;
    }
    return 0;
}
