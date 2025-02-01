#include<iostream>
using namespace std;
// fibanoic series : 0 1 1 2 3 5 8 13 21
bool isFib(int num) {
    int a=-1,b=1,c=0;
    while(c<num) {
        c=a+b;
        if(num==c) {
            return true;
        }
        a=b;
        b=c;
    }
    return false;
}
int main() {
    int n=3;
    cout<<isFib(n);
    return 0;
}