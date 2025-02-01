#include<iostream>
using namespace std;
#include<string.h>
#include<stdio.h>
struct book 
{
    int bookid;
    char title[20];
    float price;
};
struct book inputbook();
void displaybook(struct book);
int main() {
    struct book b1 = {1,"Drilling C",345.0};
    struct book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"Hello C");
    b2.price=275.0;
    b3=inputbook();
    displaybook(b3);
}
struct book inputbook() {
    struct book b;
    cout<<"Enter bookid,title and price : ";
    cin>>b.bookid;
    fflush(stdin);
    fgets(b.title,20,stdin);
    cin>>b.price;
}
void displaybook( struct book b) {
    cout<<b.bookid<< " " <<b.title<< " " <<b.price<<endl;
}