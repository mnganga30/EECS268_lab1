#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "VoterRegistrationRecord.h"

class Executive
{
public:

	Executive(char*);
	//Executive();
        void run();         // functon for each choice  1,2,3,4,
	void lastName();
	void Qage();
	void Qparty();
	void numOfParty();

private:
        VoterRegistrationRecord* rec;// object pointer
	int numOfReg;
	 
	
};

#endif // EXECUTIVE_H

