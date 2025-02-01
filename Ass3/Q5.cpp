#include <iostream>
using namespace std;

void primeFactorUnique(int n) {
    // Check for 2 as a factor
    if (n % 2 == 0) {
        cout << 2 << " ";
        while (n % 2 == 0) {
            n /= 2;
        }
    }

    // Check for odd factors
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0) {
                n /= i;
            }
        }
    }

    // If n is a prime number greater than 2
    if (n > 2) {
        cout << n << " ";
    }
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    cout << "Unique prime factors of " << number << " are: ";
    primeFactorUnique(number);
    cout << endl;

    return 0;
}
