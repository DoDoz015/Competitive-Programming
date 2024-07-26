#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   
#include <string>

using namespace std;

int main() {
    int n;
    int countDiag = 0;
    int countRest = 0;
    cin >> n;
    char** Square = new char* [n];
    for (int i = 0; i < n; i++)
    {
        Square[i] = new char[n];
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> Square[i][j];
        }
    }
    char Diag = Square[0][0];
    char Rest = Square[0][1];
    //cout<<Diag<<" "<<Rest;


    for (int i = 0; i < n; i++)
    {
        if (Square[i][i] == Diag)
        {
            countDiag++; // if == n-1 then its right
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (Square[i][n - i - 1] == Diag)
        {
            countDiag++; // if == n-1 then its right
        }
    }
    countDiag--;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (Square[i][j] != Diag && Square[i][j] == Rest)
            {
                countRest++;
            }
        }
    }
    int NumDiag = 5;
    for (int i = 0; i < n - 3; i = i + 2)
    {
        NumDiag = NumDiag + 4;
    }
    int NumRest = (n * n) - countDiag;



    if (countDiag == NumDiag && countRest == NumRest)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}