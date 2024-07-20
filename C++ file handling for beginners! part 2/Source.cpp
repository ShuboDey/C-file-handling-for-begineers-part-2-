#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {

	fstream myFile;
	myFile.open("shubo.txt", ios::in); //read mode
	if (myFile.is_open()) {
		string line;
		while (getline(myFile, line)) { //reads a line from myFile and stores the line in the line variable

			cout << line << endl;
		}
		myFile.close();
	}
	return 0;
}