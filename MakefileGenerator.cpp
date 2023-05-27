#include "MakefileGenerator.h"
#include <iostream>
#include <fstream>

void	MakefileGenerator::getUserInput(void)
{
	std::cout << "Enter the project name: ";
	std::cin >> project_name_;

	std::cout << "Is the project C or C++? ";
	std::cin >> language_;
	std::cin.ignore();

	std::cout << "Write the names of your files separated by an empty space: ";
	std::getline(std::cin, files_);
}

void	MakefileGenerator::generateMakefile(void)
{
	std::string makefileData = "NAME\t=\t" + project_name_ + "\n\nRM\t\t=\trm -rf\n";

	if (language_ == "C")
		makefileData += CC;
	else if (language_ == "C++")
		makefileData += CPP;
	makefileData += "SRC\t\t=\t" + files_ + "\n\n"+ ALL + MAKE + CLEAN + FCLEAN + RE;

	std::ofstream makefile ("Makefile");
	if (makefile.is_open())
	{
		makefile << makefileData;
		makefile.close();
		std::cout << "Makefile generated!" << std::endl;
	}
	else
		std::cout << "There was an error trying to generate your makefile." << std::endl;
}
