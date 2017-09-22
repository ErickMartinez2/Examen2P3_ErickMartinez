#ifndef QUIRK_H
#define QUIRK_H
#include <string>
using namespace std;

class Quirk {
	private:
		string descripcion;
	public:
		Quirk();
		Quirk(string);
		string getDescripcion();
		void setDescripcion(string);
};

#endif
