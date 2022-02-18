#include <bits/stdc++.h>
#include <fstream>

using namespace std;

int main() {
    string s;
    int n;
    cin>>n;
    cout<<"vector<string> vector_input{";
    int temp=n;
    int tempnum;
    // temp*=2;
    // vector<string> vect{"2", "cheese","peppers","0", "1", "basil","1", "pineapple","2", "mushrooms","tomatoes","1", "basil"};
    while(temp--){
        cin>>tempnum;
        cout<<"\""<<tempnum<<"\", ";
        while(tempnum--){
            cin>>s;
            cout<<"\"";
            cout<<s;
            cout<<"\"";
            if(temp==0&&tempnum==0){

            }else{
                cout<<",";
            }
        }
    }
    
    cout<<"};";
    return 0;
}