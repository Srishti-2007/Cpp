#include <iostream>
using namespace std;

class time {
private:
    int hr, min, sec;

public:
    // Method to set time
    void settime(int hr, int min, int sec) {
        this->hr = hr;
        this->min = min;
        this->sec = sec;
    }

    // Method to display time
    void gettime() const {
        cout << "hr = " << hr << ", min = " << min << ", sec = " << sec << endl;
    }

    // Setter methods
    void sethr(int hr) { this->hr = hr; }
    void setmin(int min) { this->min = min; }
    void setsec(int sec) { this->sec = sec; }

    // Getter methods
    int gethr() const { return hr; }
    int getmin() const { return min; }
    int getsec() const { return sec; }

    // Overload less-than operator for comparison
    bool operator<(const time& t) const {
        if (hr < t.hr)
            return true;
        else if (hr == t.hr && min < t.min)
            return true;
        else if (hr == t.hr && min == t.min && sec < t.sec)
            return true;
        return false;
    }
};

// Function to create an array of time objects
time* createtimearray(int size) {
    return new time[size];
}

// Function to sort an array of time objects
void sorttime(time t[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (t[j + 1] < t[j]) {
                time temp = t[j];
                t[j] = t[j + 1];
                t[j + 1] = temp;
            }
        }
    }
}

// Function to display an array of time objects
void showarraytime(time t[], int size) {
    for (int i = 0; i < size; i++) {
        t[i].gettime();
    }
}

int main() {
    int size = 3;
    time* tArray = createtimearray(size);

    // Set time for the array of objects
    tArray[0].settime(5, 30, 45);
    tArray[1].settime(2, 15, 10);
    tArray[2].settime(4, 20, 50);

    // Display unsorted times
    cout << "Unsorted times:" << endl;
    showarraytime(tArray, size);

    // Sort the time objects
    sorttime(tArray, size);

    // Display sorted times
    cout << "Sorted times:" << endl;
    showarraytime(tArray, size);

    // Clean up dynamically allocated memory
    delete[] tArray;

    return 0;
}
