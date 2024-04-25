#include <iostream>
using namespace std;
int main() {
	int n;
	int res = 0;
	cin >> n;
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	if (p[0] == -1) {
		res++;
	}
	for (int i = 0; i < n-1; i++) {
		if (p[i] ==-1 && p[i + 1] == -1) {
			res++;
		}
	}
	for (int i = 0; i < n - 1; i++) {
		if (p[i] > 0 && p[i + 1] == -1 && p[0] == -1) {
			res -= p[i]-1;
		}
	}
	cout << res << endl;

}