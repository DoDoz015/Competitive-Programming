#include <iostream>
using namespace std;

int main() {
    bool Required = false;
    int NumberOfCakes;
    int TimeOfCakes;
    int NumberOfCakesAtATime;
    int TimeNewOven;
    int HowManyCakes = 0;
    cin >> NumberOfCakes >> TimeOfCakes >> NumberOfCakesAtATime >> TimeNewOven;
    int CurrentTime = 0;
    for (int i = 0; i < NumberOfCakes; i = i + NumberOfCakesAtATime)
    {

        HowManyCakes = HowManyCakes + NumberOfCakesAtATime;
        CurrentTime = CurrentTime + TimeOfCakes;


        if (HowManyCakes >= NumberOfCakes)
        {
            break;
        }

        if (TimeNewOven < CurrentTime)
        {
            Required = true;

        }


        if (TimeNewOven < TimeOfCakes && TimeNewOven < NumberOfCakes)
        {
            Required = true;
        }
    }

    if (Required)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}