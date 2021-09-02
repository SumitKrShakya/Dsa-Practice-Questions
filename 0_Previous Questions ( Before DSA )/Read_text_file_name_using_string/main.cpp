#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	string ch;
	string sks="sks.txt";

	//declare object
	ifstream file(sks);


	//read and print file content
	while (!file.eof())
	{
		file >> ch;	//reading from file
		cout << ch<<endl;	//printing
	}
	//close the file
	file.close();
	return 0;
}
