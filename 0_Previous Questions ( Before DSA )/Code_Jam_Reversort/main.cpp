#include <iostream>
#include<vector>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int l=1;l<t+1;l++){
        int n=0,element=0,total_cost=0;
        vector<int>listt;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>element;
            listt.push_back(element);
        }
        int i,j,minimum;
        for(i=0;i<n-1;i++){
            minimum=i;
            int cost=0;
            for(j=i;j<n;j++){
                if(listt[j]<listt[minimum]){
                    minimum=j;
                }
            }
            int left=i;
            cost=minimum-left+1;
            while(left<minimum){
                swap(listt[left],listt[minimum]);
                left++;
                minimum--;
            }
            total_cost+=cost;
        }
        cout<<"Case #"<<l<<": "<<total_cost<<endl;
    }
    return 0;
}
