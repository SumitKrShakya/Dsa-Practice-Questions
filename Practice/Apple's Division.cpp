#include <bits/stdc++.h>
using namespace std;
long long int ans = LLONG_MAX;
void call(vector<long long int> &vec, long long int i, vector<long long int> subset, long long int sum)
{
    if (i == vec.size())
    {
        if (subset.size() == 0 || subset.size() == vec.size())
            return;
        long long int temp = 0;
        for (long long int j = 0; j < subset.size(); j++)
        {
            temp += subset[j];
        }
        long long int minn = min(temp, sum);
        long long int maxx = max(temp, sum);
        long long int temp2;
        temp2 = maxx - minn;
        // cout<<ans<<" "<<temp<<" "<<sum<<" "<<abs(maxx-minn)<<endl;
        minn = min(temp, temp2);
        maxx = max(temp, temp2);
        ans = min(ans, maxx - minn);
        return;
    }
    call(vec, i + 1, subset, sum);
    subset.push_back(vec[i]);
    call(vec, i + 1, subset, sum);
}
int main()
{
    long long int n;
    cin >> n;
    vector<long long int> vec(n, 0), subset;
    long long int temp, sum = 0;
    for (long long int i = 0; i < n; i++)
    {
        cin >> vec[i];
        sum += vec[i];
    }
    if (n == 1)
    {
        cout << vec[0] << endl;
    }
    else
    {

        call(vec, 0, subset, sum);
        cout << ans;
    }
    // cout<<sum<<endl;

    return 0;
}