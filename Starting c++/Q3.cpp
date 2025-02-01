#include<iostream>
using namespace std;
class item
{
    private:
    int a,b;
    static int k;
    public:
    int get_a(int x) {a=x; return a;} //instance member variable
     int get_b(int y) {b=y; return b;}
    static int get_k(int m) {k=m; return k;} //static member variable
    //if we define with static then it is accesible on both
    //what if we do not use static keyword then it will shoe eror if we use class item
};
int item::k;
int main() 
{
    item i1,i2;
    cout<<i1.get_a(2);
    cout<<i1.get_k(5);
    return 0;
}