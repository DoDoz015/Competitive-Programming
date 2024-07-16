#include <iostream>
#include <string>
#include <cstring>
#include <unordered_set>

using namespace std;
int main()
{
    int n;
    int counter = 0;
    cin >> n;
    bool Check = false;
    int* Before = new int[n];
    int* After = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Before[i];
        cin >> After[i];
    }
    for (int k = 0; k < n; k++)
    {
        if (Before[k] == After[k])
        {
            counter++;
        }

    }
    for (int r = 0; r < n - 1; r++)
    {
        if (Before[r + 1] > Before[r])
        {
            Check = true;
            break;
        }

    }

    if (counter != n)
    {
        cout << "rated";
    }
    else
    {
        if (Check)
        {
            cout << "unrated";
        }
        else
        {
            cout << "maybe";
        }
    }
    delete[] Before;
    delete[] After;


    return 0;
}