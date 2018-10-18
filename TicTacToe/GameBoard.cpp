#include <iostream>
#include "GameBoard.h"

using namespace std;

GameBoard::GameBoard(){
	//this->board = 'i';
	this->currentPlayer = 1;
}
	
void GameBoard::printBoard(){
	
	for(int i = 0; i < 3; i++){
			for (int j = 0; j < 3; j++){
				cout << this->board[i][j] << " ";
				
				if (j == 0 || j ==1){
					cout << "| ";
				}
				
					
			}
			
			cout << endl;
			if (i == 0 || i == 1){
				cout << "----------" << endl;
			}
		
	}
	
}
