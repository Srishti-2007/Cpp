#include<iostream>
using namespace std;
int add(int,int,int=0);
int main() {
    int a,b,c;
    cout<<"Enters two numbers ";
    cin>>a>>b;
    cout<<"sum is "<<add(a,b);
    cout<<"enter three number";
    cin>>a>>b>>c;
    cout<<"sum is "<<add(a,b,c);
    cout<<endl;
    return 0;
}
int add(int x , int y, int z) {
    return x+y+z;
}