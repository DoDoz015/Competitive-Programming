#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {
    string s;
    int arr[4];
    int Cal = 0;
    int j = 0;
    int i;
    for (i = 0; i < 4; i++)
    {
        cin >> arr[i];

    }
    cout << endl;
    cin >> s;
    for (int j = 0; j < s.length(); j++) {
        int k = s[j] - '0'; 

        
        if (k >= 1 && k <= 4) {
            Cal += arr[k - 1];
        }
        else {
            cout << "Invalid input: " << s[j] << endl;
            return 1;
        }
    }
    cout << Cal << endl;
    return 0;
}