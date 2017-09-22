#include <iostream>
#include <string>
using namespace std;

int main() {
	int opcion;
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

				   }break;
			case 2:{

				   }break;
			case 3:{

				   }break;
			case 4:{

				   }break;
			case 5:{

				   }break;
			case 6:{

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
	return 0;
}
