#include "Executive.h"
#include "VoterRegistrationRecord.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;

Executive::Executive (char* file1)
{
	string filename = file1;      // store file locate ina string variable.
	//int numOfReg;						//number of regirser so we know how big to make the array 
	string temp_f, temp_L, temp_p;    // temapary storage 
	int temp_a;
		
	ifstream vote;					// ifstream variable 
	vote.open(filename);			// open file 

	if (vote.fail())					// give an error message if the file didn't open 
	{
		cerr << "failed to open file ";
		exit(6);
	}

vote >> numOfReg;						// get the number of regisster and stor ina varible 

VoterRegistrationRecord* rec1 = new VoterRegistrationRecord[numOfReg];




for (int i=0; i < numOfReg; i++)
{
	
        vote >> temp_f;		// read from file and store values in temporary variable
	vote >> temp_L;
	vote >> temp_a;
	vote >> temp_p;


        rec1[i].setFirstName(temp_f);       // store temaporary values in private
	rec1[i].setLastName(temp_L);
	rec1[i].setAge(temp_a);
	rec1[i].setParty(temp_p);	
	
	 
	
}
vote.close(); // close the file.
rec = rec1;


}


void Executive::run()
{
	int  choice = 0;
	
	while (choice <= 4)
	{
		cout << "1: Query last name" << endl << "2 : Query age range" << endl << "3 : Query affiliations" << endl << "4 : Report number of people with affiliation" << endl << "5 : Quit " << endl;
                cin >> choice;			// get the number of the user's choice
		switch (choice)
		{
		case 1:
                        lastName();     // if "1" is chosen then call the method lastname.
			break;
		case 2:
                        Qage();         // if "2" is chosen then call the method Qage.
			break;
		case 3:
                        Qparty();       // if "3" is chosen then call the method Qparty.
			break;
		case 4:
                        numOfParty();   // if "4" is chosen then call the method numOfParty
			break;
		default:
                        cout << "Thanks for checking voter registrations!" << endl << "Bye.";  // if any other number is chosen run this code.
			exit(0);

		}
	}
}

	void Executive::lastName()
	{
	int counter = 0;
		string name;
                cout << "Enter last name:  ";       // ask user to enter name.
                cin >> name;                        // stored input in name
		

		while ( counter < numOfReg)
		{
                        if (rec[counter].getLastName() == name)   // if one the data base matches with name inputed the cout voter info
			{
				cout << "Record:  " << rec[counter].getFirstName() << "  " << rec[counter].getLastName() << ";  " << rec[counter].getAge() << "   Registered as " << rec[counter].getParty() << endl;
			}
			counter++;
		}

		

	}

	void Executive::Qage()
	{
		int age, counter =0;
                cout << "Enter age:";           // ask user to enter age.
                cin >> age;                     // stored input in age

		while (counter < numOfReg)
		{

                if (rec[counter].getAge() == age) //if age matches cout user information.
			{
				cout << "Record:  " << rec[counter].getFirstName() << "  " << rec[counter].getLastName() << ";  " << rec[counter].getAge() << "   Registered as " << rec[counter].getParty() << endl;
			}
			counter++;
		}

	}

	void Executive::Qparty()
	{
		int counter = 0;
		string party;
                cout << "Enter affiliated Party:";      // ask user to enter party name.
                cin >> party;                           // stored input in party

		while (counter < numOfReg)
		{

                        if (rec[counter].getParty() == party) // if one of the data base age matches with age inputed then cout voter info
			{
				cout << "Record:  " << rec[counter].getFirstName() << "  " << rec[counter].getLastName() << ";  " << rec[counter].getAge() << "   Registered as " << rec[counter].getParty() << endl;
			}
			counter++;
		}

	}

	void Executive::numOfParty()
	{
		int i = 0;
		int counter = 0;
                string party;                       // ask user to enter party name.
                cout << "Enter  Party:";            // stored input in party
		cin >> party;
		while (counter < numOfReg)
		{

                        if (rec[counter].getParty() == party) // counts how make people of the enter party there are in the data basse
			{
				i++;
			}
			counter++;
		}

                cout <<  i <<  "   Registered as " << party << endl;        // print how people are in that party
	}
	
