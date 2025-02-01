#include<iostream>
#include<math.h>
using namespace std;

class coordinate {
    private:
        int x, y;

    public:
        void setcoordinate(int x, int y) {
            this->x = x;
            this->y = y;
        }

        float get_dist() {  // Distance from origin
            return sqrt(x * x + y * y); // Corrected formula
        }

        float get_dist(coordinate c) {  // Distance between two points
            return sqrt((x - c.x) * (x - c.x) + (y - c.y) * (y - c.y));
        }
};

// ** Main Function **
int main() {
    coordinate p1, p2;
    
    // Setting coordinates
    p1.setcoordinate(3, 4);  // Point (3,4)
    p2.setcoordinate(7, 1);  // Point (7,1)

    // Display distance from origin
    cout << "Distance of p1 from origin: " << p1.get_dist() << endl;
    cout << "Distance of p2 from origin: " << p2.get_dist() << endl;

    // Display distance between p1 and p2
    cout << "Distance between p1 and p2: " << p1.get_dist(p2) << endl;

    return 0;
} 
