#include <iostream>
using namespace std;

int main() {
    const int rows = 12; // Çà ¼ö
    const int cols = 24; // ¿­ ¼ö

    int x, y;

    
    std::cout << "X ÁÂÇ¥  : ";
    std::cin >> x; 
    std::cout << "Y ÁÂÇ¥  : ";
    std::cin >> y; 

    std::cout << "ÀÔ·ÂµÈ ÁÂÇ¥: X = " << x << ", Y = " << y << std::endl;

  
    
    if (x > 0 || x < 11 || y > 0 || y < 23) {
        cout << "\nÀÔ·ÂÇÑ ÁÂÇ¥¿¡ ³×¸ðÄ­ Ãß°¡:\n";
        

        for (int i = 0; i < cols; i++) {
            for (int t = 0; t < rows; t++) {
                
                if (i == 0 || i == 23 || t == 0 || t == 11) {
                    cout << "¤±";
                }
                
                else if ((i == y || i == y + 1) && (t >= x && t <= x + 1)) {
                    cout << "¤±"; 
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
