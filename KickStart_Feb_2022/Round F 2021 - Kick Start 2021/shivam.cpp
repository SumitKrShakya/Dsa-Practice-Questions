#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define TC(t) while (t--)
#define loop(x, n) for(int x = 0; x < n; ++ x)
#define reverseloop(x, n) for(int x = n-1; x >= 0; x--)

int main(){
    int t;
    cin>>t;
    loop(x,t){
        // int x=0;
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int>v1;
        vector<int>v2;
        loop(i,n){
            if(s[i]=='0'){
                v1.push_back(i);
            }
            if(s[i]=='1'){
                v2.push_back(i);
            }
        }
        // int l1=v1.size();
        // int l2=v2.size();
        int m = max(v1.size(),v2.size());
        int mn = min(v1.size(),v2.size());
        int sum=0;
        int count1,count2;
        loop(i,m){
            loop(j,mn){
                count1 = abs((v1[i]-v2[j]));
                count2 = abs((v1[i]-v2[j+1]));
                cout<<count2<<endl;
                sum=sum + min(count1,count2);
            }
        }   
        cout<<"Case #"<<x+1<<": "<<sum<<endl;
        
    }
    return 0;
}