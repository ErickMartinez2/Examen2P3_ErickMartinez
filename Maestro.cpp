#include "Maestro.h"

Maestro::Maestro() {

}

Maestro::Maestro(string pnombre, int pedad, string pfecha, int paltura, string ppelo, string pojos, string plikes, string pdislikes, string psangre, string pdepartamento, string phomeroom, string pclassroom, string palias, double psueldo): Ciudadano(pnombre, pedad, pfecha, paltura, ppelo, pojos, plikes, pdislikes, psangre) {
	departamento = pdepartamento;
	homeroom = phomeroom;
	classroom = pclassroom;
	alias = palias;
	sueldo = psueldo;
}

string Maestro::getDepartamento() {
	return departamento;
}

void Maestro::setDepartamento(string pdepartamento) {
	departamento = pdepartamento;
}

string Maestro::getHomeroom() {
	return homeroom;
}

void Maestro::setHomeroom(string phomeroom) {
	homeroom = phomeroom;
}

string Maestro::getClassroom() {
	return classroom;
}

void Maestro::setClassroom(string pclassroom) {
	classroom = pclassroom;
}

string Maestro::getAlias() {
	return alias;
}

void Maestro::setAlias(string palias) {
	alias = palias;
}

double Maestro::getSueldo() {
	return sueldo;
}

void Maestro::setSueldo(double psueldo) {
	sueldo = psueldo;
}


