#include "Output.h"
#include <iostream>
using namespace std;

void Out::waitMouseClick(){
	win->WaitMouseClick(arbitraryX, arbitraryY);
}

void Out::setBackgroundColor(){
	win->SetBrush(PROPS.BACKGROUND_COLOR);
	win->DrawRectangle(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
}

//Draw game board
void Out::drawGameBoard(){
	int sideLength = CELL_SIDELENGTH; //Set side length to the smaller value

	//X and Y offset to center the game board in the screen: (The calculation includes some trial&error)
	int Xoffset = (WINDOW_WIDTH - (sideLength * BOARD_COLUMNS) - 12) / 2;
	int Yoffset = (WINDOW_HEIGHT - (sideLength * BOARD_ROWS) - 15) / 2;

	int invert;

	for(int j = 0; j < BOARD_ROWS; j++){
		//Invert the colors every other row:
		invert = (j % 2 == 0)? 0 : 1;

		//Draw one row:
		for(int i = 0; i < BOARD_COLUMNS; i++){			//Draw cells:
			win->SetBrush((invert % 2 ==0)? PROPS.CELLS_COLOR_ONE : PROPS.CELLS_COLOR_TWO);	//Set first/second color

			win->DrawRectangle(
				(i * sideLength) + Xoffset, 
				(j * sideLength) + Yoffset, 
				((i+1)*sideLength) + Xoffset, 
				((j+1)*sideLength) + Yoffset
				);

			cout << "Rectangle #" << i << " is drawn in RED." << endl;
			invert++;
		}
	}
}