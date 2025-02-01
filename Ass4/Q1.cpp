#include<iostream>
using namespace std;
class complex {
    private:
    int a,b;
    public:
    void setdata(int x,int y);
    void showdata();
};
void complex::setdata( int x , int y) {
    a=x;
    b=y;
}
void complex::showdata() {
    cout<<"a="<<a<<endl<<"b="<<b;
}
int main() {
    complex c1,c2;
    c1.setdata(1,4);
    c1.showdata();
}