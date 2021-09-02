#include <bits/stdc++.h>

using namespace std;

#define int long long

int a,b,c,d;   //  All input variables.

int random_numbers(int x,int y){
    return x + (rand()% y);
}

void testcase_generator(){
    a = random_numbers(1,100000);
    b = random_numbers(1,100000);
    c = random_numbers(1,100000);
    d = random_numbers(1,100000);
//inputs                |   |
// of           (random number range)
//Code
}


void changParity(ll i,string &s){
    if(s[i]=='1'){
        s.replace(i,1,"0");
    }
    else{
        s.replace(i,1,"1");
    }
}

ll dist(string &s,ll n){
    ll dist = 0;
    for(ll i=1;i<n;i++){
        // if((s[i]=='0' and s[i-1]=='1') or (s[i]=='1' and s[i-1]=='0')){
        //     dist += 1;
        // }
        // else if((s[i]=='0' and s[i-1]=='0') or (s[i]=='1' and s[i-1]=='1')){
        //     dist += 2;
        // }
        if(s[i]==s[i-1]){
            dist += 2;
        }
        else{
            dist += 1;
        }
    }
    return dist;
}



int brute_code(int a,int b,int c,int d){
    int ans;

        ll n,k;
        //cin>>n>>k;

        string s;
        cin>>s;
        ll no;
        for(ll i=0;i<k;i++){
            cin>>no;
            changParity(no-1,s);
            ll ans = dist(s,n);

        }


    // Paste brute_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.
    return ans;
}
int optimised_code(int a,int b,int c,int d){
    int ans;
    // Paste optimised_code here.
    // Change input of this function according to input of your programme.
    // Remove all cin and cout statements.
    // Save final answer in ans.
    return ans;
}

void solve(){
    while(true){
        testcase_generator();
        int ans_brute = brute_code(a,b,c,d);
        int ans_optimised = optimised_code(a,b,c,d);
        if(ans_brute!=ans_optimised){
            cout << "Brute Answer = " << ans_brute << "     Optimised Answer = " << ans_optimised << endl;
        }
    }
}

int32_t main(){

     solve();

    return 0;
}
