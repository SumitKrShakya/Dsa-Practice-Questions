#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t; 
    while(t--){
        int a,l,r;
        cin>>l>>r>>a;
        int temp1 = (r/a) + (r%a);
        int temp2 = ((r/a)-1) + (a-1);
        if((((r/a)-1)*a+(a-1))<l){
            temp2 = -1;
        }
        cout<<max(temp1, temp2)<<endl;
        // cout<<temp1<<" ";
        // cout<<temp2<<endl;
    }
    return 0;
}