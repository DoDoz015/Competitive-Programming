#include <iostream>
using namespace std;


int main() {
    int n;
    cin >> n;
    int* Coins = new int[n];
    int sum = 0;
    int Tracker = 0;
    int Min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Coins[i];
        sum = sum + Coins[i];

    }

    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (Coins[j] < Coins[j + 1]) {

                int temp = Coins[j];
                Coins[j] = Coins[j + 1];
                Coins[j + 1] = temp;
            }
        }
    }

    for (int j = 0; j < n; j++)
    {
        Tracker = Tracker + Coins[j];
        Min++;
        sum = sum - Coins[j];
        if (Tracker > sum)
        {
            break;
        }
    }

    cout << Min;

    return 0;
}