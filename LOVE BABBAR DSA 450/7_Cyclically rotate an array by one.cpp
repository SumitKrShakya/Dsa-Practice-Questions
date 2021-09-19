#include <bits/stdc++.h>

using namespace std;

void rotate(int arr[], int n);

int main()
{
    int n;
    cin >> n;
    int a[n], i;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 1; i < n; i++)
        swap(a[0], a[i]);
    for (i = 0; i < n; i++)
        cout << a[i]<<" ";



    set<int>st;
    st.insert(5);
    st.insert(2);
    auto it = st.end();
    it--;
    cout<<*it;    it--;
    cout<<*it;
    return 0;
}