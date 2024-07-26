#include <iostream>
#include <string>
#include <climits>

using namespace std;



void arrOfIndices(int arr[], int arr1[], int size, int k) {
    int count = 0;

    while (count < k) {
        int max = INT_MIN;
        int maxIndex = -1;

        for (int i = 1; i < size; i += 2) {
            if ((i - 1 >= 0 && arr[i] - 1 != arr[i - 1]) &&
                (i + 1 < size && arr[i] - 1 != arr[i + 1])) {
                if (arr[i] > max) {
                    max = arr[i];
                    maxIndex = i;
                }
            }
        }

        if (maxIndex != -1) {
            arr1[count] = maxIndex;
            count++;
            arr[maxIndex] = INT_MIN;
        }
        else {
            break;
        }
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    int* vertices = new int[2 * n + 1];
    int* Copy = new int[2 * n + 1];
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cin >> vertices[i];
        Copy[i] = vertices[i];
    }

    if (n == 1 && k == 1)
    {
        vertices[1]--;
    }
    else
    {

        int* indecies = new int[k];
        for (int i = 0; i < k; i++) 
        {
            indecies[i] = -1;
        }
        arrOfIndices(Copy, indecies, 2 * n + 1, k);
        for (int j = 0; j < k; j++)
        {
           
            
            

               
                vertices[indecies[j]]--;
                

            
        }
       

    }
    for (int i = 0; i < 2 * n + 1; i++)
    {
        cout << vertices[i]<<" ";
    }

    return 0;
}