#include<iostream>
using namespace std;
void swap_ref(int &a,int &b) { //call by reference
    int t;
    t=a;
    a=b;
    b=t;
}
int main() {
    int a=3,b=5;
    swap_ref(a,b);
    cout<<a<<endl<<b;
    return 0;
}