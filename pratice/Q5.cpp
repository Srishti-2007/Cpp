#include<iostream>
using namespace std;
class number{
    private:
    int x,y,z;
    public:
    void setdata(int a,int b, int c) {
        x=a;
        y=b;
        z=c;
    }
    void getdata() {
        cout<<"x="<<x<<" "<<"y="<<y<<" "<<"z="<<z<<endl;
    }
    number operator-();
};
number number::operator-() {
    number temp;
    temp.x=-x;
    temp.y=-y;
    temp.z=-z;
    return temp;
}
int main() {
    number n1,n2;
    n1.setdata(1,2,4);
    n2=-n1;
    n2.getdata();
    return 0;
}