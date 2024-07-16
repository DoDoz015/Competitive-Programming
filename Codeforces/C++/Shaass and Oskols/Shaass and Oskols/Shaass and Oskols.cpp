#include <iostream>
using namespace std;

int main() {
    int m;
    int n;
    cin >> n;
    int* NumOfBirds = new int[n];

    for (int i = 0; i < n; i++)
    {
        cin >> NumOfBirds[i];
    }



    cin >> m;

    int** xANDy = new int* [m];
    for (int i = 0; i < m; ++i)
    {
        xANDy[i] = new int[2];
    }

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < 2; ++j)
        {

            cin >> xANDy[i][j];
        }

    }
    for (int r = 0; r < m; r++)
    {
        int x = xANDy[r][0];
        int y = xANDy[r][1];
        int temp = NumOfBirds[x - 1];


        NumOfBirds[x - 1] = 0;

        NumOfBirds[x - 2] = NumOfBirds[x - 2] + (y - 1);
        NumOfBirds[x] = NumOfBirds[x] + (temp - y);

    }
    for (int l = 0; l < n; l++)
    {
        cout << NumOfBirds[l] << endl;
    }

    return 0;
}