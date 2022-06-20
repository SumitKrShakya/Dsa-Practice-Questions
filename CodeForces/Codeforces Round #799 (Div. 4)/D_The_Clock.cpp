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

void update(int &h,int &m,int &x){
    m+=x;
    int temp=0;
    if(m>=60) {
        temp=m;
        m=m%60;
        temp = temp/60;

        h+=temp;
        if(h>=24){
            temp = h;
            h=h%24; 
            temp = temp/24;
        }
    }

}

void solve(){
    
    
    int x;
    string s;
    cin>>s>>x;
    
    int h = (s[0]-'0')*10+(s[1]-'0');
    int m = (s[3]-'0')*10+(s[4]-'0');
    int ans=0;
    set<pair<int,int>>st;
    while(true){
        if(st.count({h,m}))break;
        st.insert({h,m});
        
        // if(h/10 < 0 || m/10<0){
        //     if(h/10 < 0  && m/10 < 0 ){
        //         int a,b,c,d;
        //         a = 0;
        //         b = h%10;
        //         c = 0;
        //         d = m%10;
        //         if(a==d && b==c)ans++;
        //     }else if(h/10 < 0){
        //         int a,b,c,d;
        //         a = 0;
        //         b = h%10;
        //         c = m/10;
        //         d = m%10;
        //         if(a==d && b==c)ans++;
        //     }else{
        //         int a,b,c,d;
        //         a = h/10;
        //         b = h%10;
        //         c = 0;
        //         d = m%10;
        //         if(a==d && b==c)ans++;
        //     }
        // }else{
            int a,b,c,d;
            a = h/10;
            b = h%10;
            c = m/10;
            d = m%10;
            if(a==d && b==c)ans++;
        // }




        update(h,m,x);
    }

    cout<<ans<<endl;


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
