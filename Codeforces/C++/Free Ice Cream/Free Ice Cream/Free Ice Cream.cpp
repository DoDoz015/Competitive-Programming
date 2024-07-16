#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int n;
    long long x;
    cin >> n >> x;
    int DistressedChilds = 0;
    string Chars(n, ' ');
    
    long long* Numbers = new long long[n];

    long long LeftPacks = x;

    for (int i = 0; i < n; i++)
    {
        cin >> Chars[i] >> Numbers[i];
    }



    for (int j = 0; j < n; j++)
    {

        if (Chars[j] == '+')
        {
            LeftPacks = LeftPacks + Numbers[j];
        }


        if (Chars[j] == '-')
        {
            if (LeftPacks >= Numbers[j])
            {
                LeftPacks = LeftPacks - Numbers[j];
            }
            else
            {
                DistressedChilds++;
            }

        }

    }

    cout << LeftPacks << " " << DistressedChilds;
    delete[] Numbers;

    return 0;
}