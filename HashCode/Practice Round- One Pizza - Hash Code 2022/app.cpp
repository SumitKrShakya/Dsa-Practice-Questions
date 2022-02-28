#include<bits/stdc++.h>
#include<map>
using namespace std;



int main(){
    int t;
    cin>>t;
    string ss;
    map<string,int>mp;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        for(int j=0;j<n;j++){
            cin>>ss;
            mp[ss]++;
        }
        int m;
        cin>>m;
        for(int j=0;j<m;j++){
            cin>>ss;
            mp[ss]--;
        }
    }
    int size=0;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>0) size++;
    }
    cout<<size;
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>0) cout<<" "<<it->first;
    }

    // ------------------------------------------------------
    // cin>>t;
    // for(int i=0;i<t;i++){
    //     int n;
    //     cin>>n;
    //     for(int j=0;j<n;j++){
    //         cin>>ss;
    //         mp[ss]++;
    //     }
    //     int m;
    //     cin>>m;
    //     for(int j=0;j<m;j++){
    //         cin>>ss;
    //         mp[ss]--;
    //     }
    // }

    // map<pair<int,int>,int>mp;


    return 0;
}