#include<iostream>
using namespace std;
class time {
    private:
    int hr,min,sec;
    public:
     void set_time(int x, int y, int z) {
        hr=x; min=y; sec=z;
     }
     void display_time() {
        cout<<hr<<" "<<min<<" "<<sec<<endl;
     }
};
int main() {
    time t1,t2;
    t1.set_time(3,45,23);
    t2.set_time(12,1,34);
    t2.display_time();
}
