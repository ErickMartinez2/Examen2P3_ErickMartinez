#ifndef CIUDADANO_H
#define CIUDADANO_H
#include <string>
#include "Quirk.h"
using namespace std;

class Ciudadano {
	private:
		string nombre;
		int edad;
		string fecha;
		int altura;
		string pelo;
		string ojos;
		string likes;
		string dislikes;
		string sangre;
		Quirk* quirk;
	public:
		Ciudadano();
		Ciudadano(string, int, string, int, string, string, string, string, string);
		string getNombre();
		void setNombre(string);
		int getEdad();
		void setEdad(int);
		string getFecha();
		void setFecha(string);
		int getAltura();
		void setAltura(int);
		string getPelo();
		void setPelo(string);
		string getOjos();
		void setOjos(string);
		string getLikes();
		void setLikes(string);
		string getDislikes();
		void setDislikes(string);
		string getSangre();
		void setSangre(string);
		Quirk* getQuirk();
		virtual void setQuirk(Quirk*);
};

#endif
