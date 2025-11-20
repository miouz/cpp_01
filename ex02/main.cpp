#include <iostream>
#include <string>

int main(void)
{
	std::string variable = "HI THIS IS BRAIN";
	std::string* stringPTR;
	std::string& stringREF = variable;

	stringPTR = &variable;

// • The memory address of the string variable.
	std::cout << &variable << std::endl;
// • The memory address held by stringPTR.
	std::cout << stringPTR << std::endl;
// • The memory address held by stringREF.
	std::cout << &stringREF << std::endl;
// And then:
// • The value of the string variable.
	std::cout << variable << std::endl;
// • The value pointed to by stringPTR.
	std::cout << *stringPTR << std::endl;
// • The value pointed to by stringREF.
	std::cout << stringREF << std::endl;
	return (0);
}
