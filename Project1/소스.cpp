#include <iostream>

using namespace std;

int main() {
    int result = 12 * 24;

    for (int a = 0; a < 12; a++) {
        for (int j = 0; j < 24; j++) {
            if (j == 0 || j == 23) {
                cout << "¤±";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
