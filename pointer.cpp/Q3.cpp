#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;

class String {
private:
    char *s;
    int length;

protected:
    // Helper function to calculate length
    int len(char str[]) {
        int l;
        for (l = 0; str[l]; l++);
        return l;
    }

public:
    // Constructor
    String() : s(nullptr), length(0) {}

    // Function to take input dynamically
    char* input_string() {
        char ch, *p = NULL, *q = NULL;
        int size = 1;
        cout << "Enter text: ";
        p = (char *)malloc(size);
        p[0] = '\0';

        while (1) {
            ch = getchar();
            if (ch == '\n') break;
            q = (char *)malloc(size + 1);
            strcpy(q, p);
            q[size - 1] = ch;
            q[size] = '\0';
            free(p);
            p = q;
            size++;
        }
        return p;
    }

    // Function to set the string
    void set_string(char arr[]) {
        if (s != nullptr) {
            delete[] s;
            length = 0;
        }
        length = len(arr);
        s = new char[length + 1];
        strcpy(s, arr);
    }

    // Function to get the string
    char* get_string() {
        return s;
    }

    // Function to get the length of the string
    int get_length() {
        return length;
    }

    // Function to convert string to uppercase
    void upper() {
        for (int i = 0; i < length; i++) {
            if (s[i] >= 'a' && s[i] <= 'z')
                s[i] -= 32;
        }
    }

    // Function to convert string to lowercase
    void lower() {
        for (int i = 0; i < length; i++) {
            if (s[i] >= 'A' && s[i] <= 'Z')
                s[i] += 32;
        }
    }

    // Destructor
    ~String() {
        if (s != nullptr) {
            delete[] s;
        }
        length = 0;
    }
};

int main() {
    // Create a String object
    String str;

    // Step 1: Input string dynamically
    char* userInput = str.input_string();

    // Step 2: Set the string in the object
    str.set_string(userInput);

    // Free memory allocated by input_string
    free(userInput);

    // Step 3: Print the original string
    cout << "Original String: " << str.get_string() << endl;

    // Step 4: Get and print the string length
    cout << "String Length: " << str.get_length() << endl;

    // Step 5: Convert to uppercase and print
    str.upper();
    cout << "String in Uppercase: " << str.get_string() << endl;

    // Step 6: Convert to lowercase and print
    str.lower();
    cout << "String in Lowercase: " << str.get_string() << endl;

    return 0;
}
