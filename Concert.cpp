//
// Created by Rupert Turnbull 10/06/17
//

//Includes
#include<string>
#include<vector>
#include<ctime>
#include"Concert.h"

/*
 * Concert.cpp file which defines all the functions from the Concert.h file.
 */

//Default Constructor
Concert::Concert(){
	concertName = "None";
	friends.empty();
	desire = 0;
	concertDate.tm_mday = 1;
	concertDate.tm_mon = 1;
	concertDate.tm_year = 0;

}

//Constructor that takes imputs
Concert::Concert(std::string cName,std::vector<std::string> f, int des, std::tm d){
	concertName = cName;
	friends = f;
	desire = des;
	concertDate = d;
}


//implemetation of accessors
std::string Concert::getName(){
	return concertName;
}
std::vector<std::string> Concert::getFriends(){
	return friends;
}
int Concert::getDesire(){
	return desire;
}
std::tm Concert::getDate(){
	return concertDate;
}

//implemetation of mutators
void Concert::setName(std::string name){
	concertName = name;
}
void Concert::setFriends(std::vector<std::string> f){
	friends = f;
}
void Concert::setDesire(int des){
	desire = des;
}
void Concert::setDate(std::tm d){
    concertDate = d;
}

//Definition of operator< overload
bool Concert::operator<(const Concert& con) const {
	if(this -> concertDate.tm_year < con.concertDate.tm_year)
		return true;
	if(this -> concertDate.tm_year > con.concertDate.tm_year)
		return false;
	if(this -> concertDate.tm_mon < con.concertDate.tm_mon)
		return true;
	if(this -> concertDate.tm_mon > con.concertDate.tm_mon)
		return false;	
	if(this -> concertDate.tm_mday < con.concertDate.tm_mday)
		return true;
	if(this -> concertDate.tm_mday > con.concertDate.tm_mday)
		return false;
	if(this -> desire > con.desire)
		return true;
	return false;
}
//Definition of operator<< overload
std::ostream& operator<<(std::ostream& os, Concert con){

    os << "Concert Name: " << con.getName() << '\n' << "Concert Date: "<< con.getDate().tm_mon << '/' << con.getDate().tm_mday <<
       '/' << (con.getDate().tm_year + 1900) << "\nDesire to go: " << con.getDesire() << std::endl;
    os << "Friends: " ;
    for (auto& i : con.getFriends()){
        os << i << ' ' ;
    };
    os << "\n\n";
	return os;
}
