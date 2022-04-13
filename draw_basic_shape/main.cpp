//

#include "SSDL.h"

int main(int argc, char** argv)
{
	/*sout << "Hello World\n";
	SSDL_WaitKey(); //Wait for user to hit a key*/

	const SSDL_Color ORANGE = SSDL_CreateColor(255, 215, 0);
	SSDL_SetRenderDrawColor(ORANGE);

	SSDL_RenderFillCircle(200, 200, 100);

	SSDL_SetRenderDrawColor(BLACK);

	SSDL_RenderDrawLine(150, 190, 200, 200);
	SSDL_RenderDrawLine(200, 200, 150, 220);
	SSDL_RenderDrawLine(150, 220, 150, 190);


	SSDL_RenderDrawLine(290, 190, 230, 200);
	SSDL_RenderDrawLine(230, 200, 290, 220);
	SSDL_RenderDrawLine(290, 220, 290, 190);


	SSDL_RenderDrawLine(150, 250, 175, 265);
	SSDL_RenderDrawLine(175, 265, 200, 250);
	SSDL_RenderDrawLine(200, 250, 220, 265);
	SSDL_RenderDrawLine(220, 265, 250, 250);


	/*const SSDL_Color indigo = SSDL_CreateColor(75, 0, 130);
	SSDL_SetRenderDrawColor(indigo);
	
	int columns = 23;
	int rows = 18;

	int fillerX = 0;
	int fillerY = 0;
	int marginLeftTop = 10;

	int squareW = 22;
	int squareH = 22;

	for (int i = 0; i < rows; i++)
	{
		fillerX = 0;

		for (int j = 0; j < columns; j++)
		{
			SSDL_RenderFillRect( j + marginLeftTop + fillerX, i + marginLeftTop + fillerY,  squareW, squareH);
			fillerX = fillerX + squareW;
		}

		fillerY = fillerY + squareH;
	}
	
	//SSDL_RenderClear(WHITE);*/

	SSDL_WaitMouse();


   return 0;
}