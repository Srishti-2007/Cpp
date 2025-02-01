#include<iostream>
using namespace std;
#include<string.h>
struct book 
{
    int bookid;
    char title[20];
    float price;
    void displaybook() 
  {
    cout<<bookid<< " " <<title<< " " <<price<<endl;
  }
   void inputbook() {
    cout<<"Enter bookid,title and price : ";
    cin>>bookid;
    cin.ignore();
    cin.getline(title,20);
    cin>>price;
}
};
int main() {
     book b1 = {1,"Drilling C",345.0};
     book b2,b3;
    b2.bookid=2;
    strcpy(b2.title,"Hello C");
    b2.price=275.0;
    b3.inputbook();
    b3.displaybook();
}