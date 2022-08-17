// #include <bits/stdc++.h>
// using namespace std;

// typedef long long           ll;
// typedef vector<int>         vi;
// typedef vector<long long>   vll;
// typedef vector<string>      vs;
// typedef vector<vi>          vvi;
// typedef vector<vll>         vvll;
// typedef vector<pair<int,int>>vpi;
// typedef pair<int, int>      pii;
// typedef map<int,int>        mpii;


// #define ins             insert 
// #define pb              push_back
// #define all(c)          (c).begin(),(c).end()
// #define rep(i, x , y)   for(ll i= x;i< y;++i)
// #define rrep(i, x , y)  for(ll i= x ;i>= y;--i)


// // <---------------------------- INPUT ------------------------------->
// void inpt(vi &t)    {for(auto &x:t) cin>>x; }
// void inpt(vvi &t)   {for(auto &x:t) inpt(x);}
// void inpt(vll &t)   {for(auto &x:t) cin>>x; }
// void inpt(vvll &t)  {for(auto &x:t) inpt(x);}


// // <------------------------ DEBUGGING PRINT --------------------------->
// void prnt()             {cout<<endl;}
// void prnt(int &t)       {cout<<t<<endl;}
// void prnt(ll &t)        {cout<<t<<endl;}
// void prnt(string &t)    {cout<<t<<endl;}
// void prnt(char &t)      {cout<<t<<endl;}
// void prnt(double &t)    {cout<<t<<endl;}
// void prnt(pii &t)       {cout<<"{"<<t.first<<","<<t.second<<"}"<<endl;}
// void prnt(vi &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vs &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vll &t)       {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
// void prnt(vvi &t)       {for(auto &x:t)  prnt(x);        cout<<endl;}
// void prnt(vvll &t)      {for(auto &x:t)  prnt(x);        cout<<endl;}
// void prnt(vpi &t)       {for(auto &x:t)  cout<<"{"<<x.first<<","<<x.second<<"}  ";   cout<<endl;}
// void prnt(mpii &t)      {for(auto &x:t)  {cout<<x.first<<" -> "<<x.second<<endl; }   cout<<endl;}
// void prnt(set<int> &t)  {for(auto &x:t)  cout<<x<<" _ "; cout<<endl;}


// const int MOD = 1e9+7;
// const int dx[4]{1,0,-1,0},  dy[4]{0,1,0,-1}; // for every grid problem!!


// // <----------------------- SOLUTION ------------------------------------>
// void solve(){
    
    
    
    
//     int n;
//     cin>>n;
//     vi vec(n);
//     inpt(vec);
//     vi c(3,0);

//     for(auto x: vec){
//         if(x%10==0 || x%10==5){
//             c[0]++;
//         }else{
//             c[2]++;
//         }
//     }
    
//     // if(c[0]!=0 && c[2]!=0) {
//     //     cout<<"No"<<endl;
//     //     return;
//     // }

    

//     if(c[0]==n){
//         for(auto &x: vec){
//             if(x%10==5){
//                 x+=5;
//             }
//         }
//         int abc = vec[0];
//         for(auto x:vec){
//             if(x!=abc){
//                 cout<<"No"<<endl;
//                 return;
//             }
//         }
//         cout<<"Yes"<<endl;
//         return;
//     }

//     for(auto &x:vec){
//         while((x%10)!=2){
//             x+=(x%10);
//         }
//     }

//     sort(all(vec));

    
    
//     for(int i=0;i<n-1;i++){
//         if((vec[i+1]-vec[i])%20!=0){
//             cout<<"No"<<endl;
//             return;
//         }
//     }
//     cout<<"Yes"<<endl;
    
    
//     // int n;
//     // cin>>n;
//     // vi vec(n);
//     // inpt(vec);

//     // bool ok=0;






    
    
    
    
    
    
    
    
    
    
    
    
// }


// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL); cout.tie(NULL);

//     int t;
//     cin>>t;
//     for(int tt=1;tt<=t;tt++){
//         // cout<< "Case #" << tt << ": ";
//         solve();
//     }
    
