//

#include "SSDL.h"

int main(int argc, char** argv)
{
	/*sout << "Hello World\n";
	SSDL_WaitKey(); //Wait for user to hit a key*/
	SSDL_Font moon = SSDL_OpenSystemFont("Arial.ttf", 20);
	SSDL_RenderTextCentered("Whose husband is that? I think I know.\nIts owner is quite happy though.\nFull of joy like a vivid rainbow,\nI watch him laugh.I cry hello.", 300, 0, moon);

	//SSDL_WaitKey();
	//SSDL_WaitMouse();
	SSDL_WaitKey();
	SSDL_WaitKey();

	SSDL_RenderClear(BLACK);

	SSDL_RenderTextCentered("I watch him laugh.I cry hello.", 300, 0, moon);

	SSDL_WaitKey();

	SSDL_RenderClear(BLACK);

	SSDL_RenderTextCentered("Once upon a night we wait til the carnival of life\nEasy to curse the dark instead\nthis moment, the dawn of humanity\nLast ride of the day", 300, 0, moon);

	SSDL_WaitKey();

	SSDL_RenderClear(BLACK);
	
	SSDL_RenderTextCentered("C\'EST FINI", 300, 0, moon);

	SSDL_WaitKey();

   return 0;
}