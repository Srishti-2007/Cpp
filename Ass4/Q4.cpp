#include<iostream>
using namespace std;
class circle {
    private:
    int radius;
    public:
     void set_radius(int r) {
        radius =r;
     }
     void display_time() {
        cout<<"radius="<<radius<<endl;
     }
     float getarea() {
        return 3.14*radius*radius;
     }
     float getcircumference() {
        return 2*3.14*radius;
     }

};
int main() {
    circle c1,c2;
    c1.set_radius(3);
    c2.set_radius(12);
    c1.display_time();
    cout<<c2.getarea();
}
