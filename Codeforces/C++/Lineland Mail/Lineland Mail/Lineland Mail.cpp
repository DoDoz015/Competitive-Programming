#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   

using namespace std;

int main() {
    int n;
    cin >> n;

    int* xAxis = new int[n];
    int* Min = new int[n];
    int* Max = new int[n];

    for (int i = 0; i < n; ++i) {
        cin >> xAxis[i];
    }

  
    sort(xAxis, xAxis + n);

   
    for (int j = 0; j < n; ++j) {
        
        if (j == 0) {
            Min[j] = abs(xAxis[j + 1] - xAxis[j]);
        }
        else if (j == n - 1) {
            Min[j] = abs(xAxis[j] - xAxis[j - 1]);
        }
        else {
            Min[j] = min(abs(xAxis[j] - xAxis[j - 1]), abs(xAxis[j + 1] - xAxis[j]));
        }

      
        Max[j] = max(abs(xAxis[j] - xAxis[0]), abs(xAxis[j] - xAxis[n - 1]));
    }

   
    for (int z = 0; z < n; ++z) {
        cout << Min[z] << " " << Max[z] << endl;
    }

    
    delete[] xAxis;
    delete[] Min;
    delete[] Max;

    return 0;
}
