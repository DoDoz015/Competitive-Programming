#include <iostream>
#include <algorithm> 
#include <cstdlib>   
#include <climits>   

using namespace std;


int main() {
    int n;
    cin >> n;
    int* arr = new int[n];
    int count = n;



    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int min_val = *std::min_element(arr, arr + n);
    int max_val = *std::max_element(arr, arr + n);


    
    int min_count = std::count(arr, arr + n, min_val);
    int max_count = std::count(arr, arr + n, max_val);

    count = count - min_count - max_count;

    if (n == 1)
    {
        cout << "0";
    }
    else
    {
        if (min_val == max_val)
        {
            cout << "0";
        }
        else {
            cout << count;
        }
    }
    delete[] arr;
    return 0;
}