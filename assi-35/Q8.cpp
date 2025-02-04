#include <iostream>
using namespace std;

class Distance {
private:
    int km, m, cm;  // Kilometers, meters, and centimeters

public:
    // Constructor to initialize distance
    Distance() {
        km = 0;
        m = 0;
        cm = 0;
    }

    // Function to input distance
    void inputDistance() {
        cout << "Enter kilometers: ";
        cin >> km;
        cout << "Enter meters: ";
        cin >> m;
        cout << "Enter centimeters: ";
        cin >> cm;
        normalize();
    }

    // Function to normalize the distance
    void normalize() {
        if (cm >= 100) {
            m += cm / 100;
            cm %= 100;
        }
        if (m >= 1000) {
            km += m / 1000;
            m %= 1000;
        }
    }

    // Overloading '+' operator to add two Distance objects
    Distance operator+(const Distance &d) {
        Distance sum;
        sum.km = km + d.km;
        sum.m = m + d.m;
        sum.cm = cm + d.cm;
        sum.normalize();  // Ensure proper format after addition
        return sum;
    }

    // Overloading pre-decrement (--obj)
    void operator--() {
        if (cm > 0) {
            cm--;
        } else if (m > 0) {
            m--;
            cm = 99;
        } else if (km > 0) {
            km--;
            m = 999;
            cm = 99;
        }
    }

    // Overloading post-decrement (obj--)
    void operator--(int) {
        --(*this);  // Use pre-decrement logic
    }

    // Function to display the distance
    void displayDistance() {
        cout << km << " km " << m << " m " << cm << " cm" << endl;
    }
};

int main() {
    // Create two Distance objects
    Distance d1, d2, sum;

    // Input distances
    cout << "Enter first distance:\n";
    d1.inputDistance();

    cout << "\nEnter second distance:\n";
    d2.inputDistance();

    // Print original distances
    cout << "\nFirst Distance: ";
    d1.displayDistance();
    cout << "Second Distance: ";
    d2.displayDistance();

    // Adding two distances
    sum = d1 + d2;
    cout << "\nAfter Addition: ";
    sum.displayDistance();

    // Pre-decrement (--d1)
    --d1;
    cout << "\nAfter Pre-Decrement (--d1): ";
    d1.displayDistance();

    // Post-decrement (d1--)
    d1--;
    cout << "\nAfter Post-Decrement (d1--): ";
    d1.displayDistance();

    return 0;
}
