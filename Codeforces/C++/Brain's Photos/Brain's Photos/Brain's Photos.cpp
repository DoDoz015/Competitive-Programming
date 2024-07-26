#include <iostream>
using namespace std;
int main() {
    bool iscolored = false;
    int n, m;
    cin >> n;
    cin >> m;
    char** matrix = new char* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new char[m];
    }
    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            cin >> matrix[j][k];
        }
    }


    for (int j = 0; j < n; j++)
    {
        for (int k = 0; k < m; k++)
        {
            if (matrix[j][k] == 'C' || matrix[j][k] == 'M' || matrix[j][k] == 'Y')
            {
                iscolored = true;
                break;
            }
        }
        if (iscolored)
        {
            break;
        }

    }
    if (iscolored)
    {
        cout << "#Color";
    }
    else
    {
        cout << "#Black&White";
    }

    return 0;
}