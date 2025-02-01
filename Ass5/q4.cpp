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
int testResult::right_weightage=3;
int testResult::wrong_weightage=1;
void setTestResult(testResult t,int a,int b,int c) {
    t.setrollno(a);
    t.setright(b);
    t.setwrong(c);
    t.srtnetscore(b*t.getrightweightage()-c*t.getwrongweightage());
} 
void printtestresult(testResult t) {
    cout<<endl<<t.getrollno()<<" "<<t.getright()<<" "<<t.getwrong()<<" "<<t.getnetscore();
}
void sortbynetscore(testResult result[], int n) {
    testResult temp;
    int i,r;
    for(r=0;r<n-1;r++) {
        for(i=0;i<n-1-r;i++) {
            if(result[i].getnetscore()>result[i+1].getnetscore()) {
                temp=result[i];
                result[i]=result[i+1];
                result[i+1]=result[i];
            }
        }
    }
}
int main() {
    testResult result[5];
    setTestResult(result[0],100,80,20);
    setTestResult(result[1],101,50,23);
     setTestResult(result[2],102,30,12);
     setTestResult(result[3],103,90,0);
    setTestResult(result[4],104,20,45);
    sortbynetscore(result,5);
    for(int i=0;i<5;i++) 
        printtestresult(result[i]);
        cout<<endl;
        return 0;

}
