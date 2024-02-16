#define LENGTH 100
#include <iostream>
#include <string>
using namespace std;
double scoreCalculation(int N, int p, int g, int k) {
    double tmpa = 4.0 * N / 3;
    double tmpb = 10000.0 * (4 * p + 303 * g) / (3030000 - 3 * k);
    return tmpa - tmpb;
}

int main() {
    cout << "This program is specified for the calculation of All Perfect scores" << endl;
    char title[LENGTH];
    cout << "Please insert song title here(abbreviation allowed)" << endl;
    gets(title);
    double validCount = -1;//the number of "other notes + 1/4 * Slides", directly used for calculating scores
    cout << "Please insert the result of \"other notes + 1/4 * Slides\"" << endl;
    cin >> validCount;
    double scoreDelta = 10000 / validCount;//the difference between Perfect+ and Perfect
    int score = -1;
    cout << "Please insert the number of your score" << endl;
    cin >> score;
    int displayScore = 1010000;//the score you can see
    double scoreToMatch = 1010000;//trying to enumerate scores from All Perfect+ down to no Perfect+
    bool found = false;
    for (int perfectCount = 0; perfectCount < validCount; perfectCount++) {
        displayScore = (int)scoreToMatch;//the score of Rotaeno is the round-down of actual score
        if (score == displayScore) {
            found = true;
            cout << "the number of Perfect = " << perfectCount << endl;
            break;
        }
        scoreToMatch -= scoreDelta;
    }
    if (found == false) {
        cout << "Invalid score! Maybe this is not All Perfect or the chart has been changed." << endl;
    }
    system("pause");
}