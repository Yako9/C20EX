//

#include "SSDL.h"

int main(int argc, char** argv)
{	
	int x1, y1;
	int x2, y2;
	int radius;


	//Get circle center position
	SSDL_WaitMouse();
	x1 = SSDL_GetMouseX();
	y1 = SSDL_GetMouseY();
	SSDL_RenderDrawCircle(x1, y1, 1);


	//Get circle end position
	SSDL_WaitMouse();
	x2 = SSDL_GetMouseX();
	y2 = SSDL_GetMouseY();

	//calculate radius
	radius = sqrt( pow(x1-x2, 2) + pow(y1 - y2, 2));

	//Draw circle
	SSDL_RenderDrawCircle(x1, y1, radius);

	SSDL_WaitKey();
	
	return 0;
}