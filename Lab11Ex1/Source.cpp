#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
using namespace std;

int main()
{
	ifstream readFile("Text.txt");
	ofstream writeFile("rezultat.txt");
	string line, word;
	//stringstream ss;
	while (getline(readFile, line)) {
		stringstream ss(line);
		while (ss >> word) {
			writeFile << word<<endl;
		}
	}
	return 0;
}