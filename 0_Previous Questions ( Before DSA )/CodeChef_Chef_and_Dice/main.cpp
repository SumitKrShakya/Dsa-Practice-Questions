#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0){
        int n,modulus0,devide0,pips;
        cin>>n;
        modulus0=n%4;
        devide0=n/4;
        pips=devide0*44;
        switch(modulus0){
            case 0 :
                devide0!=0?pips+=16:pips=0;
                break;
            case 1 :
                devide0!=0?pips+=32:pips=20;
                break;
            case 2 :
                devide0!=0?pips+=44:pips=36;
                break;
            case 3 :
                devide0!=0?pips+=55:pips=51;
                break;
        }
        cout<<pips<<endl;
        t--;
    }

    return 0;
}
