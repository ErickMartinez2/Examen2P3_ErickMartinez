#include "Emmitter.h"

Emmitter::Emmitter() {

}

Emmitter::Emmitter(string pdescripcion, string pefecto_emision, int pcantidad_emision, bool pcontacto_fisico): Quirk(pdescripcion){
	efecto_emision = pefecto_emision;
	cantidad_emision = pcantidad_emision;
	contacto_fisico = pcontacto_fisico;
}

string Emmitter::getEfectoEmision() {
	return efecto_emision;
}

void Emmitter::setEfectoEmision(string pefecto_emision) {
	efecto_emision = pefecto_emision;
}

int Emmitter::getCantidadEmision() {
	return cantidad_emision;
}

void Emmitter::setCantidadEmision(int pcantidad_emision) {
	cantidad_emision = pcantidad_emision;
}

bool Emmitter::getContactoFisico() {
	return contacto_fisico;
}

void Emmitter::setContactoFisico(bool pcontacto_fisico) {
	contacto_fisico = pcontacto_fisico;
}

