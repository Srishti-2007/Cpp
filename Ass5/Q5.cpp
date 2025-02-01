#include<iostream>
using namespace std;
class matrix {
    private:
    int A[3][3];
    public:
    void setmatrix(int a[][3]) {
        for(int i=0;i<2;i++) 
        {
            for(int j=0;j<3;j++) 
            {
                A[i][j]=a[i][j];
            }
        }
    }
    void printmatrix() {
        for(int i=0;i<2;i++) 
        {
            for(int j=0;j<3;j++) 
                cout<<A[i][j]<<" ";
                cout<<endl;
        }
    }
    matrix add(matrix m) {
        matrix temp;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                temp.A[i][j]=A[i][j]+m.A[i][j];
            }
        }
        return temp;
    }
    matrix substract(matrix m) {
        matrix temp;
        for(int i=0;i<3;i++) {
            for(int j=0;j<3;j++) {
                temp.A[i][j]=A[i][j]-m.A[i][j];
            }
        }
        return temp; }
};
   