#include<iostream>
using namespace std;
float volume(int r) {
    return 1.33*3.14*r*r;  //sphere
}
float volume(int r,int h) {
    return 0.33*3.14*r*r*h; //cone
}
float volume(int l,int b, int h) {
    return l*b*h; //cuboid
}
int main() {
    cout<<volume(3)<<endl;
    cout<<volume(1,2)<<endl;
    cout<<volume(1,2,4)<<endl;
    return 0;
}
