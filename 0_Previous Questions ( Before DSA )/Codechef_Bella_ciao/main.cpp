#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int D,d,p,q,sum;
        cin>>D>>d>>p>>q;
        int n=D/d;
        sum=n*(p+p+((n-1)*q));
        sum=sum*d;
        sum=sum/2;
        if((n*d)!==D){
            int last = p+((n)*q);
            sum=sum+((D-(n*d))*last);
        }
        cout<<sum<<endl;
    }
    return 0;
}
