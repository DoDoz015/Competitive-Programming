#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {
    int Count = 0;
    int j;
    string input;
    cin >> input;

    string s = "abcdefghijklmnopqrstuvwxyz";
    const char* p = s.c_str();
    for (int i = 0; i < input.length(); i++)
    {
        const char* state = p;

        int diff = abs(input[i] - *state);
        if (diff < 13)
        {

            for (int k = 0; k < diff; k++)
            {
                if (input[i] > *p)
                {
                    p++;
                }
                else
                {
                    p--;
                }
            }


            Count = Count + diff;

        }
        else
        {
            for (int k = 0; k < diff; k++)
            {
                if (input[i] > *p)
                {
                    p++;
                }
                else
                {
                    p--;
                }
            }
            Count = Count + (26 - diff);
        }


    }
    cout << Count;

    return 0;
}