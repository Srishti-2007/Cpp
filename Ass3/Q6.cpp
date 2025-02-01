#include<iostream>
using namespace std;
int hcf(int a,int b) {
    int h;
    for(h=a<b?a:b;h>=1;h--)
    {
        if(a%h==0&&b%h==0)
        return h;
    }
    return 1;
}
int main() {
    cout<<hcf(2,6);
    return 0;
}