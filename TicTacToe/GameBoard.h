class GameBoard {
		public:
			GameBoard();
			int currentPlayer;
			char board[3][3] = {{'+', '+', '+'},{'+', '+', '+'},{'+', '+', '+'}};
			void printBoard();
	
	};
