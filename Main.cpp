#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"
#include "Ciudadano.h"
#include "Emmitter.h"
#include "Estudiante.h"
#include "Maestro.h"
#include "Mutant.h"
#include "Quirk.h"
#include "Transformation.h"
#include <typeinfo>
using namespace std;

int main() {
	int opcion;
	LinkedList ciudadanos;
	do {
		cout << endl;
		cout << "*** Boku No Hero Academy ***" << endl
			<< "1. Contratar Maestro" << endl
			<< "2. Despedir Maestro" << endl
			<< "3. Matricular Alumno" << endl
			<< "4. Expulsar Alumno" << endl
			<< "5. Listar Maestros" << endl
			<< "6. Listar Estudiantes" << endl
			<< "7. Sueldo Promedio Maestros" << endl
			<< "8. Sueldo Promedio Alumnos" << endl
			<< "9. Listar Alumnos por Departamento" << endl
			<< "10. Guardar Registros en Archivo Txt" << endl
			<< "11. Salir" << endl
			<< "Ingrese su opcion: ";
		cin >> opcion;
		cout << endl;
		switch (opcion) {
			case 1:{
					   cout << "-> Contratar Maestro" << endl;
					   cout << "Ingrese el nombre: ";
					   string nombre;
					   cin >> nombre;
					   cout << "Ingrese la edad: ";
					   int edad;
					   cin >> edad;
					   cout << "Ingrese la fecha de nacimiento: ";
					   string fecha;
					   cin >> fecha;
					   cout << "Ingrese la altura (en cm): ";
					   int altura;
					   cin >> altura;
					   cout << "Ingrese el color de pelo: ";
					   string pelo;
					   cin >> pelo;
					   cout << "Ingrese el color de ojos: ";
					   string ojos;
					   cin >> ojos;
					   cout << "Ingrese las cosas buenas: ";
					   string likes;
					   cin >> likes;
					   cout << "Ingrese las cosas malas: ";
					   string dislikes;
					   cin >> dislikes;
					   cout << "Ingrese el tipo de sangre: ";
					   string sangre;
					   cin >> sangre;
					   cout << "Ingrese el homeroom: ";
					   string homeroom;
					   cin >> homeroom;
					   cout << "Ingrese el classroom: ";
					   string classroom;
					   cin >> classroom;
					   cout << endl;
					   cout << "-> Clasificacion Departamento" << endl
						   << "1. Dept. of Heroes" << endl
						   << "2. Dept. of Support" << endl
						   << "3. Dept. of Management" << endl
						   << "Ingrese su opcion: ";
					   int opcion3;
					   cin >> opcion3;
					   string departamento;
					   switch (opcion3) {
						   case 1:
							   departamento = "Dept. of Heroes";
							   break;
						   case 2:
							   departamento = "Dept. of Support";
							   break;
						   case 3:
							   departamento = "Dept. of Management";
							   break;
					   }
					   cout << endl;
					   cout << "Ingrese el alias: ";
					   string alias;
					   cin >> alias;
					   cout << "Ingrese el sueldo: ";
					   double sueldo;
					   cin >> sueldo;
					   Maestro* ciudadano = new Maestro(nombre, edad, fecha, altura, pelo, ojos, likes, dislikes, sangre, departamento, homeroom, classroom, alias, sueldo);
					   cout << endl;
					   cout << "-> Clasificacion Quirks" << endl
						   << "1. Emmitter" << endl
						   << "2. Transformation" << endl
						   << "3. Mutant" << endl
						   << "Ingrese su opcion: ";
					   int opcion2;
					   cin >> opcion2;
					   cout << endl;
					   switch (opcion2) {
						   case 1:{
									  cout << "-> Informacion Emmitter" << endl;
									  string descripcion = "Emite sustancias tales como acido, electricidad, fuego, hielo, etc.";
									  cout << "Ingrese el efecto de la emision: ";
									  string efecto_emision;
									  cin >> efecto_emision;
									  cout << "Ingrese la cantidad posible de objetos afectados: ";
									  int cantidad_emision;
									  cin >> cantidad_emision;
									  cout << "Necesita contacto fisico para activarse? [s/n]: ";
									  char contactofisico;
									  cin >> contactofisico;
									  bool contacto_fisico;
									  if (contactofisico == 's' || contactofisico == 'S') {
										  contacto_fisico = true;	  
									  } else {
										  contacto_fisico = false;
									  }
									  Quirk* quirk = new Emmitter(descripcion, efecto_emision, cantidad_emision, contacto_fisico);
									  ciudadano -> setQuirk(quirk);
								  }break;
						   case 2:{
									  cout << "-> Informacion Transformation" << endl;
									  string descripcion = "Cambia las caracteristicas fisicas de la persona con la individualidad.";
									  cout << "Ingrese la forma de cambio: ";
									  string forma_cambio;
									  cin >> forma_cambio;
									  cout << "Ingrese la cantidad posible de impactos: ";
									  int cantidad_impactos;
									  cin >> cantidad_impactos;
									  cout << "Es posible que afecte a otros? [s/n]: ";
									  char afectarotros;
									  cin >> afectarotros;
									  bool afectar_otros;
									  if (afectarotros == 's' || afectarotros == 'S') {
										  afectar_otros = true;	  
									  } else {
										  afectar_otros = false;
									  }
									  Quirk* quirk = new Transformation(descripcion, forma_cambio, cantidad_impactos, afectar_otros);
									  ciudadano -> setQuirk(quirk);
								  }break;
						   case 3:{
									  cout << "-> Informacion Mutant" << endl;
									  cout << "Informacion Completa" << endl;
									  string descripcion = "Es una caracteristica fisica que siempre esta presente en el usario.";
									  Quirk* quirk = new Mutant(descripcion);
									  ciudadano -> setQuirk(quirk);
								  }break;
					   }
					   ciudadanos.insert(ciudadano);
					   cout << endl;
					   cout << "Maestro Agregado!" << endl;
				   }break;
			case 2:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_maestros = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
								   contador_maestros++;
							   }
						   }
						   if (contador_maestros != 0) {
							   cout << "-> Despedir Maestro" << endl;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
									   cout << i << ". Maestro " << ciudadanos.get(i, size) -> getNombre() << endl;
								   }
							   }
							   cout << "Ingrese el numero del maestro: ";
							   int num_maestro;
							   cin >> num_maestro;
							   ciudadanos.remove(num_maestro, size);
							   cout << endl;
							   cout << "Maestro Despedido!" << endl;
						   } else {
							   cout << "No Hay Maestros Que Eliminar!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Que Eliminar!" << endl;
					   }
				   }break;
			case 3:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_maestros = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
								   contador_maestros++;
							   }
						   }
						   if (contador_maestros != 0) {
							   cout << "-> Matricular Alumno " << endl;
							   cout << "Ingrese el nombre: ";
							   string nombre;
							   cin >> nombre;
							   cout << "Ingrese la edad: ";
							   int edad;
							   cin >> edad;
							   cout << "Ingrese la fecha de nacimiento: ";
							   string fecha;
							   cin >> fecha;
							   cout << "Ingrese la altura (en cm): ";
							   int altura;
							   cin >> altura;
							   cout << "Ingrese el color de pelo: ";
							   string pelo;
							   cin >> pelo;
							   cout << "Ingrese el color de ojos: ";
							   string ojos;
							   cin >> ojos;
							   cout << "Ingrese las cosas buenas: ";
							   string likes;
							   cin >> likes;
							   cout << "Ingrese las cosas malas: ";
							   string dislikes;
							   cin >> dislikes;
							   cout << "Ingrese el tipo de sangre: ";
							   string sangre;
							   cin >> sangre;
							   cout << "Ingrese el promedio: ";
							   double promedio;
							   cin >> promedio;
							   cout << "Ingrese el homeroom: ";
							   string homeroom;
							   cin >> homeroom;
							   cout << "Ingrese el classroom: ";
							   string classroom;
							   cin >> classroom;
							   cout << endl;
							   cout << "-> Lista de Maestros" << endl;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
									   cout << i << ". Maestro " << ciudadanos.get(i, size) -> getNombre() << endl;
								   }
							   }
							   cout << "Ingrese el numero del maestro guia: ";
							   int num_maestro;
							   cin >> num_maestro;
							   Ciudadano* ciudadano_maestro = ciudadanos.get(num_maestro, size);
							   Maestro* maestro = dynamic_cast<Maestro*>(ciudadano_maestro);
							   Estudiante* ciudadano = new Estudiante(nombre, edad, fecha, altura, pelo, ojos, likes, dislikes, sangre, promedio, homeroom, classroom);
							   ciudadano -> setMaestro(maestro);
							   vector<Estudiante*> mis_estudiantes = maestro -> getEstudiantes();
							   mis_estudiantes.push_back(ciudadano);
							   ciudadanos.remove(num_maestro, size);
							   maestro -> setEstudiantes(mis_estudiantes);
							   ciudadanos.insert(maestro);
							   cout << endl;
							   cout << "-> Clasificacion Quirks" << endl
								   << "1. Emmitter" << endl
								   << "2. Transformation" << endl
								   << "3. Mutant" << endl
								   << "Ingrese su opcion: ";
							   int opcion2;
							   cin >> opcion2;
							   cout << endl;
							   switch (opcion2) {
								   case 1:{
											  cout << "-> Informacion Emmitter" << endl;
											  string descripcion = "Emite sustancias tales como acido, electricidad, fuego, hielo, etc.";
											  cout << "Ingrese el efecto de la emision: ";
											  string efecto_emision;
											  cin >> efecto_emision;
											  cout << "Ingrese la cantidad posible de objetos afectados: ";
											  int cantidad_emision;
											  cin >> cantidad_emision;
											  cout << "Necesita contacto fisico para activarse? [s/n]: ";
											  char contactofisico;
											  cin >> contactofisico;
											  bool contacto_fisico;
											  if (contactofisico == 's' || contactofisico == 'S') {
												  contacto_fisico = true;	  
											  } else {
												  contacto_fisico = false;
											  }
											  Quirk* quirk = new Emmitter(descripcion, efecto_emision, cantidad_emision, contacto_fisico);
											  ciudadano -> setQuirk(quirk);
										  }break;
								   case 2:{
											  cout << "-> Informacion Transformation" << endl;
											  string descripcion = "Cambia las caracteristicas fisicas de la persona con la individualidad.";
											  cout << "Ingrese la forma de cambio: ";
											  string forma_cambio;
											  cin >> forma_cambio;
											  cout << "Ingrese la cantidad posible de impactos: ";
											  int cantidad_impactos;
											  cin >> cantidad_impactos;
											  cout << "Es posible que afecte a otros? [s/n]: ";
											  char afectarotros;
											  cin >> afectarotros;
											  bool afectar_otros;
											  if (afectarotros == 's' || afectarotros == 'S') {
												  afectar_otros = true;	  
											  } else {
												  afectar_otros = false;
											  }
											  Quirk* quirk = new Transformation(descripcion, forma_cambio, cantidad_impactos, afectar_otros);
											  ciudadano -> setQuirk(quirk);
										  }break;
								   case 3:{
											  cout << "-> Informacion Mutant" << endl;
											  cout << "Informacion Completa" << endl;
											  string descripcion = "Es una caracteristica fisica que siempre esta presente en el usario.";
											  Quirk* quirk = new Mutant(descripcion);
											  ciudadano -> setQuirk(quirk);
										  }break;
							   }
							   ciudadanos.insert(ciudadano);
							   cout << endl;
							   cout << "Estudiante Agregado!" << endl;
						   } else {
							   cout << "No Hay Maestros Agregados!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Agregados!" << endl;
					   }
				   }break;
			case 4:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_estudiantes = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
								   contador_estudiantes++;
							   }
						   }
						   if (contador_estudiantes != 0) {
							   cout << "-> Expusar Alumno" << endl;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
									   cout << i << ". Alumno " << ciudadanos.get(i, size) -> getNombre() << endl;
								   }
							   }
							   cout << "Ingrese el numero del alumno: ";
							   int num_maestro;
							   cin >> num_maestro;
							   ciudadanos.remove(num_maestro, size);
							   cout << endl;
							   cout << "Alumno Expulsado!" << endl;
						   } else {
							   cout << "No Hay Estudiantes Que Eliminar!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Que Eliminar!" << endl;
					   }
				   }break;
			case 5:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_maestros = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
								   contador_maestros++;
							   }
						   }
						   if (contador_maestros != 0) {
							   cout << "-> Lista de Maestros" << endl;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
									   cout << "- Maestro: " << ciudadanos.get(i, size) -> getNombre() << endl;
								   }
							   }
						   } else {
							   cout << "No Hay Maestros Que Listar!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Que Listar!" << endl;
					   }
				   }break;
			case 6:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_estudiantes = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
								   contador_estudiantes++;
							   }
						   }
						   if (contador_estudiantes != 0) {
							   cout << "-> Lista de Estudiantes" << endl;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
									   cout << "- Estudiante: " << ciudadanos.get(i, size) -> getNombre() << endl;
								   }
							   }
						   } else {
							   cout << "No Hay Estudiantes Que Listar!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Que Listar!" << endl;
					   }
				   }break;
			case 7:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_maestros = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
								   contador_maestros++;
							   }
						   }
						   if (contador_maestros != 0) {
							   cout << "-> Sueldo Promedio Maestros" << endl;
							   int contador_maestros = 0;
							   double acumulador_sueldos;
							   double promedio;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
									   Maestro* maestro = dynamic_cast<Maestro*>(ciudadanos.get(i, size));
									   acumulador_sueldos += maestro -> getSueldo();
									   contador_maestros++;
								   }
							   }
							   promedio = acumulador_sueldos / contador_maestros;
							   cout << "Promedio Estimado: " << promedio << endl;
						   } else {
							   cout << "No Hay Maestros Para El Promedio!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Para El Promedio!" << endl;
					   }
				   }break;
			case 8:{
					   int size = ciudadanos.getSize();
					   if (size != 0) {
						   int contador_estudiantes = 0;
						   for (int i = 1; i <= size; i++) {
							   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
								   contador_estudiantes++;
							   }
						   }
						   if (contador_estudiantes != 0) {
							   cout << "-> Sueldo Promedio Estudiantes" << endl;
							   int contador_estudiantes = 0;
							   double acumulador_promedios;
							   double promedio;
							   for (int i = 1; i <= size; i++) {
								   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
									   Estudiante* estudiante = dynamic_cast<Estudiante*>(ciudadanos.get(i, size));
									   acumulador_promedios += estudiante -> getPromedio();
									   contador_estudiantes++;
								   }
							   }
							   promedio = acumulador_promedios / contador_estudiantes;
							   cout << "Promedio Estimado: " << promedio << endl;

						   } else {
							   cout << "No Hay Estudiantes Para El Promedio!" << endl;
						   }
					   } else {
						   cout << "No Hay Ciudadanos Para El Promedio!" << endl;
					   }
				   }break;
			case 9:{	  
					   cout << "-> Lista de Estudiantes" << endl;
					   int size = ciudadanos.getSize();
					   cout << "- Dept. of Heroes " << endl;
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
							   Maestro* maestro = dynamic_cast<Maestro*>(ciudadanos.get(i, size));
							   if (maestro -> getDepartamento() == "Dept. of Heroes"){
								   vector<Estudiante*> mis_estudiantes = maestro -> getEstudiantes();
								   for (int j = 0; j < mis_estudiantes.size(); j++) {
										cout << "  Estudiante: " << mis_estudiantes[j] -> getNombre() << endl;
								   }
							   }
						   }
					   }
					   cout << "- Dept. of Support " << endl;
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
							   Maestro* maestro = dynamic_cast<Maestro*>(ciudadanos.get(i, size));
							   if (maestro -> getDepartamento() == "Dept. of Support"){
								   vector<Estudiante*> mis_estudiantes = maestro -> getEstudiantes();
								   for (int j = 0; j < mis_estudiantes.size(); j++) {
										cout << "  Estudiante: " << mis_estudiantes[j] -> getNombre() << endl;
									}
							   }
						   }
					   }
					   cout << "- Dept. of Management " << endl;
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
							   Maestro* maestro = dynamic_cast<Maestro*>(ciudadanos.get(i, size));
							   if (maestro -> getDepartamento() == "Dept. of Management"){
								   vector<Estudiante*> mis_estudiantes = maestro -> getEstudiantes();
								   for (int j = 0; j < mis_estudiantes.size(); j++) {
										cout << "  Estudiante: " << mis_estudiantes[j] -> getNombre() << endl;
								   }
							   }
						   }
					   }
				   }break;
			case 10:{
						int size = ciudadanos.getSize();
						if (size != 0) {
							ofstream outputFile("Ciudadanos.txt");
							outputFile << "-> Ciudadanos \n";
							int size = ciudadanos.getSize();
							for (int i = 1; i <= size; i++) {
								if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
									outputFile << "- (Maestro) Nombre: " << ciudadanos.get(i, size) -> getNombre() << " / Edad: " << ciudadanos.get(i, size) -> getEdad() << "\n";
								} else {
									outputFile << "- (Alumno)  Nombre: " << ciudadanos.get(i, size) -> getNombre() << " / Edad: " << ciudadanos.get(i, size) -> getEdad() << "\n";
								}
							}
							cout << "Registros Guardados Exitosamente!" << endl;
						} else {
							cout << "No Hay Ciudadanos Agregados!" << endl;
						}
					}break;
			case 11:{
						cout << "Hasta Pronto Ana!" << endl;
					}break;
		}
	} while (opcion != 11);
	int size = ciudadanos.getSize();
	if (size != 0) {
		ciudadanos.Delete();
	}
	return 0;
}
