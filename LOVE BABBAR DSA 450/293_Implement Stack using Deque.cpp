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
struct node {
    int val;
    node* next;
    node* prev;
    node(){
        val=0;
        next = NULL;
        prev = NULL;
    }
    node(int v){
        val=v;
        next=NULL;
        prev=NULL;
    }
};

class dstack{
    public:
    node* front;
    node* back;
    int sz;
    dstack(){
        sz=0;
        front=NULL;
        back=NULL;
    }
    
    int push(int data){
        node* n = new node(data);
        if(front==NULL && back==NULL){
            front = n;
            back = n;
        }else{
            front->next = n;
            n->prev = front;
            front = n;
        }
        sz++;
        return front->val;
    }

    int pop(){
        if(sz==0){
            return -1;
        }
        node* del = front;
        front = front->prev;
        int popedElement = del->val;
        delete del;
        sz--;
        return popedElement;
    }

    int size(){
        return sz;
    }

    int top(){
        return front->val;
    }
    bool isEmpty(){
        return !sz;
    }
    
};



void solve(){
    int n;
    cin>>n;
    dstack st;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a;
        if(a==1){
            cin>>b;
        }
        switch (a){
            case 1:
                cout<<"push("<<b<<")"<<endl;
                cout<<st.push(b)<<endl;
                break;
            case 2:
                cout<<"pop()"<<endl;
                cout<<st.pop()<<endl;
                break;
            case 3:
                cout<<"size()"<<endl;
                cout<<st.size()<<endl;
                break;
            case 4:
                cout<<"top()"<<endl;
                cout<<st.top()<<endl;
                break;
            case 5:
                cout<<"isEmpty()"<<endl;
                cout<<st.isEmpty()<<endl;
                break;

            default:
                break;
        }
    }
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
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
