#include<iostream>
using namespace std;
class time{
    private:
    int hr,min,sec;
    public:
    time(int h,int m,int s):hr(h),min(m),sec(s) //with the help of intisilation list
    {}
    void display() {
        cout<<"hr="<<hr<<" "<<"min="<<min<<" "<<"sec="<<sec<<endl; }
};
int main() {
    time t(1,23,1);
    t.display();
    return 0;
}