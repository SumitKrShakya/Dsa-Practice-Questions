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
struct node
    {
        int val;
        node * prev;
        node * next;
        node(int data){
            val=data;
        }
    };
int size = 0;

class LinkList
{
    
    

    public:
    node * mid = NULL;
    node * top = NULL;
    int size = 0;

    int push(int data){
        if(size==0){
            node * dummy = new node(-1);
            node * ele = new node(data);
            dummy->next = ele;
            ele->prev=dummy;
            mid=ele;
            size++;
            return ele->val;
        }

        node * ele = new node(data);
        ele -> prev = top;
        top -> next = ele;
        if(size % 2 == 1){
            mid = mid->next;
        }
        size++;
        top = ele;
        return ele->val;
    }


    int pop(){
        node * temp = top;
        temp = temp -> prev;
        temp -> next = NULL;
        delete top;
        top = temp;

        if(size % 2 == 1){
            mid = mid->prev;
        }
        size--;
        return top->val;
    }

    int top(){
        return top->val;
    }

    int middle(){
        return mid->val;
    }
};



void solve(){
    
    LinkList first;
    cout<<"push 1 ->"<< first.push(1)<<endl;
    cout<<""<< first.push(2)<<endl;
    cout<<""<< first.push(3)<<endl;
    cout<<""<< first.push(4)<<endl;
    cout<<"mid "<< first.middle()  <<endl;  
    cout<<" pop "<< first.pop()  <<endl;  
    cout<<" mid"<< first.middle()  <<endl;  


    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);

    // int t;
    // cin>>t;
    // for(int tt=1;tt<=t;tt++){
        // cout<< "Case #" << tt << ": ";
        solve();
    // }
    
    return 0;
}
