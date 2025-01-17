#include <iostream>
using namespace std;
//o(n^2) time complexity
int main() {
    int key, j;
    
    
    int arr[7]={1, 8, 7, 4, 3, 2,9};

  

    // Sorting logic
    for (int i = 1; i < 7; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }

        arr[j + 1] = key;//insert key once j is negativr
    }

    // Output the sorted array
    for (int i = 0; i <7; i++) {
        cout << arr[i] << " ";
    }
    

    return 0;
}


