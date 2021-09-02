#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

vector <ll> prime(){

    vector <ll> vec(100000000,0);

    for(int i=3;i<=100000000;i+=2){
        vec[i]=1;
    }

    for(int i=3;i<=100000000;i+=2){
        if(vec[i]==1){
            for(int j=i*i;j<=100000000;j+=i){
                vec[j]=0;
            }
        }
    }

    vec[0]=0;
    vec[1]=0;
    vec[2]=1;

    return vec;
}

int main(){

	vector<ll>vec=prime();
	int counti=1;
	cout<<2<<endl;
	for(int i=3;i<=100000000;i+=2){
        if(vec[i]==1){
            counti++;
            if(counti==100){
                cout<<i<<endl;
            }
        }
	}

}
