#include<iostream>
using namespace std;
void merge(int a[],int b[],int c[], int n) 
{
    int i,j,k;
    for(i=0,j=0,k=0;i<n&&j<n;k++) {
        if(a[i]<b[j]) {
            c[k]=a[i];
            i++;
        }
        else {
            c[k]=b[j];
            j++;
        }
    }
    while(i<n) {
        c[k]=a[i];
        i++;
        k++;
    }
    while(j<n) {
        c[k]=b[j];
        j++;
        k++;
    }
}
int main() {
    int a[]={2,3,9},b[]={2,4,7},c[6];
    merge(a,b,c,3);
    for(int i=0;i<6;i++) {
        cout<<c[i]<<" ";
    }
    cout<<endl;
    return 0;
}