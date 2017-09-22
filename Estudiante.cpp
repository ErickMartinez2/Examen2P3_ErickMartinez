#include "Estudiante.h"

Estudiante::Estudiante() {

}

Estudiante::Estudiante(string pnombre, int pedad, string pfecha, int paltura, string ppelo, string pojos, string plikes, string pdislikes, string psangre, double ppromedio, string phomeroom, string pclassroom): Ciudadano(pnombre, pedad, pfecha, paltura, ppelo, pojos, plikes, pdislikes, psangre) {
	promedio = ppromedio;
	homeroom = phomeroom;
	classroom = pclassroom;
}

double Estudiante::getPromedio() {
	return promedio;
}

void Estudiante::setPromedio(double ppromedio) {
	promedio = promedio;
}

string Estudiante::getHomeroom() {
	return homeroom;
}

void Estudiante::setHomeroom(string phomeroom) {
	homeroom = phomeroom;
}

string Estudiante::getClassroom() {
	return classroom;
}

void Estudiante::setClassroom(string pclassroom) {
	classroom = pclassroom;
}

Maestro* Estudiante::getMaestro() {
	return maestro;
}

void Estudiante::setMaestro(Maestro* pmaestro) {
	maestro = pmaestro;
}
