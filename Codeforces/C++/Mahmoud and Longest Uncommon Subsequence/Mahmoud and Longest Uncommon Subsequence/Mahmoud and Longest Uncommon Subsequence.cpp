#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   

using namespace std;

int main() {

    string a;
    string b;
    cin >> a;
    cin >> b;

    int Len;
    if (b.length() > a.length())
    {
        Len = b.length();

    }

    else
    {
        Len = a.length();
    }

    if (b == a)

    {
        cout << "-1";
    }

    else

    {
        cout << Len;
    }





    return 0;
}