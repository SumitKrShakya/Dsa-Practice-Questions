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
void solve(){
    
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v (n, vector<int>(m,0));

    inpt(v);
    // prnt(v);
    int flag= 0;
    int s1=1,s2=1;
    int cnt=0;
    int a=-1,b=-1;
    for(int i=0;i<n;i++){
        for(int j=1;j<m;j++){
            if(v[i][j] < v[i][j-1]){
                vector<int>temp = v[i];
                sort(temp.begin(),temp.end());
                
                
                for(int k=0;k<m;k++){
                    // cout<<"check "<<v[i][k]<<"   "<<temp[k]<<endl;
                    if(v[i][k]!=temp[k]){
                        
                        cnt++;
                        if(a==-1){
                            a=k;
                        }else if(b==-1){
                            b=k;
                        }else {
                            flag=1;
                            break;
                        }
                    }
                }
                flag=1;
                // cout<<endl;
                if(flag){break;}
            }
            
        }
        if(flag){break;}
    }
    if(cnt==3){
        cout<<-1<<endl;
    }else{
        for(int i=0;i<n;i++){
            swap(v[i][a],v[i][b]);
        }
        int flag1=0;
        for(int i=0;i<n;i++){
            for(int j=1;j<m;j++){
                if(v[i][j] < v[i][j-1]){
                    flag1=1;
                    break;
                }
            }
            if(flag1){break;}
        }
        if(flag1){
            cout<<-1<<endl;
        }else{
            cout<<(a==-1?1:a+1)<<" "<<(b==-1?1:b+1)<<endl;
        }
    }
    // cout<<"cnt "<<cnt<<endl;


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    for(int tt=1;tt<=t;tt++){
        // cout<< "Case #" << tt << ": ";
        solve();
    }
    
    return 0;
}
