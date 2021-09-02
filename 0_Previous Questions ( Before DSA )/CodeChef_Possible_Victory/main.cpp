#include <bits/stdc++.h>
using namespace std;

int main(){

    int r,o,c;
    cin>>r>>o>>c;
    int x=r-c;
    int y=(20-o)*36;
    if(x<y){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
