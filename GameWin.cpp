#include "CMUgraphicsLib\CMUgraphics.h"
#include "GameProperities.h"
#include "Output.h"

int main(){
	Out o;
	o.setBackgroundColor();
	o.drawGameBoard();
	o.waitMouseClick();
	return 0;
}