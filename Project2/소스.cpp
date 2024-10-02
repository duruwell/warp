#include <iostream>
#include <vector>
using namespace std;

// ũ�� ����
const int ROWS = 12;
const int COLS = 24;

int main() {
    // ���� ���� �ʱ�ȭ
    vector<vector<char>> board(ROWS, vector<char>(COLS, ' '));

    // �׵θ� ����
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1) {
                board[i][j] = '��'; // �׵θ��� �׸�ĭ
            }
        }
    }

    // ����ڰ� ��ǥ�� �Է��ϴ� �κ�
    while (true) {
        // ���� ���� ���
        for (const auto& row : board) {
            for (char cell : row) {
                cout << cell;
            }
            cout << endl;
        }

        // ����ڿ��� ��ǥ �Է� ��û
        int x, y;
        cout << "��ǥ�� �Է��ϼ��� (����: x, y) �Ǵ� -1,-1�� ����: ";
        cin >> x; // x��ǥ �Է�
        cin.ignore(); // ',' ���Ÿ� ���� ���� ����
        cin >> y; // y��ǥ �Է�

        // ���� ����
        if (x == -1 && y == -1) {
            break;
        }

        // �Էµ� ��ǥ�� ��ȿ���� Ȯ��
        if (x > 0 && x < ROWS - 1 && y > 0 && y < COLS - 1) {
            // ��ǥ�� �׸�ĭ ä���
            if (board[x][y] == ' ') {
                board[x][y] = '��'; // �� ������ �׸�ĭ ä���
            }
            else {
                cout << "�̹� ä���� ĭ�Դϴ�." << endl;
            }
        }
        else {
            cout << "��ȿ���� ���� ��ǥ�Դϴ�. �׵θ� �ȿ��� �Է����ּ���." << endl;
        }
    }

    return 0;
}
