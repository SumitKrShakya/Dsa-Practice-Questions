#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a,b,SARTHAK=0,ANURADHA=0;
        cin>>n>>a>>b;
        string inp;
        char check[7]={'E','Q','U','I','N','O','X'};
        for(int i=0;i<n;i++){
            cin>>inp;
            int flag=0;
            for(int j=0;j<7;j++){
                if(check[j]==inp[1]){
                    SARTHAK+=a;
                    flag=1;
                    break;
                }
            }
            if(flag==0){
                ANURADHA+=b;
            }
        }
        if(ANURADHA==SARTHAK){
            cout<<"DRAW";
        }else if(ANURADHA>SARTHAK){
            cout<<"ANURADHA";
        }else if(ANURADHA<SARTHAK){
            cout<<"SARTHAK";
        }


    }
    return 0;
}
