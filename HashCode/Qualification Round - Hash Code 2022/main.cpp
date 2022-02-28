#include<bits/stdc++.h>
#define tc() ll t; cin>>t;while(t--)
#define pb push_back
#define vi vector<int>
#define ii pair<int, int>
#define vii vector<ii>
#define endl '\n'
#define mod 10'000'000

using namespace std;
using ll = long long;
using ld = double;










// map<pair<string, int> , Contributer> working, notWorking;
map<pair<string, int> , Project> running, notTaken, dontTake;





class Contributer{
    public:
    string name;
    vector<pair<string, int>> skill;
    bool working = false;
    Contributer(){

    }
};

class Project{
    public:
    string name;
    int days, score, bestbefore, roles;
    vector<pair<string, int>> skill;

    Project(){

    }
};
vector<Contributer*>allContibuter;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("speed.in", "r", stdin);
    // freopen("speed.out", "w", stdout);


    auto compare = [](Project lhs, Project rhs)
                {   
                    if(lhs.days==rhs.days) return lhs.score < rhs.score;

                    return lhs.days < rhs.days;
                };

    // priority_queue<customer, vector<customer>, decltype(compare)> clist(compare);
    priority_queue<Project, vector<Project>, decltype(compare)> projj(compare);
    

    int c, p;
    cin>>c>>p;
    for(int i=0; i<c; i++)
    {
        string cname;
        int n;  // no of skills of contri
        cin>>cname>>n;
        Contributer conti;
        conti.name = cname;
        for(int i=0; i<n; i++){
            string skillname;
            int skillLev;
            cin>>skillname>>skillLev;
            conti.skill.pb({skillname, skillLev});
            // notWorking[{skillname, skillLev}] = conti;
        }
        Contributer* temp = &conti;
        allContibuter.push_back(temp);        
    }
     
    

    
    int pp = p;

    while(pp--){
        Project proj;
        string pname;
        int day, scr, bst, rol;
        cin>>pname>>day>>scr>>bst>>rol;
        proj.name = pname, proj.days = day, proj.score = scr, proj.bestbefore = bst, proj.roles = rol;
        for(int i=0; i<rol; i++){
            string sname;
            int slev;
            cin>>sname>>slev;
            proj.skill.pb({sname, slev});
        }
    }


    
    for(int day=0; day<INT_MAX; day++){
        while (!projj.empty()) {
            // Project currp = projj.top();
            // bool cava = true;
            // vector<Contributer> selected;
            // for(auto ele : currp.skill){
            //     string cskill = ele.first;
            //     int slel = ele.second;
            //     for(auto ele1 : notWorking){
            //         if(ele->first.first==cskill and ele->first.second >= slel and ele->second.working==false){
            //             selected.pb(ele->second);
            //         }
            //     }
            // }

            // if(currp.skill.size()==selected.size()){
            //     for(auto ele : selected){
            //         for(auto ele1 : ele.skill)
            //         working[{ele.name, ele1.second}] = ele, ele.working = true;
            //     }
            // }

            Project currp = projj.top();
            bool cava = true;
            vector<Contributer*> selectedselected;
            for(auto skillss: currp.skill){
                vector<Contributer*> selected;
                for(int i=0;i<allContibuter.size();i++){
                    for(auto contibuterskill : allContibuter[i]->skill){
                        if(contibuterskill.first==skillss.first && contibuterskill.second==skillss.second){
                            selected.push_back(allContibuter[i]);
                        }
                    }
                }
                if(selected.size()==0){
                    cava=false;
                    break;
                }else{
                    selectedselected.push_back(selected[0]);
                }
            }
            if(cava){
                for(auto cust : selectedselected){
                    cust->working=true;
                    
                    allContibuter.erase(cust,1);
                }
            }

            projj.pop();
        }
        
    }






    return 0;
}