//

#include "SSDL.h"

int main(int argc, char** argv)
{
	constexpr double PI = 3.14159;

	const int CENTER_X = SSDL_GetWindowWidth() / 2;
	const int CENTER_Y = SSDL_GetWindowHeight() / 2;
	const int NUMBERS = 12; // 12 divisions, one for each hour
	const int DIVISION60 = 60; // 60 divisions, one for each second/min
	const int RADIUS = 200; // Clock radius
	const int SEC_RADIUS = 205; // second radius
	const int MIN_RADIUS = 185;
	const int HS_RADIUS = 120;

	// Angle info

	double angle = 0;
	constexpr double ANGLE_INCREMENT = ((double)2 / NUMBERS) * PI;

	double sec_angle = 4.7; // startin angle for the seconds hand so it starts at the hour 0
	constexpr double SEC_ANGLE_INCREMENT = ((double)2 / DIVISION60) * PI;

	double min_angle = 4.7;
	constexpr double MIN_ANGLE_INCREMENT = ((double)2 / DIVISION60) * PI;

	double hs_angle = 4.7;
	constexpr double HS_ANGLE_INCREMENT = ((double)2 / NUMBERS) * PI;

	// number hour pos
	int x, y;

	//sec pos
	int secondX, secondY;
	//min pos
	int minX, minY;
	//hs pos
	int hsX, hsY;


	//starting draw hour
	int drawHour = 3;

	//time variables
	int t_n, t_hours, t_min, t_sec;
	int gtm_minus_3_fix = 3;

	while (true)
	{
		//clear screen
		SSDL_RenderClear();

		//Draw clock circle
		SSDL_RenderDrawCircle(CENTER_X, CENTER_Y + 5, RADIUS + 20);

		//Render clock
		for (int i = 0; i < 12; i++)
		{
			//hour pos calculation
			x = CENTER_X + int(RADIUS * cos(angle));
			y = CENTER_Y + int(RADIUS * sin(angle));
			angle += ANGLE_INCREMENT;

			//draw hour
			SSDL_RenderTextCentered(drawHour, x, y);
			drawHour++;

			if (drawHour > 11)
			{
				drawHour = 0;
			}

		}

		/* CALCULATE TIME */

		t_n = int(time(nullptr));

		int days = t_n / 86400;

		int temp = t_n - (days * 86400);

		t_hours = temp / 3600; // good, print utc hour
		t_min = (t_n / 60) % 60; // good
		t_sec = t_n % 60; // good



		/*################################################################*/
		/*#       HOUR MIN SECOND HANDS                                  #*/
		/*################################################################*/

		//Render seconds hand
		int currentSecond = t_sec;
		SSDL_SetRenderDrawColor(RED);
		for (int j = 0; j < 60; j++)
		{
			secondX = CENTER_X + int(SEC_RADIUS * cos(sec_angle));
			secondY = CENTER_Y + int(SEC_RADIUS * sin(sec_angle));
			sec_angle += SEC_ANGLE_INCREMENT;

			if (j == currentSecond) {
				SSDL_RenderDrawLine(CENTER_X, CENTER_Y, secondX, secondY);
			}
		}

		//Render min hand
		int currentMin = t_min;
		SSDL_SetRenderDrawColor(WHITE);
		for (int k = 0; k < 60; k++)
		{
			minX = CENTER_X + int(MIN_RADIUS * cos(min_angle));
			minY = CENTER_Y + int(MIN_RADIUS * sin(min_angle));
			min_angle += MIN_ANGLE_INCREMENT;

			if (k == currentMin) {
				SSDL_RenderDrawLine(CENTER_X, CENTER_Y, minX, minY);
			}
		}

		//Render HS hand
		int currentHS = t_hours - gtm_minus_3_fix;
		SSDL_SetRenderDrawColor(WHITE);
		for (int m = 0; m < 12; m++)
		{
			hsX = CENTER_X + int(HS_RADIUS * cos(hs_angle));
			hsY = CENTER_Y + int(HS_RADIUS * sin(hs_angle));
			hs_angle += HS_ANGLE_INCREMENT;

			if (m == currentHS) {
				SSDL_RenderDrawLine(CENTER_X, CENTER_Y, hsX, hsY);
			}
		}

		//Wait 0.5 miliseconds before rendering the clock again
		SSDL_Delay(50);

	}

	SSDL_WaitKey();

	
	return 0;
}