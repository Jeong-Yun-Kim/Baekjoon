#include <iostream>
using namespace std;

int main() {

    string name, grade;
    double score;
    double count = 0;
    double sum = 0;

    for (int i = 0;i < 20;i++) {
        cin >> name >> score >> grade;

        if (grade == "A+") {
            count += score * 4.5;
        }

        else if (grade == "A0") {
            count += score * 4.0;
        }

        else if (grade == "B+") {
            count += score * 3.5;
        }

        else if (grade == "B0") {
            count += score * 3.0;
        }

        else if (grade == "C+") {
            count += score * 2.5;
        }

        else if (grade == "C0") {
            count += score * 2.0;
        }

        else if (grade == "D+") {
            count += score * 1.5;
        }

        else if (grade == "D0") {
            count += score * 1.0;
        }

        else if (grade == "F") {
            count += score * 0.0;
        }

        else {
            continue;
        }

        sum += score;
    }

    cout << count / sum;

    return 0;
}