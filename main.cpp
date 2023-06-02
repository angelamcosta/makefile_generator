#include "MakefileGenerator.hpp"

int main() {
	MakefileGenerator makeGen;
	makeGen.getUserInput();
	makeGen.generateMakefile();
	return (0);
}
