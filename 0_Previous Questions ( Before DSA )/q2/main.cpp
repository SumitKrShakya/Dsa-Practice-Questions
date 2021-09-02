#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    srand(time(0));
    int n=50,m=200;//28,117
    int p=219;
    int points=0,flag=0;
    int counti=0,arr[n][m],next_arr[n][m],perv_arr[n][m];

    //create initial 2D arrays to zero.
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=next_arr[i][j]=0;
        }
    }

    //Creates random initial lives.
    for(int i=(n/2)-3;i<(n/2)+3;i++){
        for(int j=(m/2)-3;j<(m/2)+3;j++){
            arr[i][j]=rand()%2;
        }
    }
    //arr[5][5]=arr[5][6]=arr[5][7]=1;
    //Starts game.
    while(true){

        //Clear system and print screen.
        system("CLS");

        flag=0;

        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==1){
                    cout<<" ";
                    flag=1;
                }else{

                    cout<<(char)p;
                }
            }
            cout<<endl;
        }
        cout<<"Points : "<<points++;
        if (flag==0){
            break;
        }

        //Calculate Next screen.
        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                counti=0;
                if(i==0||i==n-1||j==0||j==m-1){
                    arr[i][j]==0;
                }else{
                    if(arr[i+1][j]){
                        counti++;
                    }if(arr[i-1][j]){
                    counti++;
                    }if(arr[i][j+1]){
                        counti++;
                    }if(arr[i][j-1]){
                        counti++;
                    }if(arr[i+1][j-1]){
                        counti++;
                    }if(arr[i+1][j+1]){
                        counti++;
                    }if(arr[i-1][j-1]){
                        counti++;
                    }if(arr[i-1][j+1]){
                        counti++;
                    }
                }
                if(counti==3){
                    next_arr[i][j]=1;
                }else if(counti==2){
                    if(arr[i][j]==1){
                        next_arr[i][j]=1;
                    }
                }else{
                    next_arr[i][j]=0;
                }
            }
        }


        if(points>3){
            flag=0;
            if(points>3){
                for(int i=0; i<n; i++){
                    for(int j=0;j<m;j++){
                        if(perv_arr[i][j]!=next_arr[i][j]){
                            flag=1;
                        }
                    }
                }
            }
            if(flag==0){
                break;
            }
        }


        Sleep(100);
        flag=0;
        for(int i=0; i<n; i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]!=next_arr[i][j]){
                    flag=1;
                }
                if(points>2){
                    perv_arr[i][j]=arr[i][j];
                }
                arr[i][j]=next_arr[i][j];
            }
        }

        if(flag==0){
            break;
        }


//cout<<"++++++++++++++++++++++++++++++++++++++++++++"<<endl;
//        for(int i=0; i<n; i++){
//            for(int j=0;j<m;j++){
//                if(arr[i][j]==1){
//                    cout<<(char)p;
//                    flag=1;
//                }else{
//                    cout<<" ";
//
//                }
//            }
//            cout<<endl;
//        }
//            cout<<"----------------------------------------------------"<<endl;
//        for(int i=0; i<n; i++){
//            for(int j=0;j<m;j++){
//                if(arr[i][j]==1){
//                    cout<<(char)p;
//                    flag=1;
//                }else{
//                    cout<<" ";
//
//                }
//            }
//            cout<<endl;
//        }
//
//
//
//Sleep(1000);
//
//
//
//














    }
    return 0;
}
