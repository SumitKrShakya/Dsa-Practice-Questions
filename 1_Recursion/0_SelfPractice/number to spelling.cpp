#include<bits/stdc++.h>

using namespace std;

string intToNum(int n,string s[10]){
   if(n<10){
       return s[n%10];
   }
   cout<<intToNum(n/10,s)<<" ";
   return s[n%10];
}

int main (){
    int n;
    cin>>n;
    string s[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    cout<<intToNum(n,s);
    return 0;
}