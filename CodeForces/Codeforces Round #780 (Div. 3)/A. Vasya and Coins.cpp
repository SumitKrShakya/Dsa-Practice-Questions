#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int one,two;
        cin>>one>>two;
        if(one>=1){
            cout<<(two*2)+one+1<<endl;
        }else{
            cout<<1<<endl;
        }
    }
    return 0;
}