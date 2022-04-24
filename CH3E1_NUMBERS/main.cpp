//

#include "SSDL.h"

int main(int argc, char** argv)
{
	const float CM_PER_INCH = 2.54f;
	const float INCH_PER_FOOT = 12;

	float heightFeet = 10;
	float heightInches = 4;

	float heightCM = 173.5;

	sout << "Exercise 1 \n";
	sout << "--------------\n";

	sout << "Height inches " << heightInches << " is " << (heightInches * CM_PER_INCH) << " cm\n";
	sout << "Height feet " << heightFeet << " is " << ((heightFeet * INCH_PER_FOOT) * CM_PER_INCH) << " cm\n\n";

	sout << "Exercise 2 \n";
	sout << "--------------\n";

	sout << "Height cm " << heightCM << " is " << (heightCM / CM_PER_INCH) << " inches\n";
	sout << "Height cm " << heightCM << " is " << (heightCM / CM_PER_INCH) / INCH_PER_FOOT << " feet\n";


	SSDL_WaitKey();

   return 0;
}