#include<iostream>
using namespace std;
class time{
    private:
    int h,m,s;
    public:
    void setdata(int x,int y,int z) {
        h=x;
        m=y;
        s=z;
    }
    void getdata() {
        cout<<"hour="<<h<<" "<<"min="<<m<<"sec="<<s<<endl;
    }
    bool operator>(time);
};
bool time::operator>(time c) {
    
    if(h>c.h)
    return true;
    else if(h<c.h)
    return false;
    else if(m>c.m)
    return true;
    else if(m<c.m)
    return false;
    else if(s>c.s)
    return true;
    else if(s<c.s)
    return false;
    else
    return true;
}
int main() {
    time c1,c2,c3;
    int i;
    c1.setdata(2,2,2);
    c2.setdata(2,2,2);
    i=c1>c2;
    cout<<"i="<<i;
    //c3.getdata();
    return 0;
}