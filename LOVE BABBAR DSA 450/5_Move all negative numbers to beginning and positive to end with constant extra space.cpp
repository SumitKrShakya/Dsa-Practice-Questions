#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    map<int, int> mp;
    int val;
    for (int i = 0; i < n; i++){
        cin >> val;
        mp.insert(make_pair(val, i));
    }
    for(auto it = mp.begin();it!=mp.end();it++){
        cout<<it->first<<" ";
    }

    return 0;
}