#include<iostream>
#include<deque>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;

int main() {

	deque<int> d;
	vector<int> v;
	list<int> l;
	for (int i = 1; i <= 10; ++i) {
		if (i % 3 == 0)
			d.push_back(i);
		if (i % 2 == 0)
			v.push_back(i);
		l.push_front(i * (-1));
	}

	deque<int>::iterator it;
	for (it = d.begin(); it != d.end(); ++it)
		cout << *it << " ";
	cout << endl;
	vector<int>::iterator vit;
	for (vit = v.begin(); vit != v.end(); ++vit)
		cout << *vit << " ";
	cout << endl;
	list<int>::iterator lit;
	for (lit = l.begin(); lit != l.end(); ++lit)
		cout << *lit << " ";
	cout << endl;

	vector<int> rezultat;
	deque<int> save = d;
	copy(v.begin(), v.end(), inserter(d, d.end()));
	for (it = d.begin(); it != d.end(); ++it)
		cout << *it << " ";
	cout << endl;

	copy(save.begin(), save.end(), inserter(v, v.end()));

	for (vit = v.begin(); vit != v.end(); ++vit)
		cout << *vit << " ";
	cout << endl;

	vector<int>::iterator penultim = v.end();
	penultim--;
	penultim--;
	penultim--;
	penultim--;

	list<int>::iterator jum = l.begin();
	jum++;
	jum++;
	jum++;
	jum++;
	jum++;

	copy(l.begin(), jum, inserter(v, penultim));
	for (vit = v.begin(); vit != v.end(); ++vit)
		cout << *vit << " ";
	cout << endl;

	vector<int>::iterator pen = v.end();
	pen--;

	copy(jum, l.end(), inserter(v, pen));
	for (vit = v.begin(); vit != v.end(); ++vit)
		cout << *vit << " ";
	cout << endl;
	return 0;
}