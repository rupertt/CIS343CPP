//
// Created by Rupert Turnbull 10/06/17
//
//

//Includes
#include<string>
#include<vector>
#include<stdlib.h>
#include<ctime>
#include"Concert.h"
#include<algorithm>

/*
 * Main function that creates 10 instances of the concert class and sorts them using the overloaded operator<
 * and prints them using overloaded operator<<
 *
 */
int main(){
	//Vector of concerts
	std::vector<Concert> cV;

	//Creating the concerts
	//
	//Concert 1
	tm concertDateA;
	concertDateA.tm_mday = 16;
	concertDateA.tm_mon = 6;
	concertDateA.tm_year = 118;
	Concert con1("Bach", {"Harry", "Eric", "Kyle", "Danny"}, 6, concertDateA);
	cV.push_back(con1);

	//Concert 2
	tm concertDateB;
	concertDateB.tm_mday = 10;
	concertDateB.tm_mon = 10;
	concertDateB.tm_year = 117;
	Concert con2("Beethoven", {"Nathan"}, 5, concertDateB);
	cV.push_back(con2);

	//Concert 3
	tm concertDateC;
	concertDateC.tm_mday = 10;
	concertDateC.tm_mon = 10;
	concertDateC.tm_year = 117;
	Concert con3("Taylor Swift", {"Josh", "Harry", "JJ", "Simon", "Toby", "Vic", "Ethan"}, 10, concertDateC);
	cV.push_back(con3);

	//Concert 4
	tm concertDateD;
	concertDateD.tm_mday = 18;
	concertDateD.tm_mon = 10;
	concertDateD.tm_year = 117;
	Concert con4("Luke Bryan", {"Ashley"}, 3, concertDateD);
	cV.push_back(con4);

	//Concert 5
	tm concertDateE;
	concertDateE.tm_mday = 02;
	concertDateE.tm_mon = 12;
	concertDateE.tm_year = 117;
	Concert con5("The Strokes", {}, 9, concertDateE);
	cV.push_back(con5);

	//Concert 6
	tm concertDateF;
	concertDateF.tm_mday = 15;
	concertDateF.tm_mon = 10;
	concertDateF.tm_year = 117;
	Concert con6("Two Steps From Hell", {"Alex", "Jeremy", "Joseph"}, 5, concertDateF);
	cV.push_back(con6);

	//Concert 7
	tm concertDateG;
	concertDateG.tm_mday = 9;
	concertDateG.tm_mon = 01;
	concertDateG.tm_year = 118;
	Concert con7("Ludvico", {"Alex", "Jeremy", "Joseph", "Julian"}, 4, concertDateG);
	cV.push_back(con7);

	//Concert 8
	tm concertDateH;
	concertDateH.tm_mday = 31;
	concertDateH.tm_mon = 7;
	concertDateH.tm_year = 118;
	Concert con8("Eric Church", {"Constance"}, 8, concertDateH);
	cV.push_back(con8);

	//Concert 9
	tm concertDateI;
	concertDateI.tm_mday = 26;
	concertDateI.tm_mon = 3;
	concertDateI.tm_year = 119;
	Concert con9("Coldplay", {"Justin", "Andrew"}, 10, concertDateI);
	cV.push_back(con9);

	//Concert 10
	tm concertDateJ;
	concertDateJ.tm_mday = 14;
	concertDateJ.tm_mon = 10;
	concertDateJ.tm_year = 118;
	Concert con10("Jeremy Camp", {"Henry", "Constance"}, 9, concertDateJ);
	cV.push_back(con10);

	//Sort function which sorts the elements of cV
	std::sort(cV.begin(), cV.end());

	//Prints every element of the vector cV
	for (auto& i : cV){
		std::cout<<i;
	}

	return 0;
}
	


