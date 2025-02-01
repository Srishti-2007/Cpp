#include<iostream>
using namespace std;
int pow(int x, int m) {
    int s=1;
    for(m;m>0;m--) {
        s=x*s;
    }
    return s;
}
int main() {
    int a=2,b=3;
    cout<<pow(a,b);
    return 0;
}