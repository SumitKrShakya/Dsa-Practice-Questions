#include<bits/stdc++.h>
using namespace std;
float roundi(float var)
{
    float v2=var*100;
    return (round(v2)/100);
}

int main()
{
    int t;
    cin>>t;
    while(t!=0){
        float a,b,c,v,ans;
        cin>>a>>b>>c>>v;
        ans=a*b*c*v;
        if(100/roundi(ans)>9.58){
            cout<<"yes\n";
        }else{
            cout<<"no\n";
        }
    }

    return 0;
}
