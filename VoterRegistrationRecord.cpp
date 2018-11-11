#include "VoterRegistrationRecord.h"
#include <fstream>
#include <string>

using namespace std;

VoterRegistrationRecord::VoterRegistrationRecord()
{
}



string VoterRegistrationRecord::getFirstName()    // gets what inside firstname.
{
	return firstName;
}

string VoterRegistrationRecord::getLastName()   // gets what inside lastname.
{
	return lastName;
}

int VoterRegistrationRecord::getAge()				//get the age from the private vairable "age"
{
	return age;
}

string VoterRegistrationRecord::getParty()				//get the party from the private vairable "party"
{
	return party;
}




void VoterRegistrationRecord::setFirstName(string f)     // stores a value in firstname
{
	firstName = f;
}

void VoterRegistrationRecord::setLastName(string l)			 // stores a value in lastname
{
	lastName = l;
}

void VoterRegistrationRecord::setAge(int a)				 // stores a value in age
{
	age = a;
}

void VoterRegistrationRecord::setParty(string p)		 // stores a value in party
{
	party = p;
}