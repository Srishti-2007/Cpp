#include<iostream>
using namespace std;
class person{
    private:
    string name;
    int age;
    protected:
    void set_name(string n){
        name=n;
    }
    void set_age(int a) {
        age=a;
    }
    string get_name() {
        return name;
    }
    int get_age() {
        return age;
    }
};
class employee:public person{
    private:
    double salary;
    public:
    void set_employee(string n,int a,double d) {
        set_name(n);
        set_age(a);
        salary=d;
    }
    void get_employee() {
        cout<<"name ="<<get_name()<<endl;
        cout<<"age ="<<get_age()<<endl;
        cout<<"salary ="<<salary<<endl;
    }
};
int main() {
    employee e;
    e.set_employee("hamesh" , 45, 23000);
    e.get_employee();
    return 0;
}