#include<iostream>
using namespace std;
class matrix{
    private:
    int M[3][3];
    public:
    void inputdata() {
        cout<<"Enter 9 numbers for matrix : ";
        for(int i=0;i<=2;i++) {
            for(int j=0;j<=2;j++) {
                cin>>M[i][j];
            }
        }
    }
    void showdata() {
        for(int i=0;i<=2;i++){
            for(int j=0;j<=2;j++) {
                cout<<M[i][j]<<" "<<endl;
            }
        }
    }
    matrix operator+(matrix);
    matrix operator-(matrix);
    matrix operator*(matrix);
};
matrix matrix::operator+(matrix X) {
    matrix temp;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            temp.M[i][j]=M[i][j]+X.M[i][j];
        }
    }
    return temp;
}
matrix matrix::operator-(matrix X) {
    matrix temp;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            temp.M[i][j]=M[i][j]-X.M[i][j];
        }
    }
    return temp;
}
matrix matrix::operator*(matrix X) {
    matrix temp;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
             int sum=0;
             for(int k=0;k<=2;k++) {
                sum=sum+M[i][k]*X.M[k][j];
             }
            temp.M[i][j]=sum;
        }
    }
    return temp;
}

int main() {
    matrix M,A,C,D;
    M.inputdata();
    A.inputdata();
    C=M*A;
    C.showdata();
    //D=M-A;
    //D.showdata();
    return 0;
}