#include<bits/stdc++.h>
using namespace std;

char find_nQ(string s){
    for(int i=0;i<s.length();i++){
        if(s[i]!='?'){
            return s[i];
        }
        else{
            s[i]='C';
            return s[i];
        }
    }
        return '?';

}

int Question(string s, int x, int y,int cost,int i){

                int pcost=0;
                int ppcost=0;
                s[i]='C';
                if(s[i-1]=='J'){
                    pcost+=y;
                }
                if(s[i+1]=='J'){
                    pcost+=x;
                }
                if(s[i+1]=='?'){
                    s[i]='?';
                    cost+=Question(s,x,y,cost,i+1);
                    // return cost;
                }



                s[i]='J';
                if(s[i-1]=='C'){
                    ppcost+=x;
                }
                if(s[i+1]=='C'){
                    ppcost+=y;
                }
                if(s[i+1]=='?'){
                    cost+=Question(s,x,y,cost,i+1);
                    // return cost;
                }
                if(pcost<ppcost){
                    s[i]='C';
                }
                else{
                    s[i]='J';
                }
                cost+=min(pcost,ppcost);
                return cost;
}


int main(){
    int t;
    cin>>t;
    for(int a=1;a<=t;a++){
        int x,y;
        cin>>x>>y;
        string s;
        cin>>s;
        int cost=0;
        int l=s.length();
        for(int i=0;i<(l-1);i++){
            if(s[i]=='?' and s[i+1]=='?' and s[i-1]=='?'){
                    s[i]=find_nQ(s);
            }
            if(s[i]=='?'){
                cost+=Question(s,x,y,cost,i);
            }
            if(s[i+1]=='?'){
                    s[i+1]=s[i];
                    // cost+=Question(s,x,y,cost,i+1);
                    // return cost;
            }
            if(s[i]=='C' and s[i+1]=='J'){
                cost+=x;
            }
            if(s[i]=='J' and s[i+1]=='C'){
                cost+=y;
            }

        }
        cout<<"Case#"<<a<<":"<<cost<<endl;

    }
    return 0;
}
