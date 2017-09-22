#include "Quirk.h"

Quirk::Quirk() {

}

Quirk::Quirk(string pdescripcion) {
 descripcion = pdescripcion;
}

string Quirk::getDescripcion() {
	return descripcion;
}

void Quirk::setDescripcion(string pdescripcion) {
	descripcion = pdescripcion;
}
