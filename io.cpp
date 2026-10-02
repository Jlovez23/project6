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
	int i;
	bool keepGoing = true;
	inFile.open("data.csv");
	while(keepGoing){
		if(!inFile.eof()){
			getline(inFile, sintOne, ',');
			getline(inFile, sintTwo, ',');
			getline(inFile, text);
			converter.clear();
			converter.str("");
			converter << sintOne << " " << sintTwo;
			converter >> intOne >> intTwo;
			sumint = intOne + intTwo;
			//std::cout << text << sumint;
			for(i=0;i<sumint;i++){
				std::cout << text;
			}//end for
			std::cout << "\n";
		}// end if
		else{
			keepGoing = false;
		}//end else
	}//end while
} // end main
