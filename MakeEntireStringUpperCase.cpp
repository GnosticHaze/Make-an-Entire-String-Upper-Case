#include <iostream>
#include <string>
#include <algorithm>

std::string makeUpperCase( const std::string& str ) {

	std::string newUpperCaseString { str };

	// std::transfrom applies a function to each element in a range;
	transform( newUpperCaseString.begin(), newUpperCaseString.end(), newUpperCaseString.begin(), ::toupper );

	return newUpperCaseString;
}

int main( int argc, char* arv[] ) {

	std::string str { "make me uppercase" };

	std::cout << "Word before applying uppercase: " << str << std::endl;
	std::cout << "Word after applying uppercase: " << makeUpperCase( str ) << std::endl;

	std::cout << std::endl;
}


