#include "RandomNumber.h"
#include<iostream>
#include<string>
#include<set>
#include<vector>
#include<algorithm>
#include<cstdlib>

using namespace std;

int random() {
	int liminf=0, limsup=10;
	return (rand() % (limsup - liminf + 1) + liminf);
}

template <class T>
void afisareSet (set<T> theSet) 
{
	for (auto i = theSet.begin(); i != theSet.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

template <class T>
void afisareVector(vector<T> vec)
{
	for (auto i = vec.begin(); i != vec.end(); ++i)
		cout << *i << " ";
	cout << endl;
}

int main() 
{
	int n;
	cout << "Introduceti numarul de elemente din vector: ";
    cin >> n;
	vector<int> vecPrim(n);
	vector<int> vecSec(n);

	vector<int>::iterator it;

	RandomNumber ran(0, n / 2);
	generate(vecPrim.begin(), vecPrim.end(), ran);
	generate(vecSec.begin(), vecSec.end(), ran);

	cout << "Primul vector este: ";
	afisareVector(vecPrim);
	cout << "\nAl doilea vector este: ";
	afisareVector(vecSec);

	set<int> s1, s2;
	for (it = vecPrim.begin(); it != vecPrim.end(); ++it)
		s1.insert(*it);
	for (it = vecSec.begin(); it != vecSec.end(); ++it)
		s2.insert(*it);

	set<int> uni;
	set<int> inters;
	set<int> diff;

	set<int>::iterator setit;

	set_union(s1.begin(), s1.end(), s2.begin(), s2.end(),inserter(uni, uni.begin()));
	cout << "\nReuniunea este: ";
	afisareSet(uni);
	cout << endl;
	set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(inters, inters.begin()));
	cout << "Intersectia este: ";
	afisareSet(inters);
	cout << endl;
	set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), inserter(diff, diff.begin()));	
	cout << "Diferenta este: ";
	afisareSet(diff);
	
	return 0;
}