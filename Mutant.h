#ifndef MUTANT_H
#define MUTANT_H
#include "Quirk.h"
#include <string>
using namespace std;

class Mutant: public Quirk {
	public:
		Mutant();
		Mutant(string);
};

#endif
