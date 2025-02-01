#include<iostream>
using namespace std;
int lcm(int a, int b , int c) {
    int l;
    for(l=a>b?a>c?a:c:b>c?b:c;l<=a*b*c;l++) {
        if(l%a==0&&l%b==0&&l%c==0)
        return l;
    }
    return 1;
} 
int main() {
    cout<<lcm(2,4,6);
    return 0;
}