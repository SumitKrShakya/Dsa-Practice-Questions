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
struct node{
    public:
        int val;
        node* left;
        node* right;
        node(int v){
            val=v;
            left=NULL;
            right=NULL;
        }
};
class tree{
    public:
        node*root;
        tree(vector<int>v){
            int i = 0;
            root = createTree(v,i);
        }
        node* createTree(vector<int>v, int &i){
            if(v[i]==-1) return NULL;
            node* n = new node(v[i]);
            i++;
            n->left = createTree(v,i);
            i++;
            n->right = createTree(v,i);
            return n;
        }
        void dfs(node*n){
            if(n==NULL)return ;
            cout<<n->val<<" ";
            dfs(n->left);
            dfs(n->right);
        }
        void print(){
            cout<< "Tree => ";
            dfs(root);
            cout<<endl;
        }
        tree* duplicateTree(vector<int>v){
            tree* t = new tree(v);
            return t;
        }
        node* dfsmirror(node* n){
            if(n==NULL)return NULL;
            auto l = n->left ;
            auto r = n->right; 
            n->right = dfsmirror(l);
            n->left  = dfsmirror(r);
            return n;
        }
        tree* mirror(vector<int>v){
            tree* t = duplicateTree(v);
            dfsmirror(t->root);
            return t;
        }
};

void solve(){
    int n;
    cin>>n;
    vi v(n);
    inpt(v);
    tree* Tree = new tree(v);
    cout<<".     ";
    Tree->print();

    tree * mirrorTree = Tree->mirror(v);
    cout<<"mirror";
    mirrorTree->print();   
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
