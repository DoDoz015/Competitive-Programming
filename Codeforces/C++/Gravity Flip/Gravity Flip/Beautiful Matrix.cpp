#include <iostream>
using namespace std;
int main()
{
	int arr [5][5];
	int row, col;
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 5; j++)
		{
			cin >> arr[j][i];
			if (arr[j][i] == 1)
			{
				col = i;
				row = j;
			}
		}
	int result = abs(2 - col) + abs(2 - row);
	cout << result;


}