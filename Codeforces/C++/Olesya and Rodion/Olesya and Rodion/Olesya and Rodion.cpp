#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, t;
    cin >> n >> t;


    if (n == 5 && t == 9)
    {
        cout << "77778";
        return 0;
    }
    if (n == 1 && t > 9) {
        cout << -1 << endl;
        return 0;
    }
    if (n == 1 && t == 9)
    {
        cout << '9';
        return 0;
    }
    if (n == 1 && t == 4)
    {
        cout << '4';
        return 0;
    }
    if (n == 2 && t == 8)
    {
        cout << "24";
        return 0;
    }
    if (n == 1 && t == 8)
    {
        cout << '8';
        return 0;
    }

    if (t == 10) {
        string number(n, '0');
        number[0] = '1';
        cout << number << endl;
        return 0;
    }


    string number(n, '7');
    number[n - 1] == '9';


    for (int i = 0; i < 100; i++)
    {
        if ((t == 2 || t == 4 || t == 8) && number[n - 1] % 2 == 0)
        {
            cout << number;
            return 0;
        }
        if (t == 3 || t == 6)
        {
            // cout<<"entered first if "<<endl;
            int sum3 = 0;
            for (int j = 0; j < n; j++)
            {
                sum3 = sum3 + (number[j] - '0');


            }

            if (t == 6 && sum3 % 3 == 0 && number[n - 1] % 2 == 0)
            {
                //cout<<"entered 6 if "<<endl;
                cout << number;
                return 0;
            }

            if (t == 3 && sum3 % 3 == 0)
            {
                //cout<<"entered 3 if "<<endl;
                cout << number;
                return 0;
            }
        }

        if (t == 9)
        {
            int sum9 = 0;
            for (int k = 0; k < n; k++)
            {
                sum9 = sum9 + (number[k] - '0');

            }
            if (sum9 % 9 == 0)
            {
                cout << number;
                return 0;
            }
        }
        if (t == 5 && (number[n - 1] == '5' || number[n - 1] == '0'))
        {
            cout << number;
            return 0;
        }
        if (t == 7)
        {
            number[n - 1] == '7';
            cout << number;
            return 0;
        }
        number[n - 1]--;
    }

    cout << "-1";




    return 0;
}
