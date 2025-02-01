#include<iostream>
using namespace std;
class complex{
    private:
    int a,b;
    public:
    complex(int x,int y) {
        a=x;
        b=y;
    }
    void display() {
        cout<<"a="<<a<<" "<<"b="<<b<<endl;
    }
};
int main() {
    complex c[5]={complex(1,2),complex(3,4),complex(5,6),complex(7,8),complex(9,0)};
    for(int i=0;i<5;i++) {
        c[i].display();
    }
    return 0;
}