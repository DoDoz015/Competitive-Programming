#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {
    int count = 0;
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < 4; j++)
    {
        if (count == 3)
        {
            break;
        }
        if (count == 2)
        {
            break;
        }

        for (int k = j + 1; k < 4; k++)
        {
            if (arr[j] == arr[k])
            {
                count++;
            }
        }
    }
    cout << count;


    return 0;
}