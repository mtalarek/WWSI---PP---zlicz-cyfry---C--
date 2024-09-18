#include<iostream>
using namespace std;

int zlicz_cyfry(long long a) {
	int licznik_cyfr = 0;
	if (a == 0) {
		licznik_cyfr = 1;
	}
	else {
		if (a < 0) {
			a = -a;
		}
		licznik_cyfr = 0;
		while (a > 0) {
			a = a / 10;
			licznik_cyfr++;
		}
	}
	return licznik_cyfr;
}

int main() {
	long long a;
	cout << "podaj liczbe: ";
	cin >> a;
	cout << "liczba cyfr w " << a << " = " << zlicz_cyfry(a);
}
