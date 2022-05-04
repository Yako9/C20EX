//

#include "SSDL.h"

int main(int argc, char** argv)
{
	SSDL_Color grey = SSDL_CreateColor(220, 220, 220);
	
	
	//Clear screen
	SSDL_RenderClear(grey);
	
	// Canvas outline
	SSDL_SetRenderDrawColor(BLACK);
	SSDL_RenderDrawRect(5, 25, 630, 450);

	// Mouse stats
	int startX, startY, endX, endY;

	//Render stats
	SSDL_RenderText("X1 : ", 5, 2);
	SSDL_RenderText("Y1 : ", 70, 2);
	SSDL_RenderText("X2 : ", 300, 2);
	SSDL_RenderText("Y2 : ", 385, 2);

	//Get initial pos
	SSDL_WaitMouse();
	startX = SSDL_GetMouseX();
	startY = SSDL_GetMouseY();

	//Print stats
	SSDL_RenderText(startX, 35, 2);
	SSDL_RenderText(startY, 105, 2);

	//Get end pos
	SSDL_WaitMouse();
	endX = SSDL_GetMouseX();
	endY = SSDL_GetMouseY();
	
	//Print stats
	SSDL_RenderText(endX, 330, 2);
	SSDL_RenderText(endY, 425, 2);
	
	//Draw line
	SSDL_RenderDrawLine(startX, startY, endX, endY);


	SSDL_WaitKey();
	
	return 0;
}