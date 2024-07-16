#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   

using namespace std;

int main() {
    bool firsttime = true;
    int n;
    cin >> n;
    int* Crimes = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Crimes[i];
    }
    int current = 0;
    int Untreated = 0;
    if (n == 1 && Crimes[0] == -1)
    {
        cout << 1;
    }
    else {
        for (int j = 0; j < n - 1; j++)
        {
            if (Crimes[0] > 0 && firsttime)
            {
                current = Crimes[0];
                firsttime = false;

            }
            if (Crimes[0] == -1 && firsttime)
            {
                firsttime = false;
                Untreated++;
                current = -1;
            }
            if (Crimes[j + 1] < 0)
            {
                current = current + Crimes[j + 1];
                if (current < 0)
                {
                    Untreated++;
                }
            }
            else if (Crimes[j + 1] > 0)
            {
                if (Crimes[j + 1] > 0 && Crimes[j] > 0)
                {
                    current = current + Crimes[j + 1];
                }
                else if (current > 0)
                {
                    current = current + Crimes[j + 1];
                }
                else
                {
                    current = Crimes[j + 1];
                }


            }
            //current=current+Crimes[j];

        }
        cout << Untreated;
    }
    return 0;
}