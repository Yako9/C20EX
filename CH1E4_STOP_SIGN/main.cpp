//

#include "SSDL.h"

int main(int argc, char** argv)
{
	//SSDL_RenderDrawLine(10, 50, 50, 10);
	//SSDL_RenderDrawLine(11, 51, 51, 11);

	SSDL_Color REDCOLOR = SSDL_CreateColor(255, 0, 0);
	
	SSDL_SetRenderDrawColor(REDCOLOR);

	SSDL_RenderFillRect(5,7, 168, 149);

	SSDL_SetRenderDrawColor(WHITE);


	for (int i = 0; i < 9; i++)
	{
		//SSDL_RenderDrawLine(10 + i, 50 + i, 50 + i, 10 + i);
		SSDL_RenderDrawLine(10 + i, 50, 50 + i, 10);
	}

	//SSDL_RenderDrawLine(10, 50, 10, 120);

	for (int j = 0; j < 8; j++)
	{
		SSDL_RenderDrawLine(10 + j, 50, 10 + j, 110);
	}

	//SSDL_RenderDrawLine(10, 110, 50, 150);
	
	for (int k = 0; k < 9; k++)
	{
		SSDL_RenderDrawLine(10 + k, 110, 50 + k, 150);
	}

	//SSDL_RenderDrawLine(50, 10, 150, 10);

	for (int l = 0; l < 8; l++)
	{
		SSDL_RenderDrawLine(50, 10+l, 130, 10+l);
	}

	SSDL_RenderDrawLine(50, 150, 130, 150);
	SSDL_RenderDrawLine(50, 149, 130, 149);
	for (int m = 0; m < 8; m++)
	{
		SSDL_RenderDrawLine(50, 150 - m, 130, 150 - m);
	}

	//SSDL_RenderDrawLine(130, 150, 170, 115);
	//SSDL_RenderDrawLine(130, 149, 169, 115);

	for (int b = 0; b < 9; b++)
	{
		//SSDL_RenderDrawLine(130, 150 - b, 170 - b, 115);
		SSDL_RenderDrawLine(130, 150 - b, 165, 115 - b);
	}


	SSDL_RenderDrawLine(130, 10, 165, 45);
	SSDL_RenderDrawLine(130, 11, 165, 46);

	for (int v = 0; v < 9; v++)
	{
		SSDL_RenderDrawLine(130, 10 + v, 165, 45 + v);
	}


	SSDL_RenderDrawLine(165, 45, 165, 115);

	for (int c = 0; c < 8; c++)
	{
		SSDL_RenderDrawLine(165 - c, 45, 165 - c, 115);
	}

	/*#########################################*/

	SSDL_SetRenderDrawColor(BLACK);


	SSDL_RenderDrawLine(1, 2, 2, 1);
	SSDL_RenderDrawLine(1, 3, 3, 1);

	for (int g = 0; g < 53; g++)
	{
		SSDL_RenderDrawLine(1, 1+g, 1+g, 1);
	}

	/*#########################################*/
	//SSDL_SetRenderDrawColor(BLUE);

	SSDL_RenderDrawLine(5, 115, 45, 155);
	SSDL_RenderDrawLine(5, 116, 44, 155);

	for (int u = 0; u < 41; u++) {
		SSDL_RenderDrawLine(5, 115+u, 45-u, 155);
	}

	/*#########################################*/

	SSDL_RenderDrawLine(173,115,133,155);

	for (int q = 0; q < 40; q++)
	{
		//SSDL_RenderDrawLine(173 + q, 115, 133 + q, 155);
		SSDL_RenderDrawLine(173, 115 + q, 133 + q, 155);
	}

	/*##########################################*/

	SSDL_RenderDrawLine(173 , 10, 173, 10);
	SSDL_RenderDrawLine(172, 10, 173, 11);

	for (int w = 0; w < 38; w++)
	{
		SSDL_RenderDrawLine(173 - w, 7, 173, 7 + w);
	}


	/*##########################################*/

	SSDL_RenderDrawLine(170, 7, 170, 155);

	for (int x = 0; x < 10; x++)
	{
		SSDL_RenderDrawLine(170 + x, 7, 170 + x, 155);
	}

	/*#######################*/
	/*         Text          */
	/*#######################*/

	SSDL_SetRenderDrawColor(WHITE);

	const SSDL_Font VERDANA = SSDL_OpenSystemFont("verdana.ttf", 50);

	//SSDL_SetFont(VERDANA);

	SSDL_RenderText("STOP", 22, 50, VERDANA);



	/*#######################*/

	SSDL_WaitKey();

   return 0;
}