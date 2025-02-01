#include<iostream>
using namespace std;
class book {
    private:
    int booid;
    string title;
    float price;
    public:
    book(int b,string t,float p) {
        booid=b;
        title=t;
        price=p;
    }
    book() {}
    void display() {
        cout<<"bookid="<<booid<<" "<<"title="<<title<<" "<<"price="<<price<<endl;
    }
    void getdata(int b,string t,float p) {
        booid=b;
        title=t;
        price=p; }
};
int main() {
    book b1,b2(3,"new",67.98);
    b2.display();
    return 0;
}