#include<iostream>
using namespace std;
class time 
{
    private:
    int h,m,s;
    public:
    void settime(int a,int b ,int c) {
        h=a;
        m=b;
        s=c;
    }
    void showtime() {
        cout<<"hour="<<" "<<h<<"minute="<<" "<<m<<"second="<<" "<<s<<endl;
    }
    time add(time T) {
       time temp;
       temp.h=h+T.h;
       temp.m=m+T.m;
       temp.s=s+T.s;
       return temp;
    }
    bool is_greater(time T) {
        if(h>T.h)
        return true;
        else if(h<T.h)
        return false;
        else if(m>T.m)
        return true;
        else if(m<T.m)
        return false;
        else if(s>T.s)
        return true;
        else
        return false;
    }
    void normalize() {
        m=m+s/60;
        s=s%60;
        h=h+m/60;
        m=m%60;
    }
};
int main() {
    time t1,t2,t3,t4;
    t1.settime(2,20,22);
    t2.settime(3,30,33);
    t1.showtime();
    cout<<endl;
    cout<<t1.is_greater(t2);
    cout<<endl;
    t3=t1.add(t2);
    t3.showtime();
    cout<<endl;
    return 0;
}