#include<bits/stdc++.h>
#include<Windows.h>
#include <iostream>
#include<string>
#include<fstream>
#include <cstdlib>
#include <conio.h>

using namespace std;

string signup(),login(),menu();
void headding(){
cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM        :oyddddddddyo:        "<<endl;
cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM     :yms/.        ./smy:     "<<endl;
cout<<"MMMNo:-..-+NMMMMMMNo:..-:sNo:-...-:+mMMM+:...-/mMMMNy+:..-/oo+dMMmo/:-..-:omMMMMMms/-..-/smmmMMMMMMM   :mh:                :hm:   "<<endl;
cout<<"MMMd-      :MMMMMM:      /m-       .hMMNo.    /mMMo`           sMs`       -dMMMy-            +MMMMMM  yN:       `.-:/+syhy   :Ny  "<<endl;
cout<<"MMMMM/      +MMMM+      +MMM:     -MMMMMMm   :MMMo     `dNd+`  `MMm`     :MMMN:    `+ss/`     dMMMMM hm`        NMMMMMMMMd    .mh "<<endl;
cout<<"MMMMMs       oMMs       hMMM/     /MMMMMMN   /MMN`     `odMMNo-oMMM-     sMMM:     dMMMMN+    yMMMMM+M.         Ndyo+/-.od     .M+"<<endl;
cout<<"MMMMMs        os        dMMM/     +MMMMMMN`  /MMM-        `-+yNMMMM:     yMMy     `NMMMMMMo``/NMMMMMmh          N/      od      hm"<<endl;
cout<<"MMMMMs                  dMMM/     +MMMMMMN`  /MMMN:           `yMMM:     yMMo      mMMMMMMMMMMMMMMMMMs          N/      od      sM"<<endl;
cout<<"MMMMMo  .d`      +/     dMMM/     oMMMMMMN`  /MMMNMs-          `mMM:     sMMs      /MMMMMMMMMMMMMMMMmh          N/      od      hm"<<endl;
cout<<"MMMMM+  -My     +Ms     hMMM+     -MMMMMMd   +MMs .mMNho:       yMM-     sMMN.      /mMMMMMmoyMMMMMM+M.      `.-M:  `yNMMd     .M+"<<endl;
cout<<"MMMMM:  -MM+   -MMs     sMMMh      :hNNms`  `hMMh  `sNMMM+     `mMM.     +MMMd`       ./+:.  -MMMMMM hm.    oMMMM:  .dMMd:    .mh "<<endl;
cout<<"MMMNy`  `yMM: `mMh.     `yMMMy`            `hMMMM:    ..`     .dMN+       :dMMm/            `dMMMMMM  yN:   /hdh+            :Ny  "<<endl;
cout<<"MMMy     `mMm-yMM:       -MMMMNo:`      `:sNMMMMMNo-`      `:sNMMd`       -dMMMMd+-`    `-+ymMMMMMMM   :mh:                :hm:   "<<endl;
cout<<"MMMMMmdmNMMMMMMMMMNmmddmNMMMMMMMMMNmdmmNMMMMMMMMMMMMMNmmdmNMMMMMMMMNmddmNMMMMMMMMMMMNmmNMMMMMMMMMMMM     :ymy/.        ./ymy:     "<<endl;
cout<<"MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM        :oyddddddddyo:        "<<endl;
cout<<"----------------------------------------------------------------------------------------------------------------------------------"<<endl;
}
void retryorsignin();
void retryorsignin()
{
    int retryorsigninv;
    cout <<"1.Sign in\n2.Sign up\n";
    cin>>retryorsigninv;
    switch(retryorsigninv) {
        case 1 :
            system("cls");
            headding();
            login();
            break;
        case 2 :
            system("cls");
            headding();
            signup();
            break;
        default :
            system("cls");
            headding();
            cout << "Invalid Enput Try again." << endl;
            retryorsignin();
        }
}
string login(){
    ifstream loginf;
    loginf.open("login1.txt");
    int flag=0;
    string username,password,checkusername,checkpassword;
    cout<<"Let's sign in.\nEnter Username : ";
    cin>>username;

    if(!loginf.is_open())                   //checking whether the file is open
    {
        cout <<"error file did not opened.";
    }

    while(!loginf.eof()){
        loginf>>checkusername;
        loginf>>checkpassword;
        if(username==checkusername){
            flag=1;
            break;
        }
    }
    loginf.close();

    if(flag==0){
        headding();
        system("cls");
        cout<<"No such username found. \nRetry.\n";
            retryorsignin();
    }
    cout<<"Enter Password : ";
    cin>>password;
    if(password==checkpassword){
        headding();
        system("cls");
        cout<<"WELCOME "<<username<<". Hope you like our latest MUSIC MANAGEMNT PLAYER. \nPress Enter to continue to menu.";
        getch();
        menu();
    }else{
        system("cls");
        headding();
        cout<<"password entered is incorrect.\nRetry.\n";
        retryorsignin();
    }
}
string menu(){


}
string signup(){
    ofstream signupinfo;
    signupinfo.open("login1.txt",std::ios::app);
    string username1,password1;
    if(!signupinfo.is_open()){
        cout<<"Error in opening file";
    }
    cout<<" Welcome To MMP! \nLet's sign up.\nEnter your username : ";
    cin>>username1;
    signupinfo<<"\n"<<username1<<"\n";
    cout<<"Your Password :";
    cin>>password1;
    signupinfo<<password1<<"\n";
    signupinfo.close();
    headding();
    system("cls");
    login();
}

int main()
{
        headding();
        cout<<"WELCOME to Music Management Player\n";
        retryorsignin();
    return 0;
}






























// MusicSystem.cpp : This file contains the 'main' function. Program execution begins and ends there.
//




