#include <iostream>
using namespace std;

int main() {
    int NumberOfOranges;
    int MaxSize;
    int MaxWaste;
    int CurrentWaste = 0;
    int counter = 0;
    cin >> NumberOfOranges >> MaxSize >> MaxWaste;
    int* SizeOfOranges = new int[NumberOfOranges];
    for (int i = 0; i < NumberOfOranges; i++)
    {
        cin >> SizeOfOranges[i];
    }
    for (int j = 0; j < NumberOfOranges; j++)
    {
        if (SizeOfOranges[j] <= MaxSize)
        {
            CurrentWaste = CurrentWaste + SizeOfOranges[j];
        }
        if (CurrentWaste > MaxWaste)
        {
            CurrentWaste = 0;
            counter++;
        }
    }
    cout << counter;


    return 0;
}