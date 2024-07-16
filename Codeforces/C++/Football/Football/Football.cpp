#include <iostream>
#include <string>

using namespace std;

int main() {
    bool notfound = true;
    int Team1count = 0;
    int Team2count = 0;
    int n;
    cin >> n;
    string Team1;
    string Team2;
    string* arr = new string[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i != 0 && (arr[i] != arr[i - 1]) && notfound)
        {
            Team2 = arr[i];
            notfound = false;
        }
    }
    Team1 = arr[0];
    // cout<<Team1<<" "<<Team2;
    for (int j = 0; j < n; j++)
    {
        if (arr[j] == Team1)
        {
            Team1count++;
        }
        else
        {
            Team2count++;
        }

    }
    if (Team1count > Team2count)
    {
        cout << Team1;
    }
    else
    {
        cout << Team2;
    }



    return 0;
}
