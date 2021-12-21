#include<bits/stdc++.h>

using namespace std;
long long int i=0;
void move(int n, char src, char helper, char dest){
    if(n==0){
        return;
    }
    move(n-1,src,dest,helper);
    cout<< "Shift disk "<<n<<" from "<<src<<" to "<<dest<<endl;
    i++;
    move(n-1,helper,src,dest);
}

int main(){
    int n;
    cin>>n;
    move(n,'A','B','c');
    cout<<"Total no of moves = "<<i<<endl;
    return 0;
}