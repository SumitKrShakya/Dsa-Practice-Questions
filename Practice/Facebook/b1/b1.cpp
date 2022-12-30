////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
//                               Coded by Shivam Gupta :)                             //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////
#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define all(v) v.begin(),v.end()
// #define mod 1e9+7
#define ip(a) for(int i=0;i<a.size();i++){ cin >> a[i];}
#define op(a) for(int i=0;i<a.size();i++){ cout <<  a[i] << " ";}
#define setp(n,val) cout << setprecision(n) << fixed << val
#define pb push_back
#define Fast_chalane_ke_liye ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define lb lower_bound
#define ub upper_bound
#define sz(x) (int)(x).size()
#define f1 first
#define sec second
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x >= 0; x--)
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef pair<int,int> pii;
typedef vector< pair<int,int> > vpii;
typedef map<int,int> mii;
typedef unordered_map<ll,ll> omll;
typedef unordered_map<int,int> omii;
// To change the value decimal places
// easy way 
//double rounded = (int)(d * 1000.0)/1000.0; 1000.0 indicates no of decimal places 
float roundoff(float value, unsigned char prec)
{float pow_10 = pow(10.0f, (float)prec);
return round(value * pow_10) / pow_10;}
ll ans=0;
const int mod = 1e9+7;

void solver(){

    int n;
    cin>>n;

    // vvi mat(n,vi(n,0));
    vvi v,u;
    for(int i =0;i<n;i++){
        int a,b;
        cin>>a>>b;
        v.pb({a,b});
    }
    int q;
    cin>>q;
    for(int i =0;i<q;i++ ){
        int x,y;
        cin>>x>>y;
        // mat[x][y]=2;
        u.pb({x,y});
    }
    // for(auto x:mat){
    //     for(auto y:x){
    //         cout<<y<<" ";
    //     }
    //     cout<<endl;
    // }
    // ll sum =0;
    for(int i=0;i<q;i++){
        int x1 = u[i][0];
        int y1 = u[i][1];
        for(int j =0;j<n;j++){
            int x2 = v[j][0];
            int y2 = v[j][1];
            ans = (ans%mod + (((x2-x1)*1LL*(x2-x1))%mod + ((y2-y1)*1LL*(y2-y1))%mod)%mod)%mod;
        }
    }

    // cout<<sum<<endl;
    



}


int main(){
  
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        // freopen("validt.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif   

    Fast_chalane_ke_liye;
    ll t;
    cin>>t;
    loop(x,t){
        solver();
        cout<<"Case #"<<x+1<<": "<<ans<<endl;
        ans=0;
    }
    return 0;
}

