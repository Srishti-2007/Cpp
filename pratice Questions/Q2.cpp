#include<iostream>
using namespace std;
class circle{
    private:
    float radius;
    public:
    void set_radius(int r) {
        radius=r;
    }
    float get_radius() {
        return radius;
    }
    float get_area(){
        return 3.14*radius*radius;
    }
};
class thickcircle:public circle{
    private:
     float thickness;
    public:
    void set_thickness(int t) {
        thickness =t;
    }
    float get_thickness() {
        return thickness;
    }
    float get_area() {
        return (3.14*(get_radius()+thickness)*(get_radius()+thickness)-(get_radius()*get_radius()));
    }
};
int main() {
    thickcircle t;
    t.set_radius(5);
    t.set_thickness(2);
    cout<<"radius ="<<t.get_radius()<<endl;
    cout<<"thickness ="<<t.get_thickness()<<endl;
    cout<<"area ="<<t.get_area()<<endl;
    return 0;
}