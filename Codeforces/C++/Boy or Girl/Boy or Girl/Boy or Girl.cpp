#include <iostream>
using namespace std;
int main() {
	string r;
	cin >> r;
	int mo=0;
	int ko = 1;
	for (int i = 0; i < r.size(); i++) {
		for (int j = i + 1; j < r.size(); j++) {
			if (r[i] == r[j]) {
				ko = 0;
				break;
			}
		}
		if (ko) {
			mo++;
		}
				ko = 1;


	}
	if (mo % 2 == 0)
		cout << "CHAT WITH HER!";
	else cout << "IGNORE HIM!";









}
