#include <iostream>
#include <string>
using namespace std;



int main() {
     long long n, k;
    cin >> n;
    cin >> k;
    long long m;
    long long half = (n + 1) / 2;

    if (k <= half) 
    {
        m = 2 * k - 1;
    }
    else 
    {
        m = 2 * (k - half);
    }
   

    cout << m;
    return 0;
}