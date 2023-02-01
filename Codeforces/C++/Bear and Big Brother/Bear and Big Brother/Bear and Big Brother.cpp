#include <iostream>
using namespace std;
int main() {
	int a;
	int b; 
	int mul = 0;
	int sul = 0;
	int years = 1;
	cin >> a >> b;
	mul = a * 3;
	sul = b * 2;
	while (mul <= sul) {
		years = years + 1;
		mul = mul * 3;
		sul = sul * 2;
	}
	cout << years;
}