#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n],
     negative,positive,zero;
    for(int i=0;i<n;i++){
        cin<<arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            negative++;
        }
        if(arr[i]>0){
            positve++;
        }
        if(arr[i]<0){
            zero++;
        }




    }


    cout<<fixed<<setprecision(6)<<positive<<endl;
    cout<<fixed<<setprecision(6)<<positive<<endl;
    cout<<fixed<<setprecision(6)<<positive<<endl;
    return 0;
}
