#include <bits/stdc++.h>
using namespace std;

typedef long long           ll;
typedef vector<int>         vi;
typedef vector<long long>   vll;
typedef vector<string>      vs;
typedef vector<vi>          vvi;
typedef vector<vll>         vvll;
typedef vector<pair<int,int>>vpi;
typedef pair<int, int>      pii;
typedef map<int,int>        mpii;


#define ins             insert 
#define pb              push_back
#define all(c)          (c).begin(),(c).end()
#define rep(i, x , y)   for(ll i= x;i< y;++i)
#define rrep(i, x , y)  for(ll i= x ;i>= y;--i)


// <---------------------------- INPUT ------------------------------->
void inpt(vi &t)    {for(auto &x:t) cin>>x; }
void inpt(vvi &t)   {for(auto &x:t) inpt(x);}
void inpt(vll &t)   {for(auto &x:t) cin>>x; }
void inpt(vvll &t)  {for(auto &x:t) inpt(x);}


// <------------------------ DEBUGGING PRINT --------------------------->
void prnt()             {cout<<endl;}
void prnt(int &t)       {cout<<t<<endl;}
void prnt(ll &t)        {cout<<t<<endl;}
void prnt(string &t)    {cout<<t<<endl;}
void prnt(char &t)      {cout<<t<<endl;}
void prnt(double &t)    {cout<<t<<endl;}
void prnt(pii &t)       {cout<<"{"<<t.first<<","<<t.second<<"}"<<endl;}
void prnt(vi &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vs &t)        {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vll &t)       {for(auto &x:t)  cout<<x<<" ";   cout<<endl;}
void prnt(vvi &t)       {for(auto &x:t)  prnt(x);        cout<<endl;}
void prnt(vvll &t)      {for(auto &x:t)  prnt(x);        cout<<endl;}
void prnt(vpi &t)       {for(auto &x:t)  cout<<"{"<<x.first<<","<<x.second<<"}  ";   cout<<endl;}
void prnt(mpii &t)      {for(auto &x:t)  {cout<<x.first<<" -> "<<x.second<<endl; }   cout<<endl;}
void prnt(set<int> &t)  {for(auto &x:t)  cout<<x<<" _ "; cout<<endl;}


const int MOD = 1e9+7;
const int dx[4]{1,0,-1,0},  dy[4]{0,1,0,-1}; // for every grid problem!!


// <----------------------- SOLUTION ------------------------------------>

// #include <bits/stdc++.h>
// using namespace std;
string ans;
bool display(string a[], int n)
{
    string s="";
    set<char>st;
    
    for (int i = 0; i < n; i++) {
        s+=a[i];
    }
    st.insert(s[0]);
    for(int i=1;i<s.length();i++){
        if(s[i-1] != s[i]){
            if(st.count(s[i])){
                return false;
            }
        }
        st.insert(s[i]);
    }
    
    ans=s;

    return true;
}
  
// Function to find the permutations
bool findPermutations(string a[], int n)
{
  
    sort(a, a + n);
  
    // cout << "Possible permutations are:\n";
    do {
        if(display(a, n)){
            return true;
        }
    } while (next_permutation(a, a + n));
    return false;

}
  
// Driver code
// int main()
// {
  
//     int a[] = { 10, 20, 30, 40 };
  
//     int n = sizeof(a) / sizeof(a[0]);
  
//     findPermutations(a, n);
  
//     return 0;
// }
void solve(){
    int n;
    cin>>n;
    string a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    
    

    
    // int a[] = { 10, 20, 30, 40 };
  
    // int n = sizeof(a) / sizeof(a[0]);
  
    if(findPermutations(a, n)){
        cout<<ans<<endl;
    }else{
        cout<<"IMPOSSIBLE"<<endl;
    }
  
    // cout<<    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
