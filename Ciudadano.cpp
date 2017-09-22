#include "Ciudadano.h"

Ciudadano::Ciudadano() {

}

Ciudadano::Ciudadano(string pnombre, int pedad, string pfecha, int paltura, string ppelo, string pojos, string plikes, string pdislikes, string psangre) {
	nombre = pnombre;
	edad = pedad;
	fecha = pfecha;
	altura = paltura;
	pelo = ppelo;
	ojos = pojos;
	likes = plikes;
	dislikes = pdislikes;
	sangre = psangre;
}

string Ciudadano::getNombre() {
	return nombre;
}

void Ciudadano::setNombre(string pnombre) {
	nombre = pnombre;
}

int Ciudadano::getEdad() {
	return edad;
}

void Ciudadano::setEdad(int pedad) {
	edad = pedad;
}

string Ciudadano::getFecha() {
	return fecha;
}

void Ciudadano::setFecha(string pfecha) {
	fecha = pfecha;
}

int Ciudadano::getAltura() {
	return altura;
}

void Ciudadano::setAltura(int paltura) {
	altura = paltura;
}

string Ciudadano::getPelo() {
	return pelo;
}

void Ciudadano::setPelo(string ppelo) {
	pelo = ppelo;
}

string Ciudadano::getOjos() {
	return ojos;
}

void Ciudadano::setOjos(string pojos) {
	ojos = pojos;
}

string Ciudadano::getLikes() {
	return likes;
}

void Ciudadano::setLikes(string plikes) {
	likes = plikes;
}

string Ciudadano::getDislikes() {
	return dislikes;
}

void Ciudadano::setDislikes(string pdislikes) {
	likes = pdislikes;
}

string Ciudadano::getSangre() {
	return sangre;
}

void Ciudadano::setSangre(string psangre) {
	sangre = psangre;
}

Quirk* Ciudadano::getQuirk() {
	return quirk;
}

void Ciudadano::setQuirk(Quirk* pquirk) {
	quirk = pquirk;
}

