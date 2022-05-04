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
	int currentX, currentY;
	int startPoint, endPoint;

	//Render stats
	SSDL_RenderText("X : ", 5, 2);
	SSDL_RenderText("Y : ", 70, 2);

	/*SSDL_RenderText("LS: ", 400, 2);
	SSDL_RenderText("LE: ", 480, 2);*/

	while (true)
	{
		//SSDL_WaitMouse();
		//Clear screen
		SSDL_RenderClear(grey);

		// Canvas outline
		SSDL_SetRenderDrawColor(BLACK);
		SSDL_RenderDrawRect(5, 25, 630, 450);

		//Render stats
		SSDL_RenderText("X : ", 5, 2);
		SSDL_RenderText("Y : ", 70, 2);

		currentX = SSDL_GetMouseX();
		currentY = SSDL_GetMouseY();

		//SSDL_SetRenderDrawColor(BLACK);
		SSDL_RenderText(currentX, 30, 2);
		SSDL_RenderText(currentY, 95, 2);

		SSDL_GetMouseClick();

		//Screen refresh rate
		SSDL_Delay(1);

	}



	SSDL_WaitKey();
	
	return 0;
}