#include<iostream>
using namespace std;
class complex 
{
    private:
    int a,b;
    public:
    void setdata(int x,int y)
    {
        a=x;
        b=y;
    }
    void showdata();
    //{
       // cout<<"\na="<<a<<" b="<<b;
   // }
};
void complex::showdata()
{
        cout<<"\na="<<a<<" b="<<b;
    }


int main() {
    complex c1,c2;
    c1.setdata(3,4);
    c2.setdata(5,6);
}
