#include <iostream>
#include <vector>
using namespace std;

// 크기 설정
const int ROWS = 12;
const int COLS = 24;

int main() {
    // 게임 보드 초기화
    vector<vector<char>> board(ROWS, vector<char>(COLS, ' '));

    // 테두리 생성
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i == 0 || i == ROWS - 1 || j == 0 || j == COLS - 1) {
                board[i][j] = 'ㅁ'; // 테두리에 네모칸
            }
        }
    }

    // 사용자가 좌표를 입력하는 부분
    while (true) {
        // 현재 보드 출력
        for (const auto& row : board) {
            for (char cell : row) {
                cout << cell;
            }
            cout << endl;
        }

        // 사용자에게 좌표 입력 요청
        int x, y;
        cout << "좌표를 입력하세요 (형식: x, y) 또는 -1,-1로 종료: ";
        cin >> x; // x좌표 입력
        cin.ignore(); // ',' 제거를 위해 버퍼 비우기
        cin >> y; // y좌표 입력

        // 종료 조건
        if (x == -1 && y == -1) {
            break;
        }

        // 입력된 좌표가 유효한지 확인
        if (x > 0 && x < ROWS - 1 && y > 0 && y < COLS - 1) {
            // 좌표에 네모칸 채우기
            if (board[x][y] == ' ') {
                board[x][y] = 'ㅁ'; // 빈 공간에 네모칸 채우기
            }
            else {
                cout << "이미 채워진 칸입니다." << endl;
            }
        }
        else {
            cout << "유효하지 않은 좌표입니다. 테두리 안에서 입력해주세요." << endl;
        }
    }

    return 0;
}
