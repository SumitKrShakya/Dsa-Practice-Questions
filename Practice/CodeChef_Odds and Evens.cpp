#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int x,y;
        cin>>x>>y;
        cout<<(((x+y)%2==0)?"Bob\n":"Alice\n");
	}
	return 0;
}
