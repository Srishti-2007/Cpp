#include <iostream>
using namespace std;

class person {
private:
    string name;
    int age;

protected:
    void set_name(string n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }
};

class employee : public person {
private:
    double salary;

public:
    // Method to set employee details
    void set_employee(string s, int a, double d) {
        set_name(s); // Setting name using protected setter
        set_age(a);  // Setting age using protected setter
        salary = d;  // Assigning salary directly
    }

    // Method to display employee details
    void get_employee() { // FIX: It should be a function, not a variable
        cout << "Name = " << get_name() << endl;
        cout << "Age = " << get_age() << endl;
        cout << "Salary = " << salary << endl;
    }
};

int main() {
    employee e1, e2;

    // Setting values for e1
    e1.set_employee("Srishti", 17, 34500);  
    e1.get_employee(); // Displaying details

    // Setting values for e2
    e2.set_employee("karina", 22, 40000);
    e2.get_employee();

    return 0;
}
