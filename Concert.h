//
// Created by Rupert Turnbull 10/06/17
//

//Include guards
#ifndef __CONCERT__
#define __CONCERT__

//Includes
#include<string>
#include<vector>
#include<stdlib.h>
#include<ctime>
#include<iostream>

/*
 * Declaration of Concert class with private variables and public functions
 */
class Concert {

private:
	std::string concertName;
	std::vector<std::string> friends;
	int desire;

    //Struct for tm
	struct tm {
		int tm_mday;
		int tm_mon;
		int tm_year;
	};
	std::tm concertDate;

public:

    //Default constructor
	Concert();

    //Another constructor
	Concert(std::string cName,std::vector<std::string> f, int desire, std::tm d);
	
	//getters
	std::string getName();
	std::vector<std::string> getFriends();
	int getDesire();
	std::tm getDate();

	//setters
	void setName(std::string name);
	void setFriends(std::vector<std::string> friends);
	void setDesire(int des);
	void setDate(std::tm d);

    //Operator< overload function
	bool operator<(const Concert& con) const;
	
};

//Operator<< overload function
std::ostream& operator<<(std::ostream& os, const Concert con);

#endif

