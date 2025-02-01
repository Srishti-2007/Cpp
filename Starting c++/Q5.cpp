#include<iostream>
using namespace std;
class item 
{
    public:
    int a,b; // Instance member variable
    static int k; //static member variavle or class variable
};
int item::k=2;//definig static member variable or in same time we also initialize this
int main() 
{
    item i1,i2; //define Objects
   // item::k=12;  //withot using operator,we also initialize ihis
   //i1.k=10; //we also initialize using this method
    cout<<"k="<<i2.k; //when we not initalise, it contain garvage values.
    cout<<endl;
    return 0;
}