#include<bits/stdc++.h>
using namespace std;
int num=0;
int change(string st,string si){
    if(st==si){return 0;}
    char first=si[0];
    cout<<si<<endl;
    cout<<first<<endl;
    string last=si.substr(1);
    cout<<last<<endl;
    cout<<last+first<<endl;
    cout<<"     "<<num<<endl;
    if(last+first==st){
        return num;
    }else if (num>st.size()){
        return -1;
    }else{
        num++;
        change(st,last+first);
    }
}

int main()
{

    int n;
    cin>>n;
    string arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sizee=arr[0].size(),flag=0,min_sum1;
    for(int i=0;i<n;i++){
        int sum=0,min_sum=10000;
        for(int j=0;j<n;j++){
            if(arr[i]!=arr[j]){
                int x=change(arr[i],arr[j]);
                cout<<"here"<<endl;
                num=0;
                if(x==-1){
                    flag=1;
                    break;
                }else{
                    sum+=x;
                    cout<<sum<<"sum"<<endl;
                }
            }
        }if(flag==1){
            break;
        }
        sum<min_sum?min_sum=sum:sum;
        min_sum1=min_sum;
    }
    if(flag==1){
        cout<<"-1";
    }else{
        cout<<min_sum1;
    }
    return 0;
}
