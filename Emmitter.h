#ifndef EMMITTER_H
#define EMMITTER_H
#include "Quirk.h"
#include <string>
using namespace std;

class Emmitter: public Quirk {
	private:
		string efecto_emision;
		int cantidad_emision;
		bool contacto_fisico;
	public:
		Emmitter();
		Emmitter(string, string, int, bool);
		string getEfectoEmision();
		void setEfectoEmision(string);
		int getCantidadEmision();
		void setCantidadEmision(int);
		bool getContactoFisico();
		void setContactoFisico(bool);
};

#endif
