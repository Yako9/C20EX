//

#include "SSDL.h"

int main(int argc, char** argv)
{	

	SSDL_SetWindowTitle("Yield Sign");

	SSDL_SetWindowSize(160, 120);


	SSDL_RenderFillRect(7, 7, 147, 95);


	SSDL_SetRenderDrawColor(RED);

	SSDL_RenderDrawLine(10, 15, 150, 15);
	for (int i = 0; i <10; i++)
	{
		SSDL_RenderDrawLine(10, 10 + i, 150, 10 + i);
	}


	SSDL_RenderDrawLine(10, 20, 75, 100);
	for (int j = 0; j < 10; j++)
	{
		SSDL_RenderDrawLine(10 + j, 20, 75 + j, 100);
	}



	SSDL_RenderDrawLine(150, 20, 75, 100);
	for (int k = 0; k < 10; k++)
	{
		SSDL_RenderDrawLine(150 - k, 20, 75 - k, 100);
	}






	/*#############*/
	SSDL_SetRenderDrawColor(WHITE);

	for (int j = 0; j < 10; j++)
	{
		SSDL_RenderDrawLine(10 - j, 20, 75 - j, 100);
	}


	for (int k = 0; k < 10; k++)
	{
		SSDL_RenderDrawLine(150 + k, 20, 75 + k, 100);
	}

	/*###############################*/
	SSDL_SetRenderDrawColor(BLACK);
	for (int j = 0; j < 200; j++)
	{
		SSDL_RenderDrawLine(6 - j, 20, 73 - j, 102);
	}


	for (int k = 0; k < 90; k++)
	{
		SSDL_RenderDrawLine(154 + k, 20, 79 + k, 102);
	}

	/*###########################*/


	SSDL_SetRenderDrawColor(RED);

	const SSDL_Font VERDANA = SSDL_OpenSystemFont("verdana.ttf", 25);


	SSDL_RenderText("YIELD", 40, 20, VERDANA);






	/*############################*/

	SSDL_WaitKey();


   return 0;
}