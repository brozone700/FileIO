#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int prntCount = 0;
int x;
int y;
string sx;
string sy;
string word;
int main(){
	std::ifstream inFile;
	std::stringstream converter;
	std::stringstream ss;
	inFile.open("data.csv");
	if (!inFile.is_open()) {
		cout << "unable to open file" << endl;
	}
	string currentLine;
	while (getline(inFile, currentLine)){
		//resets the stringstreams
		ss.clear();
   		ss.str("");
		ss.str(currentLine);
    	converter.clear();
    	converter.str("");
		
		getline(ss, sx, ',');
        getline(ss, sy, ',');
		getline(ss, word);
		
		//converts x from str to int
		converter << sx;
		converter >> x;
		converter.clear();
        converter.str("");
		
		//converts y from str to int
		converter << sy;
		converter >> y;
		prntCount = x + y;

		//prints the word prntCount of times
		for ( int i = 0; i < prntCount; i++){
			cout << word;
		}
		cout << "\n";
	}
	inFile.close();
}
