#include <iostream>
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
						cout << "-> Despedir Maestro" << endl;
					   int size = ciudadanos.getSize();
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
				   }break;
			case 3:{
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
					   int size = ciudadanos.getSize();
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
									  string descripcion = "Es una caracteristica fisica que siempre esta presente en el usario.";
									  Quirk* quirk = new Mutant(descripcion);
									  ciudadano -> setQuirk(quirk);
								  }break;
					   }
					   ciudadanos.insert(ciudadano);
					   cout << endl;
					   cout << "Estudiante Agregado!" << endl;
				   }break;
			case 4:{
						cout << "-> Expusar Alumno" << endl;
					   int size = ciudadanos.getSize();
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
				   }break;
			case 5:{
						cout << "-> Lista de Maestros" << endl;
					   int size = ciudadanos.getSize();
						for (int i = 1; i <= size; i++) {
						   if (typeid(*ciudadanos.get(i, size)) == typeid(Maestro)) {
							   cout << "- Maestro: " << ciudadanos.get(i, size) -> getNombre() << endl;
						   }
					   }
				   }break;
			case 6:{
						cout << "-> Lista de Estudiantes" << endl;
					   int size = ciudadanos.getSize();
					   for (int i = 1; i <= size; i++) {
						   if (typeid(*ciudadanos.get(i, size)) == typeid(Estudiante)) {
							   cout << "- Estudiante: " << ciudadanos.get(i, size) -> getNombre() << endl;
						   }
					   }
				   }break;
			case 7:{

				   }break;
			case 8:{

				   }break;
			case 9:{

				   }break;
			case 10:{

					}break;
			case 11:{
						cout << "Hasta Pronto Ana!" << endl;
					}break;
		}
	} while (opcion != 11);
	ciudadanos.Delete();
	return 0;
}
