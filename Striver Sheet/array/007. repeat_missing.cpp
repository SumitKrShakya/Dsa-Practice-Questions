#include<bits/stdc++.h>
using namespace std;
vector<int> repeatedNumber(const vector<int> &A) {
    int totalXor=0, n=A.size();
    for(int i=0; i<n; ++i){
        totalXor = totalXor^A[i];
    }
    int aXorb = 0;
    for(int i=1; i<=n; ++i){
        totalXor = totalXor^i;
    }
    aXorb = totalXor;
    int lsb = 0;
    while((1<<lsb)<=aXorb){
        lsb++;
    }
    lsb--;
    vector<int> zeros, ones;
    for(int i=0; i<n; i++){
        if(A[i]&(1<<lsb)){
            ones.push_back(A[i]);
        }else{
            zeros.push_back(A[i]);
        }
    }
    for(int i=1; i<=n; ++i){
        if(i&(1<<lsb)){
            ones.push_back(i);
        }else{
            zeros.push_back(i);
        }
    }
    int x=0, y=0;
    for(int i=0; i<ones.size(); ++i){
        x = x^ones[i];
    }
    for(int i=0; i<zeros.size(); ++i){
        y = y^zeros[i];
    }
    for(int i=0; i<n; i++){
        if(x==A[i]){
            return {x, y};
        }else if(y==A[i]){
            return {y, x};
        }
    }
}