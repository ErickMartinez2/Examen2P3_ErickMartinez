#ifndef TRANSFORMATION_H
#define TRANSFORMATION_H
#include "Quirk.h"
#include <string>
using namespace std;

class Transformation: public Quirk {
	private:
		string forma_cambio;
		int cantidad_impactos;
		bool afectar_otros;
	public:
		Transformation();
		Transformation(string, string, int, bool);
		string getFormaCambio();
		void setFormaCambio(string);
		int getCantidadImpactos();
		void setCantidadImpactos(int);
		bool getAfectarOtros();
		void setAfectarOtros(bool);
};

#endif
