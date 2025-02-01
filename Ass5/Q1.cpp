#include<iostream>
using namespace std;
class complex {
    private: 
    int a,b;
    public:
    void setdata(int,int);
    void showdata();
    complex add(complex);
    complex substract(complex);
    complex multiply(complex);
};
void complex::setdata(int x,int y) {
    a=x;
    b=y;
}
void complex::showdata() {
    cout<<"real"<<" "<<a<<endl<<"imaginary"<<" "<<b;
}
complex complex::add(complex C) {
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;
}
complex complex::substract(complex C) {
    complex temp;
    temp.a=a-C.a;
    temp.b=b-C.b;
    return temp;
}
complex complex::multiply(complex C) {
    complex temp;
    temp.a=a*C.a;
    temp.b=b*C.b;
    return temp;
}
int main() {
    complex c1,c2,c3,c4,c5;
    c1.setdata(2,3);
    c2.setdata(2,4);
    c1.showdata();
    cout<<endl;
    c3=c1.add(c2);
    c3.showdata();
    cout<<endl;
    c4=c3.substract(c1);
    cout<<endl;
    c4.showdata();
    c5=c1.multiply(c2);
    cout<<endl;
    c5.showdata();
    return 0;
}
