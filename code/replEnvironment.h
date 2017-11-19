#ifndef __REPL__
#define __REPL__
#include "machine.h"
class replEnvironment{

private:
	machine* localMachine;
	char* bindings[];
public:
	replEnvironment(bool AIO, bool signedCells, int tapeLength);
	bool process(char* input);
};

#endif
