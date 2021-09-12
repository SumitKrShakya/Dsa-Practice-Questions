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
    auto minn = mp.begin();
    auto maxx = mp.rbegin();
    cout<<"Maximum Element : "<<maxx->first<<"\nMinimum Element : "<<minn->first<<endl;

    return 0;
}