#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    void setdata(int x,int y) {
        a=x;
        b=y;
    }
    void getdata() {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
    complex operator*(complex);
};
complex complex::operator*(complex c) {
    complex temp;
    temp.a=a*c.a-b*c.b; //formula of iota(complex)
    temp.b=a*c.b+b*c.a;
    return temp;
}
int main() {
    complex c1,c2,c3;
    c1.setdata(2,3);
    c2.setdata(4,7);
    c3=c1*c2; //c1.operator*(c2);
    c3.getdata();
    return 0;
}