#include"StivaStatica.h"
#include<iostream>
int main() {
	Array_Stack st;
	try {
		st.push(10);
		st.push(20);
		st.push(30);
		st.print();
		st.pop();
		st.print();
		int vf = st.peek();
		cout <<"Varful stivei este: " << vf;
		//pentru a intra in partea de catch
		//st.pop();
		//st.pop();
		//st.pop();
	}
	catch (Array_Stack::Stack_Underflow ex) {
		cout << "Stiva goala";
	}
	//system("pause");
	return 0;
}