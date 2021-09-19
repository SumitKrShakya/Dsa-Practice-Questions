#include<bits/stdc++.h>

using namespace std;

int main(){
    long long int n;
    cin>>n;
    long long int a[n];
    for (long long int i=0;i<n;i++){
        cin>>a[i];
    }
    long long int local=a[0],global=a[0];

    for(long long int i=1;i<n;i++){
        local = max(local+a[i],a[i]);
        global = max(global,local);
    }
    cout<<global;
    
    return 0;
}