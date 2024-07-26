#include <iostream>
#include <string>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

bool is_coprime(long long a, long long b)
{
    long long Greatest = gcd(a, b);
    if (Greatest == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main() {
    long long n, m;
    cin >> n >> m;

    if (m == n || m - n == 1)
    {
        cout << "-1";
        return 0;
    }

    for (long long i = n; i < m - 1; i++)
    {
        long long first = i;
        long long second = i + 1;
        long long third = i + 2;
        bool firstb = is_coprime(first, second);
        bool secondb = is_coprime(first, third);
        bool thirdb = is_coprime(second, third);
        if (firstb && secondb && !thirdb || secondb && thirdb && !firstb || firstb && thirdb && !secondb)
        {
            cout << first << " " << second << " " << third;
            return 0;
        }
    }
    cout << "-1";

    return 0;
}

