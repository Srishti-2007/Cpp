#include<iostream>
using namespace std;
class item 
{
    private:
    int a,b; // Instance member variable or instance variable
    static int k;
    public:
    void set_a(int x) {
        a=x;      //instance method
    }
    void set_b(int y)
    {
        b=y;     //Instance method
    }
    int get_a() { return a;} //Instance method
    int get_b() {return b;} //Instance method
    void set_k(int m) {k=m;} //instance method
    int get_k() {return k;} //instance method
};
int item::k; //defining static variable
int main() 
{
    item i1,i2; //define Objects
    i1.set_a(3); // using function define value a
    cout<<i1.get_a(); //using function get value a
    cout<<endl;
    i1.set_k(4); 
    cout<<i1.get_k();
    return 0;
}