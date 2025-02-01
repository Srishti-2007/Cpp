#include<iostream>
using namespace std;
int main() {
    int arr[3]={1,2,3};
    int i,s=0;
    for(i=0;i<3;i++) {
       s=s+arr[i];
    }
    cout<<s;
    return 0;
}