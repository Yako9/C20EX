//

#include "SSDL.h"

int main(int argc, char** argv)
{

	int playerHeight = 10;
	int playerWidth = 10;

	int posX = 10;
	int posY = 10;

	
	const int DISTANCE_TO_TRAVEL = 10; // player will move by 10 positions each time
	const int FACTOR_TO_INCREASE = 2;



	SSDL_SetRenderDrawColor(RED); // set player color
	SSDL_RenderFillRect(posX, posY, playerHeight, playerWidth); // draw player at position (posX, posY)

	posX += DISTANCE_TO_TRAVEL; // increase posX
	SSDL_Delay(100); // wait 0.1 secs before rendering the player at the next position


	for (int i = 0; i < 50; i++)
	{
		SSDL_RenderClear(); // clear the screen
		SSDL_RenderFillRect(posX, posY, playerHeight, playerWidth); // draw player at new position

		posX += DISTANCE_TO_TRAVEL; // increase player posX
		SSDL_Delay(50); // wait 0.05 sec before rendering next position
	}


	SSDL_WaitKey();
	
   return 0;
}