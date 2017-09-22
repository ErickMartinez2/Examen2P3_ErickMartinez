#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include "Ciudadano.h"
#include "Maestro.h"
#include <string>
using namespace std;

class Estudiante: public Ciudadano {
	private:
		double promedio;
		string homeroom;
		string classroom;
		Maestro* maestro;
	public:
		Estudiante();
		Estudiante(string, int, string, int, string, string, string, string, string, double, string, string);
		string getHomeroom();
		void setHomeroom(string);
		double getPromedio();
		void setPromedio(double);
		string getClassroom();
		void setClassroom(string);
		Maestro* getMaestro();
		void setMaestro(Maestro*);
};

#endif
