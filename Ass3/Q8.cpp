#include<iostream>
#include<string.h>
using namespace std;
void printsubstring(char str[],int startindex,int endindex=-1){
    if(endindex==-1) {
        endindex=strlen(str);
    }
    for(int i=startindex;i<endindex;i++) {
        cout<<str[i];
    }
}
int main() {
    char str[]= "srishti anarina";
    printsubstring(str,4,9);
    return 0;
}