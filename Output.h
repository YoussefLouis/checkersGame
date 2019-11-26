#ifndef OUTPUT
#define OUTPUT

#include "CMUgraphicsLib\CMUgraphics.h"
#include "GameProperities.h"
#include "Cell.h"

class Out{
private:
	window* win;

	//two arbitrary integers to wait for a general mouse click:
	int arbitraryX, arbitraryY;

	//Cells of the board:
	Cell* cells;	int noOfCells;

public:
	//Constructor of Output class creates a GUI window:
	Out(){
		win = new window(WINDOW_WIDTH, WINDOW_HEIGHT);
		
		//Defining custom colors:
		PROPS.gray = GRAY;
		PROPS.darkRed = RGB(90, 30, 56);
		PROPS.bgRed = RGB(20, 20, 20);

		//Setting Game Colors:
		PROPS.CELLS_COLOR_ONE = PROPS.gray;
		PROPS.CELLS_COLOR_TWO = PROPS.darkRed;
		PROPS.BACKGROUND_COLOR = PROPS.bgRed;

		//Initializing array of game board cells:
		noOfCells = BOARD_COLUMNS * BOARD_ROWS;
		cells = new Cell[noOfCells];
	}

	//Destructor erases the window and cells pointer
	~Out(){ 
		delete win; win = nullptr; 
		delete cells; cells = nullptr; 
	}

	void waitMouseClick();

	void setBackgroundColor();

	void drawGameBoard();
};

#endif