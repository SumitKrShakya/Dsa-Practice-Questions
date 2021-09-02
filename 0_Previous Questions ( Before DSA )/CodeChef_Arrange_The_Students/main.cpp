#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t!=0){
        int n,max1=0,count=0,total=0;
        cin>>n;
        string s;
        cin>>s;
        int length1=s.size();
        cout<<length1;
        for(int i=0;i<length1;i++)
        {
            if(s[i]=='1')
            {

                count++;
                if(count>max1)
                {
                    max1=count;
                }
            total++;

            }
            else
            {
              count=0;
            }


        }
        if(total>max1)
        {
            cout<<max1+1<<endl;
        }
        else{
            cout<<max1<<endl;
        }

    t--;
    }
     return 0;
}
