#ifndef CELL_CLASS
#define CELL_CLASS

#include "CMUgraphicsLib\CMUgraphics.h"
#include "GameProperities.h"

class Cell{
private:
	int id, sideLength, x1, y1, x2, y2, column, row;
	int IDxoffset, IDyoffset;
	color clr;
	bool isOccupied;

public:
	Cell(){ setParameters(0, 0); }

	void setParameters(int x, int y){
		sideLength = CELL_SIDELENGTH;
		setStartPoint(x, y);
		x2 = x + sideLength;
		y2 = y + sideLength;
		clr = GRAY;					//default cell color
		row = x1 / sideLength;
		column = y1 / sideLength;
		id = column + (row * BOARD_COLUMNS);

		IDxoffset = 2;
		IDyoffset = 2;
	}

	void setStartPoint(int x, int y){
		if(x > 0 && x < WINDOW_WIDTH)
			x1 = x;
		if(y > 0 && y < WINDOW_HEIGHT)
			y1 = y;
	}

	void setColor(color color){ clr = color; }

	void drawCell(window* win){
		win->SetBrush(clr);
		win->DrawRectangle(x1, y1, x2, y2);
	}

	void drawCellID(window* win){
		win->DrawInteger(x1 + IDxoffset, y2 + IDyoffset, id);
	}
};

#endif