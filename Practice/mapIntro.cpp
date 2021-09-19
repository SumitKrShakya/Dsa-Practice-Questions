#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp.insert(make_pair(a[i], i));
    }
    // cout<<a[3];
    int target = 4;
    // cout<<mp.containsKey(2)<<endl;
    for (int i = 0; i < n; i++)
    {
        if(mp.count(target - a[i]) && i!=mp[target - a[i]]){
            // cout<<"found "<<i<<" "<<mp[target - mp[i]]<<endl;
            cout<< i<<" "<<mp[target - a[i]] <<endl;
        }
    }

    return 0;
}