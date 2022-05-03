//
#include <ctime>
#include "SSDL.h"

int main(int argc, char** argv)
{

	int n;
	
	int hours = 0;
	int min = 0;
	int sec = 0;

	

	while (true)
	{

		SSDL_RenderClear();
		n = int(time(nullptr));
		//n = 1650931307;
		SSDL_RenderText(n, 10, 10);

		//hours =  n / 3600;

		int days = n / 86400;

		int temp = n - (days * 86400);

		hours = temp / 3600; // good, print utc hour
		min = (n / 60) % 60; // good
		sec = n % 60; // good

		SSDL_RenderText(temp, 50, 150);
		SSDL_RenderText(days, 50, 100);
		SSDL_RenderText(hours, 0, 40);
		SSDL_RenderText(min, 90, 40);
		SSDL_RenderText(sec, 150, 40);



		SSDL_Delay(100);
	}


	//sout << currentTimeSeconds;

	SSDL_WaitKey();
	
	return 0;
}