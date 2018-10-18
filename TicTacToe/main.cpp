#include <iostream>
#include <stdlib.h>
#include "GameBoard.cpp"

using namespace std;


int main(){
		
		GameBoard CurrentGame;
		cout << "Current Player: " << CurrentGame.currentPlayer << endl;
		
		CurrentGame.printBoard();
		return 0;
	
	}
