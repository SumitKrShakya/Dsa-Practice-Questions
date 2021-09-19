#include<bits/stdc++.h>

using namespace std;

int main(){
    int n,totalp=41998;
    string s,previous="11",neww;
    for(int i=0;i<42;i++){
        cin>>s>>n;
        neww=s[5]+s[6];

        cout<<s<< "  "<<n<<"  "<<(n*100)/41998<<"% ";
        // if(previous!=neww){
        //     cout<<(totalp*100)/41998-(n*100)/41998;
        //     previous=neww;
        //     totalp=n;
        // }
        cout<<endl;
    }
    
    return 0;
}