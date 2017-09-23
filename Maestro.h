#ifndef MAESTRO_H
#define MAESTRO_H
#include "Ciudadano.h"
#include "Estudiante.h"
#include "Quirk.h"
#include <string>
#include <vector>
using namespace std;
class Estudiante;

class Maestro: public Ciudadano {
	private:
		string homeroom;
		string classroom;
		string departamento;
		string alias;
		double sueldo;
		vector<Estudiante*> estudiantes;
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
		vector<Estudiante*> getEstudiantes();
		void setEstudiantes(vector<Estudiante*>);
};

#endif
