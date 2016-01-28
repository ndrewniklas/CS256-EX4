// Andrew NIklas
// Exercise 2
// Completed 1/27/2016

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv){
	
	std::string str;
	int counter = 0;
	
	for(int i = 1; i < argc; i++){
		std::ifstream fin(argv[i]);
		while(getline(fin,str)){
			std::cout << str << std::endl;
		}
	}
	
	return 0;
}