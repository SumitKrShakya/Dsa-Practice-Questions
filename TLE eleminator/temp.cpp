#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using ld = long double;

using vi = vector<int>;
using vll = vector<ll>;
#define loop(i, a, b) for (ll i = a; i <= b; i++)
#define pb push_back
#define sz(x) int((x).size())
#define all(x) begin(x), end(x)
#define endl '\n'


void solve() {
    ll n, x;
    cin >> n >> x;

    vll price(n);
    loop(i, 0, n - 1) {
        cin >> price[i];
    }

    vll pages(n);
    loop(i, 0, n - 1) {
        cin >> pages[i];
    }
    vector<vector<ll>> dp(n+1, vector<ll> (x+1, 0));
    for (ll i = 1; i <= n; i++) {
        for (ll j = 0; j <= x; j++) {
            if (j - price[i - 1] >= 0) {
                dp[i][j] = max(dp[i - 1][j], pages[i - 1] + dp[i - 1][j - price[i - 1]]);
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }
    cout << dp[n][x] << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int tc = 1;
    // cin >> tc;
    for (int t = 1; t <= tc; t++) {
        solve();
    }

    return 0;
}