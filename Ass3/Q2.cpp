#include <iostream>
#include <cstring>
using namespace std;

void sortstring(char a[], int n, bool asc = true) {
    int i, r;
    char temp;
    if (asc) {
        for (r = 0; r < n - 1; r++) {
            for (i = 0; i < n - 1 - r; i++) {
                if (a[i] > a[i + 1]) {  // Compare characters
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
    } else {
        for (r = 0; r < n - 1; r++) {
            for (i = 0; i < n - 1 - r; i++) {
                if (a[i] < a[i + 1]) {  // Compare characters
                    temp = a[i];
                    a[i] = a[i + 1];
                    a[i + 1] = temp;
                }
            }
        }
    }
}

int main() {
    char a[] = "srishti";
    int length = strlen(a);  // Find the length of the string
    sortstring(a, length, true);  // Sort in ascending order

    for (int i = 0; i < length; i++) {
        cout << a[i] << " ";
    }
    return 0;
}
