#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef vector<int>         vi;
typedef vector<long long>   vll;
typedef vector<string>      vs;
typedef vector<vi>          vvi;
typedef vector<vll>         vvll;
typedef vector<pair<int, int>>vpi;
typedef pair<int, int>      pii;
typedef map<int, int>        mpii;


// @formatter : off
#define ins             insert 
#define pb              push_back
#define all(c)          (c).begin(),(c).end()
#define rep(i, x , y)   for(ll i= x;i< y;++i)
#define rrep(i, x , y)  for(ll i= x ;i>= y;--i)


// <---------------------------- INPUT ------------------------------->
void inpt(vi& t) { for (auto& x : t) cin >> x; }
void inpt(vvi& t) { for (auto& x : t) inpt(x); }
void inpt(vll& t) { for (auto& x : t) cin >> x; }
void inpt(vvll& t) { for (auto& x : t) inpt(x); }


// <------------------------ DEBUGGING PRINT --------------------------->
void prnt() { cout << endl; }
void prnt(int& t) { cout << t << endl; }
void prnt(ll& t) { cout << t << endl; }
void prnt(string& t) { cout << t << endl; }
void prnt(char& t) { cout << t << endl; }
void prnt(double& t) { cout << t << endl; }
void prnt(pii& t) { cout << "{" << t.first << "," << t.second << "}" << endl; }
void prnt(vi& t) { for (auto& x : t)  cout << x << " ";   cout << endl; }
void prnt(vs& t) { for (auto& x : t)  cout << x << " ";   cout << endl; }
void prnt(vll& t) { for (auto& x : t)  cout << x << " ";   cout << endl; }
void prnt(vvi& t) { for (auto& x : t)  prnt(x);        cout << endl; }
void prnt(vvll& t) { for (auto& x : t)  prnt(x);        cout << endl; }
void prnt(vpi& t) { for (auto& x : t)  cout << "{" << x.first << "," << x.second << "}  ";   cout << endl; }
void prnt(mpii& t) { for (auto& x : t) { cout << x.first << " -> " << x.second << endl; }   cout << endl; }
void prnt(set<int>& t) { for (auto& x : t)  cout << x << " _ "; cout << endl; }


const int MOD = 1e9 + 7;
const int dx[4]{ 1,0,-1,0 }, dy[4]{ 0,1,0,-1 }; // for every grid problem!!
// @formatter : on


// <----------------------- SOLUTION ------------------------------------>
void solve() {

    // ll n, m;
    // cin >> n >> m;
    // vll v(n);
    // inpt(v);
    // vector<vector<ll>>q(m, vector<ll>(3, 0));
    // vll calc(n + 1, 0);
    // for (auto& x : q) {
    //     for (auto& y : x) {
    //         cin >> y;
    //     }
    // }

    // ll sum = 0;
    // for (auto x : v)sum += x;
    // for (auto x : q) {
    //     ll s = sum;
    //     ll l = x[0]-1;
    //     ll r = x[1];
    //     ll k = x[2];
    //     for (ll i = l;i < r;i++) {
    //         s -= v[i];
    //         s += k;
    //     }
    //     cout << (s % 2 ? "YES" : "NO") << endl;
    // }

    ll n, m;
    cin >> n >> m;
    vll v(n);
    inpt(v);

    vll pre(n + 1);
    ll sum = 0;
    for (int i = 0;i < n;i++) {
        pre[i] = sum;
        sum += v[i];
    }
    pre[n] = sum;


    vector<vector<ll>>q(m, vector<ll>(3, 0));
    vll calc(n + 1, 0);
    for (auto& x : q) {
        for (auto& y : x) {
            cin >> y;
        }
    }

    sum = 0;
    for (auto x : v)sum += x;
    for (auto x : q) {
        ll s = sum;
        ll l = x[0];
        ll r = x[1];
        ll k = x[2];

        ll cut = pre[r] -pre[l - 1];
        s -= cut;
        s += (k * (r - l + 1));
        
        cout << (s % 2 ? "YES" : "NO") << endl;
    }




















}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin >> t;
    for (int tt = 1;tt <= t;tt++) {
        // cout<< "Case #" << tt << ": ";
        solve();
    }

    return 0;
}
