#include<iostream>
using namespace std;
class complex 
{
    private:
    int a,b;
    public:
    void setdata(int,int);
    void showdata();
    complex add(complex);
};
void complex::setdata(int x,int y)
{
    a=x;
    b=y;   //if we define function outside the class and said to be member variable them we should define with ( class::) this is and define declaration of this function into class is called instance member variable.
}
void complex::showdata()
{
    cout<<"\na="<<a<<" b="<<b;
}
complex complex::add(complex C) //addition of two objects
{
    complex temp;
    temp.a=a+C.a;
    temp.b=b+C.b;
    return temp;   //it also return a object 
}
int main() 
{
    complex c1,c2,c3;
    c1.setdata(1,2);
    c2.setdata(3,4);
    c3=c1.add(c2);   //c1 is caller object hai jisne apne add method ko call kiya, c2 usme as a argument pass kiya, add function ne jo return kiya vo c3 mai assign krdiya.
    c3.showdata();
    return 0;
}