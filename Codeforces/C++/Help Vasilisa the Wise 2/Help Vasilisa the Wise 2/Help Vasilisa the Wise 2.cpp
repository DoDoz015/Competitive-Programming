#include <iostream>
#include <climits>

using namespace std;



int main() {

    int r1, r2, c1, c2, d1, d2;
    cin >> r1 >> r2 >> c1 >> c2 >> d1 >> d2;

    int Grid[2][2];
    for (int i = 1; i <= 9; i++)
    {
        Grid[0][0] = i;
        for (int j = 1; j <= 9; j++)
        {
            Grid[0][1] = j;
            for (int k = 1; k <= 9; k++)
            {
                Grid[1][0] = k;
                for (int r = 1; r <= 9; r++)
                {
                    Grid[1][1] = r;

                    if (Grid[0][0] + Grid[1][0] == c1 && Grid[0][1] + Grid[1][1] == c2 && Grid[0][0] + Grid[0][1] == r1 && Grid[1][0] + Grid[1][1] == r2 && Grid[0][0] + Grid[1][1] == d1 && Grid[0][1] + Grid[1][0] == d2)
                    {
                        if (Grid[0][0] == Grid[0][1] || Grid[0][0] == Grid[1][0] || Grid[0][0] == Grid[1][1] || Grid[0][1] == Grid[1][0] || Grid[0][1] == Grid[1][1] || Grid[1][0] == Grid[1][1])
                        {
                            continue;
                        }
                        for (int z = 0; z < 2; z++)
                        {
                            for (int h = 0; h < 2; h++)
                            {
                                cout << Grid[z][h] << " ";
                            }
                            cout << endl;

                        }
                        return 0;
                    }
                }

            }
        }
    }
    cout << "-1";
    return 0;
}
