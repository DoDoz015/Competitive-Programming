#include <iostream>
#include <string>
using namespace std;



int main() {
    string Base = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char C;
    cin >> C;
    string Mole;
    cin >> Mole;
    int LenBase = Base.length();
    int Len = Mole.length();
    string Print(Len, '0');

    if (C == 'R')
    {
        for (int i = 0; i < Len; i++)
        {
            for (int j = 0; j < LenBase; j++)
            {
                if (Mole[i] == Base[j])
                {
                    Print[i] = Base[j - 1];
                    break;
                }
            }

        }
    }
    else
    {
        for (int k = 0; k < Len; k++)
        {
            for (int r = 0; r < LenBase; r++)
            {
                if (Mole[k] == Base[r])
                {
                    Print[k] = Base[r + 1];
                    break;
                }
            }

        }
    }
    cout << Print;
    return 0;
}