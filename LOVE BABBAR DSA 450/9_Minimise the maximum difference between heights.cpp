#include<bits/stdc++.h>

using namespace std;

int main(){
    int a[10]={2 ,6 ,3 ,4 ,7 ,2 ,10 ,3 ,2 ,1};
    int n=10;
    int k=5;
    sort(a,a+n);
        int i;
        int small = a[0]+k;
        int big = a[n-1]-k;
        
        if(small>big){
            swap(small,big);
        }
        
        for(i=1;i<n-1;i++){
            int sub = a[i]-k;
            int add = a[i]+k;
            
            if(sub>=small || add<=big){
                continue;
            }
            else if(big-sub <= add-small){
                small = sub;
            }
            else{
                big = add;
            }
        }
        
        int b =  min((big-small),(a[n-1]-a[0]));
        cout<<b;
    
    return 0;
}