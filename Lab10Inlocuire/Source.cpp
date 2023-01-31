#include<iostream>
#include<set>
#include<vector>
#include<list>
#include<iterator>

using namespace std;

template <class OutputIterator, class T>
void func(OutputIterator start, OutputIterator stop, T deInlocuit, T valoareNoua) 
{
	while (start != stop) {
		if (*start == deInlocuit)
			*start = valoareNoua;
		start++;
    }
}

int main() {

	vector<int> v;
	vector<int>::iterator it;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);
	cout << "Vector initial\n";
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;

	func(v.begin(), v.end(), 2, 5);
	cout << "Dupa inlocuire\n";
	for (it = v.begin(); it != v.end(); ++it)
		cout << *it << " ";
	cout << endl;

	list<double> l;
	list<double>::iterator lit;
	l.push_back(1.2);
	l.push_back(2.3);
	l.push_back(3.4);
	cout << "Lista initiala\n";
	for (lit = l.begin(); lit != l.end(); ++lit)
		cout << *lit << " ";
	cout << endl;
	func(l.begin(), l.end(), 2.3, 4.5);
	cout << "Dupa inlocuire\n";
	for (lit = l.begin(); lit != l.end(); ++lit)
		cout << *lit << " ";
	cout << endl;
}