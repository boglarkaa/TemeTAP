#include <iostream>
#include <string>

using namespace std;

template<class T>
T maxim(T* v, int nrEl) {
	T max = v[0];
	for (int i = 1; i < nrEl; ++i)
	{
		if (max < v[i]) {
			max = v[i];
		}
	}
	return max;
}

template<class T>
T minim(T* v, int nrEl) {
	T min = v[0];
	for (int i = 1; i < nrEl; ++i)
	{
		if (min > v[i]) {
			min = v[i];
		}
	}
	return min;
}
template<class T>
int secventialSearch(T* v, int nrEl, T key) {
	int pos = -1;
	for (int i = 0; i < nrEl; ++i)
	{
		if (v[i] == key)
		{
			pos = i;
			return pos;
		}
	}
	return pos;
}
template <class T>
T* bubbleSort(T* v, int nrEl) {
	for (int i = 0; i < nrEl; ++i) {
		for (int j = 0; j < nrEl - i-1; j++)
		{
			if (v[j] > v[j + 1])
			{
				T temp = v[j];
				v[j] = v[j + 1];
				v[j + 1] = temp;
			}
		}
	}
	return v;
}

template<class T>
int binarySearch(T* v, int nrEl, T key, T high, T low) {
	while (low <= high) {
		T mid = low + (high - low) / 2;
		if (v[mid] == key)
			return mid;
		else if (v[mid] < key)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return -1;
}

template<>
char* bubbleSort(char* c, int nrEl) {
	for (int i = 0; i < nrEl; ++i) {
		for (int j = 0; j < nrEl - i - 1; j++)
		{
			if (c[j] < c[j + 1])
			{
				char temp = c[j];
				c[j] = c[j + 1];
				c[j + 1] = temp;
			}
		}
	}
	return c;
}

int main() {

	int v[5];
	for (int i = 0; i < 5; ++i) {
		v[i] = rand() % 20 + 1;
	}
	for (int i = 0; i < 5; ++i)
		cout << v[i] << " ";
	cout << endl;
	cout << maxim<int>(v, 5) << endl;
	cout << minim<int>(v, 5) << endl;
	int pos = secventialSearch(v, 5, 3);
	if (pos==-1)
		cout << "Elementul nu a fost gasit" << endl;
	else
		cout << "Elementul a fost gasit pe pozitia " << pos << endl;
	bubbleSort(v, 5);
	for (int i = 0; i < 5; ++i)
		cout << v[i] << " ";
	cout << endl;
	pos = binarySearch<int>(v, 5, 3, 0, 4);
	if (pos == -1)
		cout << "Elementul nu a fost gasit" << endl;
	else
		cout << "Elementul a fost gasit pe pozitia " << pos << endl;
	bubbleSort(v, 5);
	for (int i = 0; i < 5; ++i)
		cout << v[i] << " ";
	cout << endl;

	char c[] = { 'a', 'b', 'c', 'd' };
	bubbleSort(c, 4);
	for (int i = 0; i < 4; ++i)
		cout << c[i] << " ";
	cout << endl;
	return 0;
}