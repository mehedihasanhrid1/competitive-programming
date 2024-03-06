#include <iostream>
using namespace std;

int main() {
    int mark;

    cout << "Enter your mark: ";
    cin >> mark;

    if (mark >= 80) {
        cout << "Grade: A+" << endl;
    } else if (mark >= 75) {
        cout << "Grade: A" << endl;
    } else if (mark >= 70) {
        cout << "Grade: A-" << endl;
    } else if (mark >= 65) {
        cout << "Grade: B+" << endl;
    } else if (mark >= 60) {
        cout << "Grade: B" << endl;
    } else if (mark >= 50) {
        cout << "Grade: C+" << endl;
    } else if (mark >= 40) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
