#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int k=1;k<=t;k++){
        int bag,kids;
        cin>>bag>>kids;
        int candy=0;
        for(int i=0;i<bag;i++){
            int temp;
            cin>>temp;
            candy+=temp;
        }
        cout<<"Case #"<<k<<": "<<candy%kids<<endl;
    }
}