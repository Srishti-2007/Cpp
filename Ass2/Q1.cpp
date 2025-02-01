#include<iostream>
using namespace std;
int highestvaluedigit(int x) {
    int maxdigit=-1,r;
    while(x) {
        r=x%10;
        if(maxdigit<r){
            maxdigit=r;
            x/10;
        }
    }
    return maxdigit;

}