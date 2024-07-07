#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {
    int count = 0;
    int n;
    cin >> n;
    int* Home = new int[n];
    int* Away = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Home[i] >> Away[i];
    }

    for (int k = 0; k < n; k++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Home[k] == Away[j])
            {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}