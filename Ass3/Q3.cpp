#include<iostream>
using namespace std;
void rotatearray(int a[],int N,int d=1,int n=1);
void rotatearray(int a[],int N,int d,int n){
    int i,t;
    if(d==1) {
        while(n) {
            t=a[n-1];
            for(i=N-1;i>=1;i--)
                a[i]=a[i-1];
                a[0]=t;
                n=n-1;
        }
    }
    else {
        while(n) {
            for(i=0;i<=n-2;i++)
            a[i]=a[i+1];
            a[N-1]=t;
            n=n-1;
        }
    }

}
int main() {
    int a[]={1,2,3,4,5};
    int N=5;
    rotatearray(a,N,1,2);
    cout<<"right rotation";
    for(int i=0;i<N;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //left rotation 
    rotatearray(a,N,-1,2);
    cout<<"left rotation";
    for(int i=0;i<N;i++) {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}