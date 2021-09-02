#include <iostream>

using namespace std;

int main()
{
    int t;
    cin >>t;
    while(t!=0){
        int n,k,sum=0,flag=0;
        string s;
        cin>>n>>k>>s;
        for(int i=0;i<n;i++){
            if(s[i]!='*'){
                sum=0;
            }else{
                sum++;
                if(sum==k){
                    cout<<"yes\n";
                    flag=1;
                    break;
                }
            }
        }
        if(flag==0){
            cout<<"no\n";
        }
        t--;
    }
    return 0;
}
