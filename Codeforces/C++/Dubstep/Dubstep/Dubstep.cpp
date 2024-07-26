#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   
#include <string>

using namespace std;

int main() {
    int index = 0;
    string input;
    cin >> input;
    string Copy(input.length() + 3, '0');
    for (int i = 0; i < input.length(); i++)
    {
        Copy[i] = input[i];
    }
    Copy[Copy.length() - 3] = 'W';
    Copy[Copy.length() - 2] = 'U';
    Copy[Copy.length() - 1] = 'B';

    string output(Copy.length(), '0');
    string Check = "WUB";

    for (int i = 0; i < Copy.length(); i++)
    {
        for (int j = i; j < Copy.length(); j++)
        {
            if (Copy.substr(j, 3) == Check)
            {
                i = i + 2;
                break;

            }
            int k = j;
            int count = 0;

            while (Copy.substr(k, 3) != Check)
            {

                output[index] = Copy[k];
                index++;
                count++;
                k++;
            }

            i = i + (count - 1);
            output[index] = ' ';
            index++;
            break;
        }


    }
    for (int i = 0; i < index; i++)
    {
        cout << output[i];
    }

    return 0;
}