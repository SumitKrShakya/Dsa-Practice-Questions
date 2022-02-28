#include<bits/stdc++.h>
#define tc() ll t; cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define endl '\n'

using namespace std;

typedef long long ll;
typedef double ld;

int cid = 0;
vector<string> ingrd;

class cstmr{
    public:
    int id;
    vector<string> likes;
    vector<string> dislike;

    cstmr(int id){
        this->id = id;
    }
    int szl(){
        return this->likes.size();
    }

    int szdl(){
        return this->dislike.size();
    }
};

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    
    freopen("d.txt", "r", stdin);
    freopen("dcopyOut.txt", "w", stdout);

    vector<string> liked;
    vector<string> disliked;
    set<string> pcklst;
    set<string> dpcklst;

    auto compare = [](cstmr lhs, cstmr rhs)
                {   
                    if(lhs.szdl()==rhs.szdl())  return lhs.szl()<rhs.szl();
                    return  lhs.szdl() <  rhs.szdl();
                };

    priority_queue<cstmr, vector<cstmr>, decltype(compare)> clistisd(compare);

    int c;
    cin>>c;
    while(c--){
        int l;
        cin>>l;
        cstmr* c = new cstmr(++cid);
        for(int i=0; i<l; i++){
            string s;
            cin>>s, liked.push_back(s), c->likes.pb(s);
        }
        int d;
        cin>>d;
        for(int i=0; i<d; i++){
            string s;
            cin>>s, disliked.pb(s), c->dislike.pb(s);
        }
        clistisd.push(*c);
    }

    while (!clistisd.empty())
    {
        cstmr curr = clistisd.top();

        bool like = true, dislike = true;
        for(auto ele : curr.likes){
            if(dpcklst.count(ele)){
                like = false;
                break;
            }
        }
        
        for(auto ele : curr.dislike){
            if(pcklst.count(ele)){
                dislike = false;
                break;
            }
        }

        if(like and dislike){
            for(auto ele : curr.likes){
                pcklst.insert(ele);
            }
            
            for(auto ele : curr.dislike){
                dpcklst.insert(ele);
            }
        }
        clistisd.pop();
    }

    for(auto it = pcklst.begin(); it!=pcklst.end(); it++){
        ingrd.pb(*it);
    }

    cout<<ingrd.size()<<" ";

    for(auto ele : ingrd){
        cout<<ele<<" ";
    }
    cout<<endl;

    return 0;
}