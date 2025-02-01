#include<iostream>
using namespace std;
class roomtype{
    private:
    int roomno;
    string roomtypee;
    bool roomac;
    float price;
    public:
    roomtype(int r,string rt,bool rc,float p){
        roomno=r;
        roomtypee=rt;
        roomac=rc;
        price=p;
    }
    void display() {
        cout<<"roomno="<<roomno<<" "<<"roomtype"<<roomtypee<<" roomac="<<roomac<<" "<<"price="<<price<<endl;
    }
};
int main() {
     roomtype r(12,"marriage_room",1,20045);
     r.display();
     return 0;
}
