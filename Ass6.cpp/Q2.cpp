#include <iostream>
#include <string>
using namespace std;

class customer {
    private:
        int cust_id;          // Customer ID
        string email, name, mobile; // Customer details

    public:
        // Default constructor
        customer() {}

        // Parameterized constructor
        customer(int id, string e, string n, string m) {
            cust_id = id;
            email = e;
            name = n;
            mobile = m;
        }

        // Function to display customer details
        void displayCustomer() {
            cout << "Customer ID: " << cust_id << endl;
            cout << "Name: " << name << endl;
            cout << "Email: " << email << endl;
            cout << "Mobile: " << mobile << endl;
        }
};

int main() {
    // Create a customer object using the parameterized constructor
    customer c1(101, "srishti@gmail.com", "Srishti", "9876543210");

    // Display customer details
    cout << "Customer Details:" << endl;
    c1.displayCustomer();

    return 0;
}
