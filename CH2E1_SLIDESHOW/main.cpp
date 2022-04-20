//

#include "SSDL.h"

void renderBGandPuppy(SSDL_Image bg1, SSDL_Image pup, int d, int w, int h)
{
	SSDL_RenderImage(bg1, 0, 0, w, h);
	SSDL_RenderImage(pup, 500, 300, 50, 60);
	SSDL_Delay(d);
}

int main(int argc, char** argv)
{

	SSDL_SetWindowTitle("My journey... someday");

	int w = 600;
	int h = 450;
	int d = 1000;

	SSDL_SetWindowSize(w, h);

	const SSDL_Image pup = SSDL_LoadImage("media/pupdog.png");

	SSDL_Image bg1 = SSDL_LoadImage("media/beach.jpg");

	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/colosseum.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/tokyo1.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/ts1.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/ts2.webp");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/ts3.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/ts3b.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/ts3c.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/tsn.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/venicebridge.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);

	bg1 = SSDL_LoadImage("media/w.jpg");
	renderBGandPuppy(bg1, pup, d, w, h);


	SSDL_WaitKey();

   return 0;
}
