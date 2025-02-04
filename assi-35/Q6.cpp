#include<iostream>
using namespace std;
class fraction{
    private:
    long num,denm;
    public:
    fraction(int n=0,int d=0) {
        num=n;
        denm=d;
    }
    void getdata() {
        cout<<"num="<<num<<" "<<"denm="<<denm<<endl;
    }
    long lcm(int x,int y) {
        int L;
        for(L=x>y?x:y;L<=x*y;L++) {
            if(L%x==0&&L%y==0) 
            return L;
        }
    }
    fraction operator+(fraction f){
        long L=lcm(num,f.denm);
        fraction temp;
        temp.num=num*(denm/L)+f.num*(f.denm/L);
        temp.denm=L;
        return temp;
    }
    bool operator<(fraction f){
        return (num*f.denm<f.num*denm);
    }
};
int main() {
    fraction f1(2,4),f2(2,4),f3;
    f3=f1+f2;
    f3.getdata();
    return 0;
}