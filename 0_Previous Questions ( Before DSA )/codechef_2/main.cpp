#include <iostream>
using namespace std;
int main()
{
    int T,length,counti=0;
    string num,add="0";
    cin>>T;
    for(int i=0;i<T;i++){
        cin>>num;
        length=num.length();
        num=add+num;
        for(int j=0;j<length;j++){
            if(num[j]=='0'&&num[j+1]=='1'){
                counti++;
            }
        }cout<<counti<<endl;
        counti=0;
    }printans();
    return 0;
}
