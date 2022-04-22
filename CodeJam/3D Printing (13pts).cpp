#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int ttyl=1;ttyl<=t;ttyl++){
        vector<int>cvector,mvector,yvector,kvector;
        int cyan=0,megenta=0,yellow=0,black=0;
        int cyanmin=INT_MAX;
        int megentamin=INT_MAX;
        int yellowmin=INT_MAX;
        int blackmin=INT_MAX;
        for(int i=0 ;i<3 ;i++){
            cin>>cyan>>megenta>>yellow>>black;
            cvector.push_back( cyan);
            cyanmin = min(cyanmin,cyan);
            yvector.push_back( yellow);
            blackmin = min(blackmin,black);
            mvector.push_back( megenta);
            yellowmin = min(yellowmin,yellow);
            kvector.push_back( black);
            megentamin = min(megentamin,megenta);
            
        }
        cout<<"Case #"<<ttyl<<": ";
        if(cyanmin+megentamin+yellowmin+blackmin < 1'000'000){
            cout<<"IMPOSSIBLE"<<endl;
        }else if(cyanmin+megentamin+yellowmin+blackmin==1'000'000){
            cout<<cyanmin<<" "<<megentamin<<" "<<yellowmin<<" "<<blackmin<<endl;
        }else{
            vector<int>temptemptt;
            temptemptt.push_back(cyanmin);
            temptemptt.push_back(megentamin);
            temptemptt.push_back(yellowmin);
            temptemptt.push_back(blackmin);
            int sdsdfdsf = cyanmin+megentamin+yellowmin+blackmin - 1'000'000;
            for(int j=0;j<4;j++){
                if(temptemptt[j]>=sdsdfdsf){
                    temptemptt[j] -= sdsdfdsf;
                    break;
                }else{
                    sdsdfdsf-=temptemptt[j];
                    temptemptt[j]=0;
                }
            }
            cout<<temptemptt[0]<<" "<<temptemptt[1]<<" "<<temptemptt[2]<<" "<<temptemptt[3]<<endl;
        }
    }
    return 0;
}