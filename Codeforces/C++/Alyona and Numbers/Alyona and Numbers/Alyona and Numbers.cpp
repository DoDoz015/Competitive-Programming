#include <iostream>
#include <string>
using namespace std;
int main() {
    int n, m;
    cin >> n >> m;
    int count = 0;
    int* First = new int[n];
    int* Second = new int[m];
    for (int i = 0; i < n; i++)
    {
        First[i] = i + 1;
    }

    for (int i = 0; i < m; i++)
    {
        Second[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if ((First[i] + Second[j]) % 5 == 0)
            {
                count++;
            }
        }

    }

    cout << count;

    return 0;
}