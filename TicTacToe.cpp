#include"TicTacToe.h"
void Game::board_vlaue() {
	for (x = 0; x < 3; x++) {
		for (y = 0; y < 3; y++)
			board[x][y] = ' ';
	}
}

char Game::play() {
	for (k = 0; k < 9; k++) {
		cout << "(x,y)좌표: ";
		cin >> y >> x;

		if (board[x][y] != ' ') {
			cout << "다시입력하시오." << endl;
			k--;
			continue;
		}
		board[x][y] = (k % 2 == 0) ? 'X' : 'O';

		for (i = 0; i < 3; i++) {
			cout << "---|---|---" << endl;
			cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;

		}
		cout << "---|---|---" << endl;
		// 세로열 빙고
		for (int i = 0; i < 3; i++) {
			if (board[i][0] == 'X' && board[i][1] == 'X' && board[i][2] == 'X') {
				cout << "X가 이겼습니다!";
				return 0;
			}
			else if (board[i][0] == 'O' && board[i][1] == 'O' && board[i][2] == 'O') {
				cout << "O가 이겼습니다!";
				return 0;
			}
			//가로열 빙고
			else if (board[0][i] == 'X' && board[1][i] == 'X' && board[2][i] == 'X') {
				cout << "X가 이겼습니다!";
				return 0;
			}
			else if (board[0][i] == 'O' && board[1][i] == 'O' && board[2][i] == 'O') {
				cout << "O가 이겼습니다!";
				return 0;
			}
		}
		//대각선 빙고
		if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
			cout << "X가 이겼습니다!";
			return 0;
		}
		else if (board[2][0] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
			cout << "X가 이겼습니다!";
			return 0;
		}
		else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
			cout << "O가 이겼습니다!";
			return 0;
		}
		else if (board[2][0] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
			cout << "O가 이겼습니다!";
			return 0;
		}
	}
	if (k == 9) {
		cout << "GAME OVEEEEERRRRRR";
	}
	return 0;
}
