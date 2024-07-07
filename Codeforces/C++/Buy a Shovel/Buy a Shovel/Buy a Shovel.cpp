#include <iostream>
#include <cstring>
#include <string>


using namespace std;

int main() {

    int count = 1;
    int r;
    int shovel;
    cin >> shovel >> r;
    int progress = shovel;


    for (int i = 0; i < 100; i++)
    {
        if ((progress % 10 == 0) || ((progress - r) % 10 == 0))
        {
            break;
        }
        progress = progress + shovel;
        count++;
    }
    cout << count;

    return 0;
}