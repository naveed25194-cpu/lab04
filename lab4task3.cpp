
#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    if (a > b) {
        cout << "Larger number is: " << a << endl;
    } 
    else if (b > a) {
        cout << "Larger number is: " << b << endl;
    } 
    else {
        cout << "Both numbers are equal" << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

