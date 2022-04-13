//

#include "SSDL.h"

int main(int argc, char** argv)
{
	/*sout << "Hello World\n";
	SSDL_WaitKey(); //Wait for user to hit a key*/



	/*SSDL_Color test = SSDL_CreateColor(255, 0, 150);
	SSDL_RenderClear(test);
	//SSDL_WaitKey();
	SSDL_WaitMouse();
	SSDL_RenderClear(BLACK);
	SSDL_WaitMouse();
	SSDL_RenderClear(BLUE);
	SSDL_WaitMouse();
	SSDL_RenderClear(WHITE);
	SSDL_WaitMouse();*/


	SSDL_SetWindowTitle("Laputa");

	const SSDL_Color PINK = SSDL_CreateColor(255, 0, 150);
	SSDL_SetRenderDrawColor(PINK);
	sout << "PINK\n";
	SSDL_SetRenderDrawColor(WHITE);
	SSDL_SetCursor(200, 200);
	sout << "WHITE";
	SSDL_WaitKey();


   return 0;
}