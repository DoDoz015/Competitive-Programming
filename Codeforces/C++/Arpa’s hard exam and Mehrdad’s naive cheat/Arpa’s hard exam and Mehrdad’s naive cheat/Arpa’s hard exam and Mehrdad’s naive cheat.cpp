#include <iostream>
using namespace std;


int main() {

    int n;
    cin >> n;
    int lastDigit;
    int remain = n % 4;




    switch (remain)
    {
    case 1:
        lastDigit = 8;
        break;

    case 2:
        lastDigit = 4;
        break;

    case 3:
        lastDigit = 2;
        break;

    case 0:
        lastDigit = 6;
        break;


    }
    if (n == 0)
    {
        cout << '1';
    }
    else
    {
        cout << lastDigit;
    }

    return 0;
}