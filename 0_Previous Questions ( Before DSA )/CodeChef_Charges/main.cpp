#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    cin>>t;
    while(t--){
        ll n,k,counti=0;
        string s;
        cin>>n>>k;
        cin>>s;
        if(n==1){
            char l='0';
            for(ll p=0;p<k;p++){
                cout<<l<<endl;
            }
        }else{
            for(ll i=0;i<n-1;i++){
                if(s[i]==s[i+1]){
                    counti+=2;
                }else{
                    counti++;
                }
            }
            for(ll i=0;i<k;i++){
                ll ko;
                cin>>ko;
                ko--;
                if(ko==0){
                    if(s[ko]==s[ko+1]){
                        counti--;
                    }else{
                        counti++;
                    }
                }else if(ko==n-1){
                    if(s[ko]==s[ko-1]){
                        counti--;
                    }else{
                        counti++;
                    }
                }else{
                    if(s[ko]==s[ko+1]){
                        counti--;
                    }else{
                        counti++;
                    }
                    if(s[ko]==s[ko-1]){
                        counti--;
                    }else{
                        counti++;
                    }
                }
                if(s[ko]=='0'){
                    s[ko]='1';
                }else{
                    s[ko]='0';
                }

                // s[ko]=s[ko]
                //s[ko]=(s[ko]=='0'?'1':'0');
                cout<<counti<<endl;
            }
        }
    }
    return 0;
}
