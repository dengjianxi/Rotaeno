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
    int score= -1, perfectPlusCount= -1, perfectCount= -1, goodCount = -1;
    int allCount = -1;
    double slideCountInf = 0, slideCountSup = 1010000;
    int slideCount = -1;
    char title[LENGTH];
    cout << "Please insert song title here(abbreviation allowed)" << endl;
    gets(title);
    cout << "Only Full Combo scores are allowed to contribute to calculation" << endl << endl;
    for(; slideCount == -1; ) {
        cout << "Please insert the following 5 numbers by order(separated by blank space, not comma):" << endl;
        cout << "your score, the number of perfect+s, the number of perfects, the number of goods, the number of misses" << endl;
        int tmp_allCount = perfectPlusCount + perfectCount + goodCount;
        int missCount = -1;
        cin >> score >> perfectPlusCount >> perfectCount >> goodCount >> missCount;
        if(missCount != 0) {
            cout << "Not Full Combo! Please insert another score" << endl;
            continue;
        }
        if(tmp_allCount != -3 && tmp_allCount !=  perfectPlusCount + perfectCount + goodCount) {
            cout << "The total number of notes doesn't match the previous one, please try again" << endl;
            continue;
        }
        allCount = perfectPlusCount + perfectCount + goodCount;
        double tmp_inf = scoreCalculation(allCount, perfectCount, goodCount, score + 1);
        if(slideCountInf < tmp_inf) {
            slideCountInf = tmp_inf;
        }
        double tmp_sup = scoreCalculation(allCount, perfectCount, goodCount, score);
        if(tmp_sup < slideCountSup) {
            slideCountSup = tmp_sup;
        }
        if((int)slideCountInf + 2 > slideCountSup) {
            slideCount = (int)slideCountInf + 1;
        }
        cout << slideCountInf << " < The number of Slides <= " << slideCountSup << endl << endl;
    }
    cout << "Song title: " << title << endl;
    cout << "The number of Slides = " << slideCount << endl;
    double validCount = allCount - 3.0 / 4 * slideCount;
    cout << "The number of (other notes + 1/4 * Slides) = " << validCount << endl;
    double scoreDelta = 10000 / validCount;
    cout << "The score difference between Perfect+ and Perfect = " << scoreDelta << endl;
    system("pause");
}