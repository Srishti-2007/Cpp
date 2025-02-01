#include<iostream>
using namespace std;
int main() {
    int i=1,fact=0,n;
    cout<<"emter a number";
    cin>>n;
    while(i<=n) {
        if(n%i==0) {
        fact++; }
        i++;
    }
    if(fact==2) {
        cout<<"prime";
    }
    else
    cout<<"not prime";
    return 0;
}