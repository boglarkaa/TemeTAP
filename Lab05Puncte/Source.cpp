#include"Puncte.h"
#include<iostream>
using namespace std;

int main() {

	int n, m;
	cout << "Nr punct 2D\n";
	cin >> n;
	cout << "Nr puncte 3D\n";
	cin >> m;
	Punct2D** puncte2 = new Punct2D * [m];
	for (int i = 0; i < n; ++i) {
		puncte2[i] = new Punct3D();
		puncte2[i]->operator>>(cin);
	}
	Punct3D** puncte3 = new Punct3D*[m];
	for (int i = 0; i < m; ++i) {
		puncte3[i] = new Punct3D();
		puncte3[i]->operator>>(cin);

	}
	cout<<distanta3(*puncte3[0], * puncte3[1]);
	return 0;
}