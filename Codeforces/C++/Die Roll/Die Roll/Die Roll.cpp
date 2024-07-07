#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int y, w;
    int num, den;
    cin >> y >> w;
    int loop_index;
    if (y > w)
    {
        loop_index = y;
    }
    else
    {
        loop_index = w;
    }
    int n = 6 - loop_index + 1;
    int CommonDivider = gcd(n, 6);
    num = n / CommonDivider;
    den = 6 / CommonDivider;



    cout << num << '/' << den;




    return 0;
}