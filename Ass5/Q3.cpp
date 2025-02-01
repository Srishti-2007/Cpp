#include<iostream>
using namespace std;
class testResult {
    private:
    int roll_no,right,wrong,net_score;
    static int right_weightage,wrong_weightage;
    public:
    void setrollno(int r) {roll_no=r;}
    void setright(int r) {right=r;}
    void setwrong(int r) {wrong=r;}
    void srtnetscore(int r ) {net_score=r;}
    int getrollno() {return roll_no;}
    int getright() {return right;}
    int getwrong() {return wrong;}
    int getnetscore() {return net_score;}
    static void getrightweightage(int r) { right_weightage=r;}
    static void getwrongweightage(int r) { wrong_weightage=r;}
    static int getrightweightage() {return right_weightage;}
    static int getwrongweightage() { return wrong_weightage;}
};
int testResult::right_weightage;
int testResult::wrong_weightage;
int main() {
    testResult t1,t2;
    t1.setrollno(3);
    cout<<t1.getrollno();
    cout<<endl;
    testResult::getrightweightage(3);
    cout<<t1.getrightweightage();

}
