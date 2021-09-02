#include <bits/stdc++.h>
using namespace std;
bool check_water_stored(int i,int arr[],int n){
    int flag=0;
    for(int j=0;j<i;j++){
        if(arr[j]>arr[i]){
            flag+=1;
            break;
        }
    }for(int j=(n-1);j>i;j--){
        if(arr[j]>arr[i]){
            flag+=1;
            break;
        }
    }
    if(flag==2){
        return true;
    }return false;
}
int main()
{
    int arr[]={0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1},n = sizeof(arr)/sizeof(arr[0]),water_stored=0;
    while(*max_element(arr, arr + n)!=0){
        for(int i=0;i<n;i++){
            arr[i]-=1;
        }
        for(int i=1;i<n;i++){
            if(arr[i]==-1){
                if(check_water_stored(i,arr,n)){
                    arr[i]=0;
                    water_stored+=1;
                }
            }
        }
    }
    cout<<water_stored;
    return 0;
}
