#include<iostream>
using namespace std;
class game{
    private:
    int A[5];
    public:
    void set_score(int round, int score) {
        A[round]=score;
    }
    int get_score(int round) {
        return A[round];
    }
};
class game_result:public game{
    private:
    int result[5];
    public:
    void setresult(int round,int r) {
        result[round]=r;
    }
    int getresult(int round) {
        return result[round];
    }
    int finalresult() {
        int i=0;
        for( int s=0;s<5;s++)
        i=i+result[s];
        return i;
    }
};
int main() {
    game_result player1;

    // Setting scores and results for 5 rounds
    for (int i = 0; i < 5; i++) {
        int score, res;
        cout << "Enter score for round " << i + 1 << ": ";
        cin >> score;
        cout << "Enter result for round " << i + 1 << " (1 for Win, 0 for Loss): ";
        cin >> res;
        player1.set_score(i, score);
        player1.setresult(i, res);
    }

    // Displaying scores and results
    cout << "\nScores and Results:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Round " << i + 1 << " -> Score: " << player1.get_score(i) 
             << ", Result: " << player1.getresult(i) << endl;
    }
    // Displaying final result
    cout << "\nFinal Game Result: " << player1.finalresult() << " Wins out of 5 rounds\n";

    return 0;
}
