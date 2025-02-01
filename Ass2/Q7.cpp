 #include<iostream>
 using namespace std;
 int sum(int , int , int=0);
 int main() {
    int a,b,c;
    cout<<"Enters two numbers: ";
    cin>>a>>b;
    cout<<"sum of two numbers: "<<sum(a,b)<<endl;
    cout<<"Enters three numbers: ";
    cin>>a>>b>>c;
    cout<<"sum of three numbers: "<<sum(a,b,c)<<endl;
    return 0;
}
int sum(int x,int y,int z) {
    return x+y+z;
}