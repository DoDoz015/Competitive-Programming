#include <iostream>
using namespace std;
int main()
{
	int n, h ,w =0;
	cin >> n >> h;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		if (arr[i] > h)
			w += 2;
		else
			w += 1;
	cout << w;
}