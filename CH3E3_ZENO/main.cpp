//

#include "SSDL.h"

int main(int argc, char** argv)
{
	double division = (double) 1 / 2;

	division += (double)1 / 4;

	division += (double)1 / 8;

	division += (double)1 / 16;

	division += (double)1 / 32;
	sout << division << "\n";

	division += (double)1 / 64;

	division += (double)1 / 128;

	division += (double)1 / 256;

	division += (double)1 / 512;
	sout << division << "\n";

	division += (double)1 / 1024;

	division += (double)1 / 2048;
	sout << division << "\n";

	division += (double)1 / 4096;

	division += (double)1 / 8132;


	sout << division;


	SSDL_WaitKey();


   return 0;
}