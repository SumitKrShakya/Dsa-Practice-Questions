#include<bits/stdc++.h>
#include <iostream>
#include <sstream>
#include<string>

using namespace std;

int main(){
    string t,s,temp;
    getline(cin,t);
    getline(cin,s);
    // cout<<t.length()<<"\n"<<s.length();
    map<char,int>mp;
    for(int i=0;i<s.length();i++){
        mp[s[i]]=i;
    }
    vector<string>vec;
    stringstream strstream(t);
    string word;
    while (strstream >> word)
        vec.push_back(word);
    for(auto ele:vec){
        cout<<ele<<endl;
        for(int i=0;i<ele.length();i++){
            




        }
    }

    return 0;
}