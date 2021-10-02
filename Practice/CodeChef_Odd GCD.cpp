#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin>>n;
        int a[n];
        int counti = 0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2!=0){
                counti=1;
            }
        }
        if(counti==1){
            cout<<"0"<<endl;
        }else{
            while(counti!=-1){
                counti++;
                for(int i=0;i<n;i++){
                    a[i]=a[i]/2;
                    if(a[i]%2!=0){
                        cout<<counti<<endl;
                        counti=-1;
                        break;
                    }
                }
            }
        }
    }
    return 0;
}