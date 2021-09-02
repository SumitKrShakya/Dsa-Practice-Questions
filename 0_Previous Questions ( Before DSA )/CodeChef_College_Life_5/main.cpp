#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t>0){
        int n=0,m=0,pf=0,pc=0,counti=0;
        cin>>n>>m;
        int f[n],c[m];
        for(int i=0;i<n;i++){
            cin>>f[i];
        }for(int i=0;i<m;i++){
            cin>>c[i];
        }char cp;
        f[0]>c[0]?cp='c':cp='f';
        while(pf!=(n-1)||(pc!=m-1)){
            if(cp=='f'){
                if(c[pc]<f[pf+1]){
                    cp='c';
                    counti++;
                    pf++;
                }else{
                    pf++;
                }
            }else{
                if(f[pf]<c[pc+1]){
                    cp='f';
                    counti++;
                    pc++;
                }else{
                    pc++;
                }
            }
        }
        if(pf==(n-1)&&f[pf]<c[pc]){
            counti++;
        }if(pc==(m-1)&&c[pc]<f[pf]){
            counti++;
        }cout<<counti<<endl;
        t--;
    }
    return 0;
}
