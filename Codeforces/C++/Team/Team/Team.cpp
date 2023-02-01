#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int p, v, t;
	int sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> p >> v >> t;
		int mul = p + v + t;
		if (mul >= 2)
			sum = sum + 1;
	}
	cout << sum;

}