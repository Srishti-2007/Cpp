#include<iostream>
using namespace std;
class circle {
    private:
    float radius;
    public:
    void setradius(float r) {radius=r;}
    float getradius() {return radius;}
     float getarea() {return (3.14*radius*radius);}
};
class thickcircle:public circle{
    private:
    float thickness;
    public:
    void setthickness(float t) {thickness=t;} 
    float getthickness() {return thickness;}
    float getarea() { 
       return  3.14*((getradius()+thickness)*(getradius()+thickness)-(getradius()*getradius())); //This formula calculates the area of the thick region of the circle, which is the area difference between a larger circle (radius + thickness) and the original circle (radius).
    } 
};
int main() {
    thickcircle t1, t2;

    // Set radius and thickness for the first thick circle
    t1.setradius(5);
    t1.setthickness(2);

    // Set radius and thickness for the second thick circle
    t2.setradius(7);
    t2.setthickness(3);

    // Display results
    cout << "Thick Circle 1:" << endl;
    cout << "Radius: " << t1.getradius() << endl;
    cout << "Thickness: " << t1.getthickness() << endl;
    cout << "Area: " << t1.getarea() << endl << endl;
    cout << "Thick Circle 2:" << endl;
    cout << "Radius: " << t2.getradius() << endl;
    cout << "Thickness: " << t2.getthickness() << endl;
    cout << "Area: " << t2.getarea() << endl;

    return 0;
}
