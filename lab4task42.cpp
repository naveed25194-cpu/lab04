
#include <iostream>
using namespace std;

int main() {
    int i = 1;

    while (i <= 20) {
        cout << i << endl;
        i++;
    }

    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}

