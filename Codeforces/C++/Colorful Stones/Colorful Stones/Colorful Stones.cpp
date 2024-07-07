#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {
    int Len;
    int index = 1;
    string s;
    string t;


    cin >> s >> t;
    if (s.length() >= t.length())
    {
        Len = s.length();
    }
    Len = t.length();
    const char* p = s.c_str();
    for (int i = 0; i < Len; i++)
    {
        if (t[i] == *p)
        {
            p++;
            index++;
        }
    }
    cout << index;



    return 0;
}