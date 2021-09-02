#include <iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t!=0){
        string s;
        char long_st;
        cin>>s;
        int len=s.size(),counti=0,p=0;
        for(int i=1;i<len;i++){
            if(s[i]==s[i-1]){
                p++;
                if(p>counti){
                    counti=p;
                    long_st=s[i];
                }
            }else{
                p=0;
            }
        }
        cout<<counti+1<<" "<<long_st<<endl;
        t--;
    }
    return 0;
}
