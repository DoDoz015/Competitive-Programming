#include <iostream>
#include <string>
#include <cstring>
#include <random>

using namespace std;

string generatePassword(int n, int k) {

    string alphabet = "abcdefghijklmnopqrstuvwxyz";
    string distinct_chars = alphabet.substr(0, k);


    string password;


    for (int i = 0; i < n; ++i) {
        password += distinct_chars[i % k];
    }

    return password;
}

int main() {
    int n, k;
    cin >> n >> k;

    string password = generatePassword(n, k);
    cout << password << std::endl;

    return 0;
}