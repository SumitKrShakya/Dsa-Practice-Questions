/*#include <iostream>

using namespace std;

bool left(int x,int y,int arr[6][6]){
    if(x==0){
        return false;
    }else{
        if(arr[x-1][y]==0){
            return true;
        }return false;
    }
}
bool right(int x,int y,int arr[6][6]){
    if(y==5){
        return false;
    }else{
        if(arr[x+1][y]==0){
            return true;
        }return false;
    }
}bool up(int x,int y,int arr[6][6]){
    if(y==0){
        return false;
    }else{
        if(arr[x][y-1]==0){
            return true;
        }return false;
    }
}bool down(int x,int y,int arr[6][6]){
    if(y==5){
        return false;
    }else{
        if(arr[x][y+1]==0){
            return true;
        }return false;
    }
}


int main()
{
    cout << "Can You Exit The Maze" << endl;
    int arr[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
            cin>>arr[i][j];
        }
    }






    while(x=5&&y=5){

    }

    return 0;
}*/

#include <bits/stdc++.h>
using namespace std;




bool vis[6][6];


bool maze(vector<vector<int>> &v,int sx,int sy,int dx,int dy,int r,int c){
    if(sx<0 or sy<0 or sx>=r or sy>=c or v[sx][sy]==1 or vis[sx][sy]==true){
        return false;
    }
    if(sx==dx and sy==dy){
        return true;
    }
    vis[sx][sy]=true;
    // backtracking
    // right
    if(maze(v,sx,sy+1,dx,dy,r,c)){
        return true;
    }
    // Left
    if(maze(v,sx,sy-1,dx,dy,r,c)){
        return true;
    }
    // down
    if(maze(v,sx+1,sy,dx,dy,r,c)){
        return true;
    }
    // up
    if(maze(v,sx-1,sy,dx,dy,r,c)){
        return true;
    }
    vis[sx][sy]=false;
    return false;
}


int main(){
    int r=6,c=6;
    vector<vector<int>> v(r,vector<int>(c));


    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>v[i][j];
        }
    }


    if(maze(v,0,0,r-1,c-1,r,c)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }


    return 0;
}




