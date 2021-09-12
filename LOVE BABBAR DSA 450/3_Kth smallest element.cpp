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
    int k;
    cin>>k;
    auto kmin = mp.begin();
    advance(kmin,k-1);
    cout<<"Kth minimum element : "<<kmin->first<<endl;

    return 0;
}