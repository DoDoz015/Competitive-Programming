#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;
    int count = 0;
    int Save = k;
    string* numbers = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < n; i++)
    {
        int check = 0;
        int howmany = 0;
        Save = k;

        for (int j = 0; j < numbers[i].length(); j++)
        {
            
            
            if ((numbers[i][j] - '0') == Save)
            {
                check++;
                Save--;
                j = -1;
                howmany++;
            }
            if (check == k + 1)
            {
                count++;

                break;
            }
            if (howmany > numbers[i].length())
            {
                break;
            }
        }
    }

    cout << count;
    return 0;
}