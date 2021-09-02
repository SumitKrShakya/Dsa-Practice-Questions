#include <iostream>

using namespace std;

int main()
{
    int a[3]={2,3,2};
    int n= 3,x;
        long long int arr[2147483648*2][2];
        for(int i=0;i<n;i++){
            int x=a[i];
            arr[2147483648+x][0]=a[i];
            arr[2147483648+x][1]++;
            if(arr[2147483648+x][1]>n/2){
                cout<<arr[2147483648+x][0];
                break;
            }
        }
    return 0;
}
