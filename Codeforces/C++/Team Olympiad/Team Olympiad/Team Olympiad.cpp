#include <iostream>
#include <string>
using namespace std;

int main() {
    int NumberOfStudents;
    cin >> NumberOfStudents;
    int* GiftedSkil = new int[NumberOfStudents];
    int** Saver = new int* [NumberOfStudents / 3];  // Maximum possible number of teams

    for (int i = 0; i < NumberOfStudents / 3; ++i) {
        Saver[i] = new int[3];
    }

    for (int i = 0; i < NumberOfStudents; ++i) {
        cin >> GiftedSkil[i];
    }

    // Check if we have at least one of each skill 1, 2, 3
    bool has1 = false, has2 = false, has3 = false;
    for (int i = 0; i < NumberOfStudents; ++i) {
        if (GiftedSkil[i] == 1) has1 = true;
        if (GiftedSkil[i] == 2) has2 = true;
        if (GiftedSkil[i] == 3) has3 = true;
    }

    if (!(has1 && has2 && has3)) {
        cout << 0 << endl;
        delete[] GiftedSkil;
        for (int i = 0; i < NumberOfStudents / 3; ++i) {
            delete[] Saver[i];
        }
        delete[] Saver;
        return 0;
    }

    int skill1Count = 0, skill2Count = 0, skill3Count = 0;
    int* skill1Indices = new int [NumberOfStudents], *skill2Indices = new int [NumberOfStudents], *skill3Indices = new int [NumberOfStudents];
    int teamCount = 0;

    for (int i = 0; i < NumberOfStudents; ++i) {
        if (GiftedSkil[i] == 1) {
            skill1Indices[skill1Count++] = i + 1;
        }
        else if (GiftedSkil[i] == 2) {
            skill2Indices[skill2Count++] = i + 1;
        }
        else if (GiftedSkil[i] == 3) {
            skill3Indices[skill3Count++] = i + 1;
        }
    }

    while (skill1Count > 0 && skill2Count > 0 && skill3Count > 0) {
        Saver[teamCount][0] = skill1Indices[--skill1Count];
        Saver[teamCount][1] = skill2Indices[--skill2Count];
        Saver[teamCount][2] = skill3Indices[--skill3Count];
        teamCount++;
    }

    cout << teamCount << endl;
    for (int i = 0; i < teamCount; ++i) {
        cout << Saver[i][0] << " " << Saver[i][1] << " " << Saver[i][2] << endl;
    }

    delete[] GiftedSkil;
    for (int i = 0; i < NumberOfStudents / 3; ++i) {
        delete[] Saver[i];
    }
    delete[] Saver;

    return 0;
}
