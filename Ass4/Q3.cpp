#include<iostream>
using namespace std;
class date {
    private:
    int d,m;
    double y;
    public:
     void setdate(int a, int b, double c) {
        d=a; m=b; y=c;
     }
     void getdate() {
        cout<<"d="<<d<<" "<<"m="<<m<<" "<<"y="<<y<<endl;
     }
     void getdatapattern1() {
          cout<<d<<"-"<<m<<"-"<<y<<endl;
     }
     void getdatapattern2() {
        char *str[]={"jan","feb","march","april","may","june","july","aug","sept","oct","num","dec"};
          cout<<d<<"-"<<str[m-1]<<"-"<<y<<endl;
     }

};
int main() {
    date d1,d2;
    d1.setdate(3,2,23);
    d2.setdate(12,3,34);
    d1.getdate();
    d2.getdatapattern2();
}
