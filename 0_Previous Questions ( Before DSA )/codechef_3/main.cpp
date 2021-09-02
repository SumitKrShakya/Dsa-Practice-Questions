#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int t,c;
    cin>>t;
    for(int i;i<t;i++){
        cin>>c;
        int duplicate_c=c,mp=0,twod_1=-1,help_b;
        while(duplicate_c!=0){
            duplicate_c/=2;
            twod_1++;
        }help_b=pow(2,twod_1+1);
        twod_1=pow(2,twod_1);
        int a=twod_1-1;
        int b=((help_b-1)-c)+twod_1;
        mp=a*b;
        cout<<mp<<endl;
    }
    return 0;
}
