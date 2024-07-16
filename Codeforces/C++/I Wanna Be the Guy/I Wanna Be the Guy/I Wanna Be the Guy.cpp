#include <iostream>
#include <string>
#include <cstring>
#include <unordered_set>

using namespace std;
int main()

{
    int n;
    cin >> n;

    int p;
    cin >> p;
    int* CarryP = new int[p];
    for (int i = 0; i < p; i++)
    {
        cin >> CarryP[i];
    }

    int q;
    cin >> q;
    int* CarryQ = new int[q];
    for (int j = 0; j < q; j++)
    {
        cin >> CarryQ[j];
    }
    int* Test = new int[q + p];

    if (q >= p)
    {
        for (int h = 0; h < q; h++)
        {


            Test[h] = CarryQ[h];
        }
        for (int k = 0; k < p; k++)
        {


            Test[k + q] = CarryP[k];
        }
    }
    else
    {
        for (int z = 0; z < p; z++)
        {

            Test[z] = CarryP[z];

        }
        for (int x = 0; x < q; x++)
        {

            Test[x + p] = CarryQ[x];


        }
    }

    unordered_set<int> uniqueNumbers;

    for (int d = 0; d < q + p; d++) {
        uniqueNumbers.insert(Test[d]);
    }
    int distinctCount = uniqueNumbers.size();

    if (distinctCount == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }

    return 0;
}