//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef vector<pair<int, int>> vpi;
typedef pair<int, int> pii;
typedef map<int, int> mpii;

#define ins insert
#define pb push_back
#define all(c) (c).begin(), (c).end()
#define rep(i, x, y) for (ll i = x; i < y; ++i)
#define rrep(i, x, y) for (ll i = x; i >= y; --i)

// <---------------------------- INPUT ------------------------------->
void inpt(vi &t)
{
    for (auto &x : t)
        cin >> x;
}
void inpt(vvi &t)
{
    for (auto &x : t)
        inpt(x);
}
void inpt(vll &t)
{
    for (auto &x : t)
        cin >> x;
}
void inpt(vvll &t)
{
    for (auto &x : t)
        inpt(x);
}

// <------------------------ DEBUGGING PRINT --------------------------->
void prnt() { cout << endl; }
void prnt(int &t) { cout << t << endl; }
void prnt(ll &t) { cout << t << endl; }
void prnt(string &t) { cout << t << endl; }
void prnt(char &t) { cout << t << endl; }
void prnt(double &t) { cout << t << endl; }
void prnt(pii &t) { cout << "{" << t.first << "," << t.second << "}" << endl; }
void prnt(vi &t)
{
    for (auto &x : t)
        cout << x << " ";
    cout << endl;
}
void prnt(vs &t)
{
    for (auto &x : t)
        cout << x << " ";
    cout << endl;
}
void prnt(vll &t)
{
    for (auto &x : t)
        cout << x << " ";
    cout << endl;
}
void prnt(vvi &t)
{
    for (auto &x : t)
        prnt(x);
    cout << endl;
}
void prnt(vvll &t)
{
    for (auto &x : t)
        prnt(x);
    cout << endl;
}
void prnt(vpi &t)
{
    for (auto &x : t)
        cout << "{" << x.first << "," << x.second << "}  ";
    cout << endl;
}
void prnt(mpii &t)
{
    for (auto &x : t)
    {
        cout << x.first << " -> " << x.second << endl;
    }
    cout << endl;
}
void prnt(set<int> &t)
{
    for (auto &x : t)
        cout << x << " _ ";
    cout << endl;
}

const int MOD = 1e9 + 7;
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1}; // for every grid problem!!

// <----------------------- SOLUTION ------------------------------------>
void solve()
{

    int n;
    cin >> n;
    vi vec(n);
    inpt(vec);
    int cnt = 0;
    
    // for(auto x:vec){
    //     // cin>>x;
    //     if(x%10 == 5 || x%10 == 0){
    //         cnt=1;
    //     }
    // }

    // for (auto x : vec)
    // {
    //     if (x % 10 == 0 || x % 10 == 5)
    //     {
    //         c[0]++;
    //     }
    //     else
    //     {
    //         c[2]++;
    //     }
    // }
    for (auto x : vec){
        if (x % 10 == 0 || x % 10 == 5){
            cnt++;
        }
    }
    

    // if(c[0]!=0 && c[2]!=0) {
    //     cout<<"No"<<endl;
    //     return;
    // }
    
    if (cnt)
    {
        // cout<<"here"<<endl;
        for (auto &x : vec)
        {
            if (x % 10 == 5)
            {
                x += 5;
            }
        }
        int abc = vec[0];
        for (auto x : vec)
        {
            if (x != abc)
            {
                cout << "No" << endl;
                return;
            }
        }
        cout << "Yes" << endl;
        return;
    }

    for (auto &x : vec)
    {
        while ((x % 10) != 2)
        {
            x += (x % 10);
        }
    }

    sort(all(vec));

    for (int i = 0; i < n - 1; i++)
    {
        if ((vec[i + 1] - vec[i]) % 20 != 0)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;

    // int n;
    // cin>>n;
    // vi vec(n);
    // inpt(vec);

    // bool ok=0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        // cout<< "Case #" << tt << ": ";
        solve();
    }

    return 0;
}
