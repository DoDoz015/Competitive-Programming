#include <iostream>
#include <cstring>
#include <string>

using namespace std;

int main() {
    int NumberOfDistinct = 0;
    string Letters;
    string Check(1000, '0');
    getline(cin, Letters);
    int Numbers = Letters.length() / 3;
    for (int i = 1; i < Letters.length(); i = i + 3)
    {

        for (int j = i + 3; j < Letters.length(); j = j + 3)
        {
            if (Letters[i] == Letters[j])
            {
                Numbers--;
                break;
            }
        }
    }
    cout << Numbers;

    return 0;
}