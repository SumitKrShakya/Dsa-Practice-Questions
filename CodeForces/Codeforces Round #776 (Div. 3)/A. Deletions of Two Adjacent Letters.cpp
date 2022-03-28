#include<bits/stdc++.h>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        string s;
        char c;
        cin>>s>>c;
        int flag = 0;
        for(int i=0;i<s.length();i++){
            if(s[i]==c && i%2==0){
                flag=1;
                break;
            }
        }

        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}