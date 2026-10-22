
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i <= 20; i++) {
        cout << i << endl;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

