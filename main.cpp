#include "MakefileGenerator.h"

int main() {
	MakefileGenerator makeGen;
	makeGen.getUserInput();
	makeGen.generateMakefile();
	return (0);
}
