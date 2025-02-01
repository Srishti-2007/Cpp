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
class shape:public coordinate{
    private:
    string shapename;
    public:
    void setshapename(string s) {
        shapename=s;
    }
    string getshapename() {
        return shapename;
    }
};
class straight_line:public shape {
    private:
    coordinate A,B;
    public:
    void setline(coordinate A,coordinate B) {
        this->A=A;
        this->B=B;
    }
    float get_dist() {
       return A.get_dist(B);
    }
};
int main() {
    coordinate p1, p2;
    straight_line line1;

    // Set coordinates for two points
    p1.setcoordinate(3, 4);
    p2.setcoordinate(3,4);

    // Display distances from origin
    cout << "Distance of p1 from origin: " << p1.get_dist() << endl;
    cout << "Distance of p2 from origin: " << p2.get_dist() << endl;
// Set line with two points
    line1.setline(p1, p2);

    // Display distance between the two points
    cout << "Distance between p1 and p2 (length of line): " << line1.get_dist() << endl;

    return 0;
}