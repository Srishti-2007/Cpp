#include<iostream>
#include<math.h>
using namespace std;
class coordinate{
    private:
    int x,y;
    public:
    void set_coordinate(int x,int y) {
         this->x =x;
         this->y=y;
    }
    float distance() {
        return sqrt((x*x)+(y*y));
    }
    float distance(coordinate c) {
        return sqrt((x-c.x)*(x-c.x)+(y-c.y)*(y-c.y));
    }
};
int main() {
    coordinate p1,p2;
    p1.set_coordinate(2,2);
    p2.set_coordinate(3,3);
    cout<<"Distance from origin "<<p1.distance()<<endl;
    cout<<"distance between two points "<<p1.distance(p2)<<endl;
    return 0;
}