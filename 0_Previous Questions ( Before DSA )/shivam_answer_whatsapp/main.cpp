#include <iostream>
#include <fstream>
using namespace std;
int main () {
  ofstream myfile;
  myfile.open ("example.txt");
  char k='.';
  for(int i=0;i<200;i++){
    for(int j=0;j<i;j++){
        myfile << ".";
    }
    myfile << "\n";
  }
  myfile.close();
  return 0;
}
