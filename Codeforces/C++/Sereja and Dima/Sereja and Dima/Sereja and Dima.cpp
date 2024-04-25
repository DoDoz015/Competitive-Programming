#include <iostream>
using namespace std;
void remove(int* p, int index,int n)
{
	for (int i = index; i <= n-1; i++)
		p[i] = p[i + 1];

}
int main() {
	int n;
	cin >> n;
	int m;
	int sum_s = 0; int sum_d = 0;
	int start = 0, end = n - 1, max = 0, play = 0;
	
	int* p = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> p[i];
	}
	while (start <= end) {
		if (p[start] > p[end]) {
			max = p[start];
			start++;
		}
		else {
			max = p[end];
			end--;
		}
		if (play % 2 == 0) {
			sum_s += max;
		}
		else { sum_d += max; }
		play++;

	}
	cout << sum_s<<" " << sum_d;
}
	