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
    bool operator==(complex);
};
bool complex::operator==(complex c) {
   if(a==c.a&&b==c.b)
   return true;
   else
   return
   false;
}
int main() {
    complex c1,c2,c3;
    int i;
    c1.setdata(2,3);
    c2.setdata(4,7);
    i=c1==c2;
    cout<<" i="<<i;
    //c3.getdata();
    return 0;
}