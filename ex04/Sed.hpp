#ifndef SED_HPP_H
#define SED_HPP_H

#include <string>
#include <fstream>

class	Sed
{
	std::string&	toReplace_;
	std::string&	replaceWith_;
	std::ifstream	inFile_;
	std::ofstream	outFile_;

public:
	Sed(std::string& toReplace, std::string& replaceWith, std::string &filename);
	~Sed(void);

	bool good();
	void writeToFile();
};

#endif // !SED_HPP_H
