//

#include "SSDL.h"

int main(int argc, char** argv)
{
	SSDL_SetWindowTitle("Nier - City Ruins");
	SSDL_SetWindowSize(500, 500);
	
	SSDL_Image cover = SSDL_LoadImage("media/cover.jpg");
	
	SSDL_Music song = SSDL_LoadMUS("media/nier.mp3");

	SSDL_Sound laser = SSDL_LoadWAV("media/laser1.wav");

	SSDL_RenderImage(cover, 0, 0, 500, 500);

	SSDL_PlayMusic(song);
	sout << "NIER";
	SSDL_Delay(5000);

	cover = SSDL_LoadImage("media/cover2.jpg");
	SSDL_RenderImage(cover, 0, 0, 500, 500);

	SSDL_PlaySound(laser);

	SSDL_Delay(15000);
	cover = SSDL_LoadImage("media/cover3.jpg");
	SSDL_RenderImage(cover, 0, 0, 500, 500);


	SSDL_PlaySound(laser);
	sout << "CITY RUINS!";
	SSDL_Delay(30000);
	SSDL_PlaySound(laser);
	cover = SSDL_LoadImage("media/cover.jpg");
	SSDL_RenderImage(cover, 0, 0, 500, 500);


	SSDL_WaitKey();


   return 0;
}