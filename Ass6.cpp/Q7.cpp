#include <iostream>
using namespace std;

class Numbers {
private:
    int size;      // Size of the array
    int *arr;      // Pointer for dynamically allocated array

public:
    // Parameterized Constructor
    Numbers(int size) {
        this->size = size;
        arr = new int[size];   // Dynamically allocate memory for the array
        for (int i = 0; i < size; i++) {
            arr[i] = i + 1;    // Initialize array with values 1, 2, 3, ...
        }
        cout << "Constructor called: Memory allocated and array initialized.\n";
    }

    // Copy Constructor
    Numbers(Numbers &N) {
        size = N.size;         // Copy size
        arr = new int[size];   // Allocate new memory
        for (int i = 0; i < size; i++) {
            arr[i] = N.arr[i]; // Copy elements from the source object
        }
        cout << "Copy Constructor called: Deep copy performed.\n";
    }

    // Destructor
    ~Numbers() {
        delete[] arr;          // Free the dynamically allocated memory
        cout << "Destructor called: Memory deallocated.\n";
    }

    // Display Function
    void display() {
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Step 1: Create an object using the constructor
    Numbers num1(5);  // num1 creates an array of size 5 and initializes it to {1, 2, 3, 4, 5}
    cout << "Array in num1: ";
    num1.display();   // Output: 1 2 3 4 5

    // Step 2: Use the copy constructor
    Numbers num2 = num1; // num2 is a deep copy of num1
    cout << "Array in num2: ";
    num2.display();      // Output: 1 2 3 4 5

    return 0;
}
