#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    int x;
    cin >> x;
    int count = 0;
    int Top = x;
    int Bottom = 7 - x;
    int** numbers = new int* [n];
    int arr[] = { 1,2,3,4,5,6 };
    for (int i = 0; i < n; i++)
    {
        numbers[i] = new int[2];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> numbers[i][j];
        }

    }

    for (int i = 1; i < n; i++)
    {

        for (int j = 0; j < 6; j++)
        {
            if ( arr[j] != Bottom && arr[j] != numbers[i - 1][0] && arr[j] != numbers[i - 1][1] && arr[j] != numbers[i][0] && arr[j] != numbers[i][1])
            {
                count++;
                Bottom = arr[j];
                Top = 7 - Bottom;
                break;
            }

        }

    }
    if (count == n - 1)
    {
        cout << "YES";
    }
    else 
    {
        cout << "NO";
    }



    return 0;
}