#include <iostream>
#include <string>
using namespace std;



int main() {

    long long n, m, a;
    cin >> n >> m >> a;

    long long flagstones_length = (n + a - 1) / a;
    long long flagstones_width = (m + a - 1) / a;

    long long total_flagstones = flagstones_length * flagstones_width;

    cout << total_flagstones << std::endl;


    return 0;
}