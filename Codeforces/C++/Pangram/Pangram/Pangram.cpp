#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   
#include <set>

using namespace std;


int main() {
    int n;
    int count = 1;
    cin >> n;
    string Input;
    //string unique(n, ' ');
    cin >> Input;
    //string check = "abcdefghijklmnopqrstuvwxyz";
    for (int j = 0; j < n; j++)
    {
        if (Input[j] < 97)
        {
            Input[j] = Input[j] + 32;
        }

    }

    set<int> distinct_values(Input.begin(), Input.end());

    if (distinct_values.size() == 26)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}