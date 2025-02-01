#include<iostream>
using namespace std;
class item 
{
    public:
    int a,b; // Instance member variable
};
int main() 
{
    item i1,i2; //define Objects
    i1.a=5; //value define in a using object
    cout<<i1.a<<endl; // print value of a
    cout<<i2.a; //when we not initalise, it contain garvage values.
    cout<<endl;
    return 0;
}