#include <iostream>
using namespace std;

class String {
private:
    char* str;       // Pointer to hold the string
    int length;      // Length of the string

public:
    // Constructor - initializes empty string
    String() {
        str = nullptr;
        length = 0;
    }

    // Method to input string dynamically
    void inputString() {
        char temp[100];  // Temporary buffer
        cout << "Enter a string: ";
        cin.getline(temp, 100);

        // Calculate length of input string
        length = 0;
        while (temp[length] != '\0') {
            length++;
        }

        // Allocate exactly enough memory
        str = new char[length + 1];  // +1 for null terminator

        // Copy string from buffer to dynamic array
        for (int i = 0; i <= length; i++) {
            str[i] = temp[i];
        }
    }

    // Convert string to uppercase
    void toUpperCase() {
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
        }
    }

    // Convert string to lowercase
    void toLowerCase() {
        for (int i = 0; i < length; i++) {
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32;
            }
        }
    }

    // Print the string
    void printString() {
        cout << "String: " << str << endl;
    }

    // Return the string
    char* getString() {
        return str;
    }

    // Return length of string
    int getLength() {
        return length;
    }

    // Destructor - free allocated memory
    ~String() {
        if (str != nullptr) {
            delete[] str;
        }
    }
};

int main() {
    // Create string object
    String myString;

    // Input string
    myString.inputString();
    
    // Print original string and length
    cout << "\nOriginal ";
    myString.printString();
    cout << "Length: " << myString.getLength() << endl;

    // Convert to uppercase and print
    myString.toUpperCase();
    cout << "\nAfter converting to uppercase: ";
    myString.printString();

    // Convert to lowercase and print
    myString.toLowerCase();
    cout << "\nAfter converting to lowercase: ";
    myString.printString();

    return 0;
}