#include <iostream>
#include <string>
#include <cstring>

using namespace std;



int main() {
    int n;
    cin >> n;
    int* arr = new int[n+1];
    int* Saver = new int[n+1];

    for (int l = 1; l < n + 1; l++)
    {
        Saver[l] = -1;
    }
    for (int i = 1; i < n + 1; i++)
    {
        cin >> arr[i];
    }

    for (int j = 1; j < n + 1; j++)
    {
        Saver[arr[j]] = j;
    }

    for (int k = 1; k < n + 1; k++)
    {
        cout << Saver[k] << " ";
    }
    delete[] arr;
    delete[] Saver;
    return 0;
}