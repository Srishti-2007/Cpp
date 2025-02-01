#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
   void setdata(int a,int b)  {
        this->a=a;
        this->b=b;
    }
    void showdata() {
        cout<<"a="<<a<<"b="<<b;
    }
};
void f1() {
    complex *cptr=new complex;
    cptr->setdata(12,23);
    cptr->showdata();
    delete cptr;
}
int main() {
    cout << "Calling the function f1:" << endl;
    f1();  // Call the function `f1()` to create and manage the object
    return 0;
}
