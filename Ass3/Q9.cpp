#include<iostream>
using namespace std;
void swaparray(int a[], int b[],int n) {
    int t;
    for(int i=0;i<n;i++) {
        t=a[i];
        a[i]=b[i];
        b[i]=t;
    }
}
int main() {
    int a[]={1,3,5}, b[]={2,4,6};
    swaparray(a,b,3);
    for(int i=0;i<3;i++) {
        cout<<a[i]<< " ";
    }
    cout<<endl;
    for(int j=0;j<3;j++) {
        cout<<b[j]<< " ";
    }
    cout<<endl;
    return 0;
}