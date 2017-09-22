#ifndef MAESTRO_H
#define MAESTRO_H
#include "Ciudadano.h"
#include "Quirk.h"
#include <string>
using namespace std;

class Maestro: public Ciudadano {
	private:
		string homeroom;
		string classroom;
		string departamento;
		string alias;
		double sueldo;
	public:
		Maestro();
		Maestro(string, int, string, int, string, string, string, string, string, string, string, string, string, double);
		string getHomeroom();
		void setHomeroom(string);
		string getDepartamento();
		void setDepartamento(string);
		string getClassroom();
		void setClassroom(string);
		string getAlias();
		void setAlias(string);
		double getSueldo();
		void setSueldo(double);
};

#endif
