#include <bits/stdc++.h>

using namespace std;

#define int long long

#define Shristi main

#define all(x) (x).begin(),(x).end()

#define vec_p vector<pair<int,int>

#define v vector<int>

typedef long double ld;

//typedef long long ll;

struct testcase{

    int n,m,a,k;

};

int randomNumber(int a,int b){

    return a + (rand() % b);

}

testcase generateTestCase(){

    testcase randomTest;

    randomTest.n = randomNumber(1,1000);

    randomTest.m = randomNumber(1,1000);

    randomTest.k = randomNumber(0,1000000000);

    randomTest.a = randomNumber(0,1000000000);

    return randomTest;
}

int bruteForce(testcase T){

    int ret;

    // Brute

        int n,m,k,temp,a;
        cin>>n>>m>>k;  // n-rows m-colm
        int arr[n][m];
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a;
                arr[i][j]=a;
                if(arr[i][j]>=k){
                    ans++;
                }
            }
        }
        for(int l=2;l<=min(n,m);l++)
        {
            int temp=max(n,m);
            for(int i=0;i<n-l+1;i++)
            {
                for(int j=0;j<m-l+1;j++)
                {
                    if(j==temp){
                        ans=ans+m-l+1-j;
                        break;
                    }
                    int sum = 0;
                    for(int p=i;p<i+l;p++){
                        for(int q=j;q<j+l;q++){
                            sum+=arr[p][q];
                        }
                    }
                    int average = sum/(l*l);
                    if(average>=k){
                        //ans++;
                        temp=j;
                        ans=ans+m-l+1-j;
                        break;
                    }
                }
            }
        }
        ret=ans;


    return ret;

}

int optimizedSolution(testcase T){

    int ret;

    // Kartik Bhaiya

        int n,m;
        ld k;
        cin>>n>>m>>k;  // n-rows m-colm
        ld ans=0;

        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>arr[i][j];
                if(arr[i][j]>=k){
                    ans++;
                }
            }
        }

        vector<vector<int>> vec( n+1 , vector<int> (m+1, 0));

        for(int i = 1; i < vec.size(); i++)
        {
            for(int j = 1; j < vec[0].size(); j++)
            {
                vec[i][j] = arr[i-1][j-1] + vec[i-1][j]+vec[i][j-1] - vec[i-1][j-1];

            }
        }

        for(ld l=2;l<=min(n,m);l++){
            for(ld i = 1; i < vec.size(); i++)
            {
                int flag=0;
                for(ld j = 1; j < vec[0].size(); j++)
                {
                    ld sum = INT_MIN;
                    if(i-l>=0 and j-l>=0){
                        if(flag==0){
                            sum = vec[i][j] - vec[i-l][j] - vec[i][j-l] + vec[i-l][j-l];
                            ld average = sum/(l*l);
                            // cout<<sum<<endl;
                            if(average>=k){
                                ans++;
                                flag =1;
                            }
                        }
                        else{
                            ans++;
                        }
                    }
                }
            }
        }



        ret=ans;

    return ret;

}



void debugger(){

    testcase random = generateTestCase();

    int ans1 = bruteForce(random);

    int ans2 = optimizedSolution(random);

    if(ans1 != ans2) {

        cout<<random.a;

    }

}


int32_t Shristi(){
    int t=1;

    while(true){
        debugger();
    }



    return 0;

}
