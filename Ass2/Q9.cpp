#include<iostream>
using namespace std;
// *integer ke liye int vlaue use krte hai or real value ke liye double use krte hai*
int i_max(int x,int y);  
float f_max(float m,float n);
char c_max(int p,int q);
int main() {
    int a,b;
    cout<<"Enters two numbers";
    cin>>a>>b;
    cout<<"maximum of int is "<<i_max(a,b)<<endl;
    float c,d;
    cout<<"Enters two numbers";
    cin>>c>>d;
    cout<<"maximum of float is"<<f_max(c,d)<<endl;
    char e,f;
    cout<<"Enters two characters";
    cin>>e>>f;
    cout<<"maximum of char is "<<c_max(e,f)<<endl;
    return 0;
}
int i_max(int x,int y)
{
    return x>y?x:y;
}
float f_max(float m,float n)
{
    return m>n?m:n;
}
char c_max(int p,int q)
{
    return p>q?p:q;
}