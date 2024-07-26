#include <iostream>
#include <string>
using namespace std;



int main() {

    int n;
    cin >> n;
    string* Shapes = new string[n];
    int Faces = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> Shapes[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (Shapes[i] == "Icosahedron") {
            Faces = Faces + 20;
        }
        else if (Shapes[i] == "Tetrahedron")
        {
            Faces = Faces + 4;
        }
        else if (Shapes[i] == "Cube")
        {
            Faces = Faces + 6;
        }
        else if (Shapes[i] == "Octahedron")
        {
            Faces = Faces + 8;
        }
        else if (Shapes[i] == "Dodecahedron")
        {
            Faces = Faces + 12;
        }
    }
    cout << Faces;

    return 0;
}