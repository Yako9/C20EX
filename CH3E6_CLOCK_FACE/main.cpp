//
#include <cmath>
#include "SSDL.h"

int main(int argc, char** argv)
{
	constexpr double PI = 3.14159;

	const int CENTER_X = SSDL_GetWindowWidth() / 2;
	const int CENTER_Y = SSDL_GetWindowHeight() / 2;
	const int NUMBERS = 12; // 12 divisions, one for each hour
	const int RADIUS = 200;

	// Angle info

	double angle = 0;
	constexpr double ANGLE_INCREMENT = ((double)2 / NUMBERS) * PI;

	// hour pos
	int x, y;

	int currentHour = 3;

	//Draw clock circle
	//SSDL_RenderDrawCircle(CENTER_X, CENTER_Y+5, RADIUS - 10);
	SSDL_RenderDrawCircle(CENTER_X, CENTER_Y + 5, RADIUS + 20);

	for (int i = 0; i < 12; i++)
	{
		//hour pos calculation
		x = CENTER_X + int(RADIUS * cos(angle));
		y = CENTER_Y + int(RADIUS * sin(angle));
		angle += ANGLE_INCREMENT;

		//draw hour
		SSDL_RenderTextCentered(currentHour, x, y);
		//SSDL_RenderDrawLine(CENTER_X, CENTER_Y, x, y);
		currentHour++;

		if (currentHour > 11)
		{
			currentHour = 0;
		}

	}



	SSDL_WaitKey();
	
	return 0;
}