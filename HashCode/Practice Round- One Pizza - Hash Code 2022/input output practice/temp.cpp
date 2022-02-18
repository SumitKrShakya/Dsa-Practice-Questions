// #include<bits/stdc++.h>
// #include<fstream>

// using namespace std;

// int main(){


//     ifstream inFile;
//     inFile.open("sample.txt");
//     if (!inFile.is_open()) {
//         cout << "Unable to open file datafile.txt";
        
//     }else{
//         cout<<"opened file";
//     }











//     return 0;
// }

#include <iostream>
#include <fstream>
using namespace std;

int main() {
    string x;
    ifstream inFile;
    inFile.open("test.txt");
    if (!inFile.is_open()) {
        cout << "Unable to open file";
    }
    
    while (inFile >> x) {
        cout<<x<<endl;
    }
    inFile.close();
    return 0;
}