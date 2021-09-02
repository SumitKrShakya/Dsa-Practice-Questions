#include <iostream>
using namespace std;
int main()
{
    int N,H,x,element,yes_no=0;
    cin>>N>>H>>x;
    for(int i=0;i<N;i++){
        cin>>element;
        if(element==(H-x)){
            yes_no++;
            cout<<"yes";
            break;
        }
    }
    if(yes_no==0){
        cout<<"no";
    }
    return 0;

}
