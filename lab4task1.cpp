
#include <iostream>
using namespace std;

int main() {
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 50) {
        cout << "Pass" << endl;
    } else {
        cout << "Fail" << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

