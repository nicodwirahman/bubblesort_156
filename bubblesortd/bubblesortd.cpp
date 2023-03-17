#include <iostream>
using namespace std;


int a[20];
int n;


void input() {
	while (true) {
		cout << "Massukan banyaknya elemen pada array:";
		cin >> n;
		if (n <= 20)
			break;
		else {
			cout << "\nAray dapat mempunyai maksimal 20 elemen.\n";
		}
	}
	cout << endl;
	cout << "=========================" << endl;
	cout << "masukkan elemen pada array" << endl;
	cout << "=========================" << endl;

	for (int i = 0; i < n; i++) {
		cout << "data ke-" << (i + 1) << "}";
		cin >> a[i];
	}
}

void display() {
	cout << endl;
	cout << "==================================" << endl;
	cout << "Element Array yang telah tersusun" << endl;
	cout << "==================================" << endl;
	for (int j = 0; j < n; j++) {
		cout << a[j] << endl;
	}
	cout << endl;
}

void bubblesortArray() {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j < n - i; j++) {
			if (a[j] > a[j + 1]) {
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
}


int main() {
	input();
	bubblesortArray();
	display();
	return 0;
}