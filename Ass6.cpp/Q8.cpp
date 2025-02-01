#include<iostream>
using namespace std;
class date {
    private:
    int d,m,y;
    public:
    date(int a,int b,int c):d(a),m(b),y(c) {}
    void display() {cout<<d<<" "<<m<<" "<<y<<" "<<endl;}
};
int main() {
    date d(1,2,3);
    d.display();
    return 0;
}
