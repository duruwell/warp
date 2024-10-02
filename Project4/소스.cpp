#include <iostream>
using namespace std;

int main() {
    int rows = 12;
    int cols = 24;

    for (int a = 0; a < cols; a++) {
        for (int j = 0; j < rows; j++) {
            if (a == 0 || a == 23 || j == 0 || j == 11) {
                cout << "¢Ë"; 
            }
            else {
                cout << " ";  
            }
        }
        cout << endl;  
    }
    return 0;
}
