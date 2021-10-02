#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
        int n;
        cin>>n;
        if(n%4==0){
            cout<<"YES"<<endl;
            int a[n/2],b[n/2];
            int p=0,q=0;
            for(int i=1;i<n;i+=4){
                a[p++]=i;
                a[p++]=i+3;
                b[q++]=i+1;
                b[q++]=i+2;
            }
            if(n>4){
                for(int i=1;i<n/2;i++){
                    if(i%2==0){
                        swap(a[i],a[i-1]);
                        swap(b[i],b[i-1]);
                    }
                }
            }
            for(int i=0;i<n/2;i++){
                cout<<a[i]<<" ";
            }cout<<endl;
            for(int i=0;i<n/2;i++){
                cout<<b[i]<<" ";
            }cout<<endl;




























        }else{
            cout<<"NO"<<endl;
        }



	}
	return 0;
}
