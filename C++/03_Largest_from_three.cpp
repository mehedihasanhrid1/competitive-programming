#include <iostream>

using namespace std;

int main() {
    float a, b, c;

    cout << "Enter the first number: ";
    cin >> a;

    cout << "Enter the second number: ";
    cin >> b;

    cout << "Enter the third number: ";
    cin >> c;

    int largest;

    // Using if-elif-else statements
    if (a >= b && a >= c) {
        largest = a;
    } else if (b >= a && b >= c) {
        largest = b;
    } else {
        largest = c;
    }

    cout << "The largest number is: " << largest << endl;

    return 0;
}
