#include<iostream>
using namespace std;
class student {
    private:
    int rollno;
    string name;
    public:
    student(int r,string n) {rollno=r; name=n;}
    void display() {cout<<"rollno="<<rollno<<" "<<"name="<<name<<endl;}
};
int main() {
    student s(1,"srishti");
    s.display();
    return 0;
}