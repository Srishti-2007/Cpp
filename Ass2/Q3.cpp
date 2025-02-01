#include<iostream>
using namespace std;
double power(double x, double y) {
    if(y>0) {
        return(x*power(x,y-1));
    } else if(y<0) {
        return 1/x*power(x,y+1);
    } else
    return 1;
}
int main() {
    cout<<power(2,2);
    cout<<endl;
    return 0;
}