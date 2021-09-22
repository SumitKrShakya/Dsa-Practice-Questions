#include <bits/stdc++.h>

using namespace std;

map <char,int> t;

vector<int> find(int arr[], int n , int x )
{
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(arr[i]==x&&arr[i-1]!=x){
            ans.push_back(i);
        }
        if(arr[i]==x&&arr[i+1]!=x){
            ans.push_back(i);
        }
    }
    if(!ans.size()){
        ans.push_back(-1);
        ans.push_back(-1);
    }
    return ans;
}

int main() {
    int n,x;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int> ans=find(a,n,x);
    for(int i=0;i<2;i++){
        cout<<ans[i]<<" ";
    }

    return 0;
}