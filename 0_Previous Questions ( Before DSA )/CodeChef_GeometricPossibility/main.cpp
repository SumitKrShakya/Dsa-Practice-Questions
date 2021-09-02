#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(t;t>0;t--){
        int n,sum=0,ai=0,maximum=0;
        cin>>n;
        for(n;n>0;n--){
            cin>>ai;
            maximum<ai?maximum=ai:ai;
            sum+=ai;
        }sum-=maximum;
        (sum>maximum)?cout<<"Yes"<<endl:cout<<"No"<<endl;
    }
    return 0;
}
