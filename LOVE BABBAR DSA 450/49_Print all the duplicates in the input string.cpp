#include <bits/stdc++.h>

using namespace std;

map <char,int> t;

void duplicate(string s)
{
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if(t.find(s[i])!=t.end()){
            t[s[i]]++;
        }else{
            t.insert(make_pair(s[i],1));
        }
    }
}

int main()
{
    string s;
    cin >> s;
    duplicate(s);
    for(auto it=t.begin();it!=t.end();it++){
        if(it->second!=1){
            cout<<"character "<<it->first<<" comes "<<it->second<<" times."<<endl; 
        }
    }

    return 0;
}