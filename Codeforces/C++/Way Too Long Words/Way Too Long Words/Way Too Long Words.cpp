#include <iostream>
#include <string>
#include <cstring>
using namespace std;
int main() {
    int n;
    cin >> n;
    string* Words = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> Words[i];
    }


    for (int j = 0; j < n; j++)
    {
        if (Words[j].length() > 10)
        {
            int Len = Words[j].length();
            char First, Last;
            int Mid;
            string Temp;
            First = Words[j][0];
            Last = Words[j][Len - 1];
            Mid = Len - 2;
            Words[j] = First + to_string(Mid) + Last;


        }
    }
    for (int k = 0; k < n; k++)
    {
        cout << Words[k] << endl;

    }

    return 0;
}