#include <iostream>
using namespace std;




int main()
{
    int arr[4][4]={{1, 2, 3, 4},
                {5, 6, 7, 8},
                {9, 10, 11, 12},
                {13, 14, 15,16}};
    int sr=1,sc=1,r=4,c=4;
    for(int j=1;j<r*c;j++){
        for(int i=sr;i<r;i++){
            cout<<arr[1][i]<<" ";
        }c-=1;
        sc+=1;
        for(int i=sc;i<c;i++){
            cout<<arr[i][c]<<" ";
        }r-=1;
        for(int i=r;i>0;i--){
            cout<<arr[r][i]<<" ";
        }c-=1;
        for(int i=c;i>0;i--){
            cout<<arr[i][c]<<" ";
        }r-=1;
    }
    return 0;
}
