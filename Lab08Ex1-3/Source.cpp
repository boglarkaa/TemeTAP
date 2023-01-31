#include<iostream>
#include<fstream>
#include<string>
#include<set>
#include<map>
#include<sstream>
using namespace std;
int main() {

	set<string> str;
	set <string>::iterator it;

	ifstream MyFile("file.txt");
	ofstream MyOtherFile("rezultat.txt");

	string words;
	while (getline(MyFile, words)) {
		str.insert(words);
	}

	for (it = str.begin(); it != str.end(); ++it)
		MyOtherFile << *it << endl;
	MyFile.close();
	MyOtherFile.close();

	//ex2

	MyFile.open("file.txt");

	map<string, unsigned> str2;
	map<string, unsigned>::iterator mit;

	while (getline(MyFile, words)) {
		++str2[words];
	}

	for (mit = str2.begin(); mit != str2.end(); ++mit) {
		cout << mit->first << " apare de " << mit->second <<" ori"<< endl;
	}
	cout << endl;
	MyFile.close();

	//ex3

	MyFile.open("file2.txt");

	string word;
	//stringstream ss(word);
	map<unsigned, map<string, unsigned> > str3;
	map<unsigned, map<string, unsigned> > ::iterator itr;
	map<string, unsigned>::iterator innerItr;


	unsigned nrLinii = 0;
	while (getline(MyFile,words)) {
		stringstream ss(words);
		while (ss >> word) {
			++str3[nrLinii][words];
		}
		nrLinii++;
	}
	
	for (itr = str3.begin(); itr != str3.end(); ++itr)
		for (innerItr = itr->second.begin(); innerItr != itr->second.end(); ++innerItr)
			cout << "Nr linie " << itr->first << endl << "Cuvant " << innerItr->first << endl << "Nr aparitii " << innerItr->second << endl;
	return 0;
}