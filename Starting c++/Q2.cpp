#include<iostream>
using namespace std;
class complex {
    private:
    int a,b;
    public:
    void setdata(int,int);
    void showdata();
};
void complex::setdata(int x , int y)
{
    a=x;
    b=y;
}
void complex::showdata() {
    cout<<"\na="<<a<<" b="<<b;
}
int main() {
    complex c1,c2;
    c1.setdata(1,2);
    c2.setdata(4,5);
    c1.showdata();
    cout<<endl;
    return 0;
}