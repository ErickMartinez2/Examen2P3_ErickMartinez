#include "Transformation.h"

Transformation::Transformation() {

}

Transformation::Transformation(string pdescripcion, string pforma_cambio, int pcantidad_impactos, bool pafectar_otros): Quirk(pdescripcion){
	forma_cambio = pforma_cambio;
	cantidad_impactos = pcantidad_impactos;
	afectar_otros = pafectar_otros;
}

string Transformation::getFormaCambio() {
	return forma_cambio;
}

void Transformation::setFormaCambio(string pforma_cambio) {
	forma_cambio = pforma_cambio;
}

int Transformation::getCantidadImpactos() {
	return cantidad_impactos;
}

void Transformation::setCantidadImpactos(int pcantidad_impactos) {
	cantidad_impactos = pcantidad_impactos;
}

bool Transformation::getAfectarOtros() {
	return afectar_otros;
}

void Transformation::setAfectarOtros(bool pafectar_otros) {
	afectar_otros = pafectar_otros;
}

