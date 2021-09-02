#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int a,b,c,T,A,B,C;
        cin>>a>>b>>c>>T>>A>>B>>C;
        if(A>=a&&B>=b&&C>=c&&A+B+C>=T){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}
