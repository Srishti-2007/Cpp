#include<iostream>
using namespace std;
class complex{
    private:
    int x;
    public:
    void setdata(int t) {x=t;} 
    void getdata(){cout<<"x="<<x<<endl;}
    complex operator-();
};
complex complex::operator-() {
    complex temp;
    temp.x=-x;
    return temp;
}
int main() {
    complex c1,c2;
    c1.setdata(3);
    c2=-c1;//c1.operator-();
    c2.getdata();
    return 0;
}