#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    string Sum;
    cin >> Sum;

    for (int j = 0; j < Sum.length(); j = j + 2)
    {
        for (int k = j + 2; k < Sum.length(); k = k + 2)
        {
            if (Sum[j] > Sum[k])
            {
                int temp = Sum[j];
                Sum[j] = Sum[k];
                Sum[k] = temp;
            }
        }
    }


    cout << Sum;

    return 0;
}