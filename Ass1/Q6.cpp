#include<iostream>
using namespace std;
int main() {
    int a=3,b=6;
   // a=a+b;
   // b=a-b;
   // a=a-b;
   a=a^b;
   b=a^b;
   a=a^b;
    cout<<a << " "<<b;
    return 0;
}