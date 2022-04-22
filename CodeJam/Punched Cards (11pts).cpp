#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int aa,bb;
    cin>>t;
    for(int ttyl=1;ttyl<=t;ttyl++){
        cin>>aa>>bb;
        int aaa = ((2*aa)+1);
        int bbb = ((2*bb)+1);
        cout<<"Case #"<<ttyl<<":"<<endl;
        for(int tre=0;tre<aaa;tre++){
            for(int uupl=0;uupl<bbb;uupl++){
                if(!(tre/2) && !(uupl/2)){
                    cout<<".";
                }else if(tre%2==0){
                    if(uupl%2==0){
                        cout<<"+";
                    }else{
                        cout<<"-";
                    }
                }else{
                    if(uupl%2==0){
                        cout<<"|";
                    }else{
                        cout<<".";
                    }
                }
            }
            cout<<endl;
        }
    }
    return 0;

}