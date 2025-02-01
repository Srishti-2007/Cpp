#include<iostream>
using namespace std;
class iteam {
    private:
    int a,b;
    public:
    void setdata(int x, int y) {
        a=x;
        b=y;
    }
    void showdata() {
        cout<<"a="<<a<<" "<<"b="<<b;
    }
    friend istream& operator>>(istream&,iteam&);
    friend ostream& operator<<(ostream&,iteam);
    friend iteam operator+( int,iteam);
    friend iteam operator-(iteam);
    friend iteam operator+(iteam,iteam);
    friend void f1(iteam);
};
ostream& operator<<(ostream &dout,iteam i) {
    dout<<"a="<<i.a<<" b="<<i.b;
    return dout;
}
 std::istream istream& operator>>(istream &din,iteam i) {
    din>>i.a>>i.b;
    return din;
}
iteam operator+(int k,iteam i) {
    iteam temp;
    temp.a=k+i.a;
    temp.b=i.b;
    return temp;
}
iteam operator-(iteam i) {
    iteam temp;
    temp.a=-i.a;
    temp.b=-i.b;
    return temp;
}
iteam operator+(iteam X,iteam Y) {
    iteam temp;
    temp.a=X.a+Y.a;
    temp.b=X.b+Y.b;
    return temp;
}
void f1(iteam i) {
    int c=i.a+i.b;
    cout<<"sum is "<<c;
}
int main() {
    iteam i1,i2,i3;
    i1.setdata(2,4);
    i2.setdata(5,5);
    cout<<"Enter an iteam : ";
    cin>>i1;
    cout<<i1;
   // i3=5+i1;
    // i3=i1+i2; //i3=operator+(i1,i2);
   //  i3.showdata();
    // f1(i1);
    return 0;
}