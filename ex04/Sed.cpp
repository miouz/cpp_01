#include "Sed.hpp"
#include <fstream>
#include <string>
#include <iostream>

Sed::Sed( std::string &toReplace, std::string& replaceWith, std::string& fileName):
toReplace_(toReplace), replaceWith_(replaceWith)
{
	if (toReplace_.empty())
	{
		std::cerr << "can't accept empty string\n";
		exit(EXIT_FAILURE);
	}
	inFile_.open(fileName, std::ifstream::in);
	outFile_.open(fileName + ".replace", std::ofstream::binary | std::ofstream::out);
	if (!inFile_.is_open() || !outFile_.is_open())
		std::cerr << "can't open file\n";
}

Sed::~Sed(void)
{
	inFile_.close();
	outFile_.close();
	if (inFile_.is_open() || outFile_.is_open())
	{
		std::cerr << "can't close file\n";
	}
}

void	Sed::writeToFile()
{
	std::string fileContent((std::istreambuf_iterator<char>(inFile_)), std::istreambuf_iterator<char>());
	std::size_t toReplaceLen = toReplace_.length();
	std::size_t replaceWithLen = replaceWith_.length();
	std::size_t found = 0;
	std::size_t begin = 0;

	while (good() && (found = fileContent.find(toReplace_, begin)) != std::string::npos)
	{
		outFile_.write(fileContent.c_str() + begin, found - begin);
		outFile_.write(replaceWith_.c_str(), replaceWithLen);
		begin = found + toReplaceLen;
	}
	if (begin < fileContent.length())
		outFile_.write(fileContent.c_str() + begin, fileContent.length() - begin);
}

bool	Sed::good()
{
	if (inFile_.is_open() && outFile_.is_open())
		return (true);
	return (false);
}
