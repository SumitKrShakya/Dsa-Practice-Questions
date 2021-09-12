#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n>>m;
    map<int, int> mp;
    int val;
    for (int i = 0; i < n+m; i++){
        cin >> val;
        mp.insert(make_pair(val, i));
    }
    cout<<mp.size();

    return 0;
}