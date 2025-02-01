#include<iostream>
using namespace std;

void sortarray(int arr[], int n, bool asc = true) {
    int i, r, t;
    if (asc) {
        // Sorting in ascending order (Bubble Sort)
        for (i = 0; i < n - 1; i++) {  // Loop through all elements
            for (r = 0; r < n - 1 - i; r++) {  // Compare adjacent elements
                if (arr[r] > arr[r + 1]) {  // If arr[r] > arr[r + 1], swap them
                    t = arr[r];
                    arr[r] = arr[r + 1];
                    arr[r + 1] = t;
                }
            }
        }
    } else {
        // Sorting in descending order (Bubble Sort)
        for (i = 0; i < n - 1; i++) {  // Loop through all elements
            for (r = 0; r < n - 1 - i; r++) {  // Compare adjacent elements
                if (arr[r] < arr[r + 1]) {  // If arr[r] < arr[r + 1], swap them
                    t = arr[r];
                    arr[r] = arr[r + 1];
                    arr[r + 1] = t;
                }
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 7, 0, 1, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Array in ascending order: ";
    sortarray(arr, n, true);  // Call sortarray to sort in ascending order
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Array in descending order: ";
    sortarray(arr, n, false);  // Call sortarray to sort in descending order
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
