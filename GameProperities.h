#ifndef GAME_PROPERITIES
#define GAME_PROPERITIES

//Defining game window dimensions:
#define WINDOW_HEIGHT 500
#define WINDOW_WIDTH 500

//Game board definitions:
#define BOARD_ROWS 8
#define BOARD_COLUMNS 8
#define CELL_SIDELENGTH 50

__declspec(selectany) //To prevent redifinition error (I copied this)

//More definitions to be defined in Output class constructor:
struct GameProperities {
	color gray, darkRed, bgRed;

	color CELLS_COLOR_ONE, CELLS_COLOR_TWO, BACKGROUND_COLOR;

} PROPS;


#endif