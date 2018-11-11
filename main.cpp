/*
 *
 *Martin Nganga
ku ID: 2795718
*/

#include "Executive.h"
#include "VoterRegistrationRecord.h"
#include <iostream>

int main(int argc, char *argv[])
{
	// std::cout << "Test" << std::endl;
	Executive exec(argv[1]);
	exec.run();
	return 0;
}
