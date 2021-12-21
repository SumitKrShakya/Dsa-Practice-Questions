#include <iostream>
using namespace std;
typedef long long ll;

int main() {
    ll t;
    cin>>t;
    while(t>0){
        ll n;
        cin>>n;
        for(ll i = 0;i<n;i++){
            cout<<(2*i)+1<<" ";
        }
        cout<<endl;
        t--;
    }
	return 0;
}