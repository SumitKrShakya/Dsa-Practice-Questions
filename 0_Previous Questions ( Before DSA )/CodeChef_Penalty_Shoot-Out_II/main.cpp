#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,a=0,b=0,flag=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<2*n;i++){
            if(i%2==0 && s[i]=='1'){
                a++;
            }
            i++;
            if(s[i]=='1'){
                b++;
            }
            if((n-((i/2)+1))+a<b) {
                cout<<i+1<<endl;
                flag=1;
                break;
            }
            if(((n-((i/2)+1))+b<a)){
                cout<<i+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<2*n<<endl;
        }
    }
    return 0;
}
