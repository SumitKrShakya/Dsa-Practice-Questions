#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
    int t,n;
    cin>>t;
    while(t!=0){
        cin>>n;
        int arr[] = {20,36,51,60};
        for(int i=1;i<=4;i++){
            if(n==i){
                cout<<arr[i-1]<<endl;
            }
        }
        if(n%4==0 && n!=4){
            if(n==0){
                cout<<0<<endl;
            }
            else{
                cout<<arr[3]+(n-4)*11<<endl;
            }
        }
        if(n%4==1){
         cout<<65+(n-4)*11<<endl;
        }
        if(n%4==2){
         cout<<66+(n-4)*11<<endl;
        }
        if(n%4==3){
         cout<<66+(n-4)*11<<endl;
        }

        t--;
    }


    return 0;
}
