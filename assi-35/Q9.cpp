#include <iostream>
using namespace std;

class Array {
private:
    int *p;    // Pointer to store array
    int size;  // Size of the array

public:
    // Constructor - Allocates memory
    Array(int s) {
        size = s;
        p = new int[size];  // Dynamically allocate memory
    }

    // Overloading subscript operator []
    int& operator[](int index) {
        return p[index];  // Access element at index
    }

    // Destructor - Frees memory
    ~Array() {
        delete[] p;  // Free allocated memory
    }
};

int main() {
    // Step 1: Create an array of size 5
    Array arr(5);

    // Step 2: Assign values using subscript operator
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;  // Assigning values like 0, 10, 20, 30, 40
    }

    // Step 3: Print values
    cout << "Array Elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;  // Destructor will be automatically called here
}
