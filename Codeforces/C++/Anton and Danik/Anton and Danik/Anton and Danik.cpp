#include <iostream>
using namespace std;
int main() {
	int n;
	int anton = 0;
	int danik = 0;

	cin >> n;
	string name;
	cin >> name;
	for (int i = 0; i < n; i++) {
		if (name[i] == 'A')
			anton += 1;
		else
			danik += 1;
	}
	if (anton > danik)
		cout << 'A'<<'n'<<'t'<<'o'<<'n';
	if (danik > anton)
		cout << 'D'<<'a'<<'n'<<'i'<<'k';
	if (anton == danik)
		cout << 'F'<<'r'<<'i'<<'e'<<'n'<<'d'<<'s'<<'h'<<'i'<<'p';
}
