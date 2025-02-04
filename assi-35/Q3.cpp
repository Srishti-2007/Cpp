#include <iostream>
using namespace std;

class Time {
private:
    int hour, min, sec;

public:
    // Constructor to initialize time
    Time(int h = 0, int m = 0, int s = 0) {
        hour = h;
        min = m;
        sec = s;
    }

    // Display function
    void display() const {
        cout << hour << "h : " << min << "m : " << sec << "s" << endl;
    }

    // Overloading '>' operator to compare two time objects
    bool operator>(Time t) {
        if (hour > t.hour) return true;
        if (hour == t.hour && min > t.min) return true;
        if (hour == t.hour && min == t.min && sec > t.sec) return true;
        return false;
    }

    // Overloading pre-increment operator (++t)
    Time operator++() {
        sec++; // Increase seconds
        if (sec >= 60) { // Handle carry-over
            sec = 0;
            min++;
        }
        if (min >= 60) {
            min = 0;
            hour++;
        }
        return *this;
    }

    // Overloading post-increment operator (t++)
    Time operator++(int) {
        Time temp = *this; // Store old value
        ++(*this); // Increment using pre-increment
        return temp;
    }

    // Overloading '+' operator to add two Time objects
    Time operator+(Time t) {
        Time sum;
        
        sum.sec = sec + t.sec;
        sum.min = min + t.min;
        sum.hour = hour + t.hour;

        if (sum.sec >= 60) {
            sum.sec -= 60;
            sum.min += 1;
        }

        if (sum.min >= 60) {
            sum.min -= 60;
            sum.hour += 1;
        }

        return sum;
    }
};
int main() {
    // Creating Time objects
    Time t1(2, 45, 50);
    Time t2(3, 30, 40);

    // Comparing Time Objects
    if (t1 > t2) {
        cout << "Time 1 is greater than Time 2\n";
    } else {
        cout << "Time 2 is greater than or equal to Time 1\n";
    }

    // Incrementing Time Object
    cout << "\nBefore Pre-increment: ";
    t1.display();
    ++t1;
    cout << "After Pre-increment: ";
    t1.display();

    // Post-incrementing Time Object
    cout << "\nBefore Post-increment: ";
    t2.display();
    t2++;
    cout << "After Post-increment: ";
    t2.display();

    // Adding Two Time Objects
    Time t3 = t1 + t2;
    cout << "\nAfter Adding Time 1 and Time 2: ";
    t3.display();

    return 0;
}
