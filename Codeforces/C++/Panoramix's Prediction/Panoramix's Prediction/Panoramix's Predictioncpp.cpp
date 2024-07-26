#include <iostream>
#include <string>
using namespace std;

int return_next_prime(int Num)
{

    for (int i = Num + 1; i < 50; i++)
    {
        int count = 0;
        for (int j = i; j > 0; j--)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            return i;
        }
    }
    return 0;
}

int main() {
    int n, m;
    cin >> n >> m;

    int Next = return_next_prime(n);
    if (Next == m)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}
