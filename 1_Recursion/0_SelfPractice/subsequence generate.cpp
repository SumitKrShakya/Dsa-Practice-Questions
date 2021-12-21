#include<bits/stdc++.h>

using namespace std;

void subset(char *in, char *out,int i,int j){
    if(in[i]=='\0'){
        out[j] = '\0';
        cout<<out<<endl;
        return;
    }
    out[j]=in[i];
    subset(in,out,i+1,j+1);
    subset(in,out,i+1,j);
}


int main(){
    char s[]="abc";
    int n=strlen(s);
    char k[n]; 
    subset(s,k,0,0);




    return 0;
}