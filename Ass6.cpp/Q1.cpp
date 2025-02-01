#include<iostream>
using namespace std;
class cuboid {
    private:
    int length,breath,height;
    public:
    cuboid(int l, int b, int h) {
        length=l;
        breath=b;
        height=h;
    }
    void showdata() {
        cout<<"length="<<length<<" "<<"breath="<<breath<<" "<<"height="<<height<<endl;
    }
};
int main() {
    cuboid c(1,2,3);
    c.showdata();
}
