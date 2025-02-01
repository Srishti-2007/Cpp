#include<iostream>
using namespace std;
float area();
int t_area();
int l_area();
int main() {
    cout<<"area of circle "<<area()<<endl;
    cout<<"area of triangle is "<<l_area()<<endl;
    cout<<"area of triangle is "<<t_area()<<endl;
    return 0;
}
float area() {
    float r;
    cout<<"Enter radius of circle: ";
    cin>>r;
    return 3.14*r*r;
}
int t_area() {
    int b,h;
    cout<<"Enter base and height of triangle: ";
    cin>>b>>h;
    return 0.5*b*h;
}
int l_area() {
    int l,b;
    cout<<"Enter length and breath of rectangle: ";
    cin>>l>>b;
    return l*b;
}
