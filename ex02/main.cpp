#include <iostream>
#include <string>

int	main( void ) {
	std::string		str;
	std::string*	stringPTR;
	std::string&	stringREF = str;

	str = "HI THIS IS BRAIN";
	stringPTR = &str;
	std::cout << "memory addres string: " << &str << std::endl;
	std::cout << "memory addres stringPTR: " << stringPTR << std::endl;
	std::cout << "memory addres stringREF: " << &stringREF << std::endl;
	
	std::cout << "String value: " << str << std::endl;
	std::cout << "StringPTR value: " << *stringPTR << std::endl;
	std::cout << "StringREF value: " << stringREF << std::endl;
	return (0);
}

