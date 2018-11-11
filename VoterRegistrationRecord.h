#ifndef VOTERREGISTRATIONRECORD_H
#define VOTERREGISTRATIONRECORD_H
#include <fstream>
#include <string>

using namespace std;

class VoterRegistrationRecord
{
public:
	
        string getFirstName();    //get functions that return the private variables.
	string getLastName();
	string getParty();
	int getAge();


	
        void setFirstName(string f);        // //set functions that set values in the private arrays
	void setLastName(string l);
	void setAge(int a);
	void setParty(string p);



        VoterRegistrationRecord();      // class constructor



private:
        string lastName;            // variables to hold votes  name , age  and party.
	string firstName;
	int age;
	string party;
};

#endif // VOTERREGISTRATIONRECORD_H
