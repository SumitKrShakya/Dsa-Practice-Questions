#include <bits/stdc++.h>

using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin>>x>>y;
        if(abs(abs(x)-abs(y))%2==0){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }
    return 0;
}