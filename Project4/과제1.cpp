#include <iostream>
using namespace std;

int main() {
    const int rows = 12; // �� ��
    const int cols = 24; // �� ��

    int x, y;

    
    std::cout << "X ��ǥ  : ";
    std::cin >> x; 
    std::cout << "Y ��ǥ  : ";
    std::cin >> y; 

    std::cout << "�Էµ� ��ǥ: X = " << x << ", Y = " << y << std::endl;

  
    
    if (x > 0 || x < 11 || y > 0 || y < 23) {
        cout << "\n�Է��� ��ǥ�� �׸�ĭ �߰�:\n";
        

        for (int i = 0; i < cols; i++) {
            for (int t = 0; t < rows; t++) {
                
                if (i == 0 || i == 23 || t == 0 || t == 11) {
                    cout << "��";
                }
                
                else if ((i == y || i == y + 1) && (t >= x && t <= x + 1)) {
                    cout << "��"; 
                    //
                }
                else {
                    cout << "  "; 
                }
            }
            cout << endl; 
        }
    }
  


    return 0;
}
