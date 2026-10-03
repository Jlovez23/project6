#include <fstream>
#include <iostream>
#include <sstream>

int main(){
	std::ifstream inFile;
	int intOne;
	int intTwo;
	int sumint;
	std::string text;
	std::string sintOne;
	std::string sintTwo;
	std::stringstream converter;
	std::string currentline;
	int i;
	bool keepGoing = true;
	inFile.open("data.csv");
	
	while(getline(inFile, currentline)){
		std::stringstream lineParser(currentline);

		getline(lineParser, sintOne, ',');
		getline(lineParser, sintTwo, ',');
		getline(lineParser, text);

		converter.clear();
		converter.str("");
		converter << sintOne << " " << sintTwo;
		converter >> intOne >> intTwo;

		sumint = intOne + intTwo;

		for(i=0;i<sumint;i++){
			std::cout << text;
		}//end for
		std::cout << "\n";
	}//end while
} // end main
