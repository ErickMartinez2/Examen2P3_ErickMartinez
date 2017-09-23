#include "LinkedList.h"

LinkedList::LinkedList() {
	raiz = NULL;
}

void LinkedList::insert(Ciudadano* ciudadano2) {
	Node* n = new Node();
	n -> ciudadano = ciudadano2;
	n -> nodo = raiz;
	raiz = n;
}

int LinkedList::getSize() {
	int contador = 0;
	vector<Ciudadano*> ciudadano2;
	while(raiz != NULL) {
		Node* n = raiz;
		Ciudadano* ciudadano = n -> ciudadano;
		ciudadano2.push_back(ciudadano);
		raiz = raiz -> nodo;
		contador++;
	};
	for (int i = ciudadano2.size() - 1; i >= 0; i--) {
		Node* n = new Node();
		n -> ciudadano = ciudadano2[i];
		n -> nodo = raiz;
		raiz = n;
	}
	return contador;
}

Ciudadano* LinkedList::get(int posicion, int size) {
	int nueva_posicion = size - posicion;
	Ciudadano* ciudadano_posicion;
	vector<Ciudadano*> ciudadano2;
	for (int i = 0; i <= nueva_posicion; i++) {
		Node* n = raiz;
		ciudadano_posicion = n -> ciudadano;
		ciudadano2.push_back(ciudadano_posicion);
		raiz = raiz -> nodo;
	}
	for (int i = ciudadano2.size() - 1; i >= 0; i--) {
		Node* n = new Node();
		n -> ciudadano = ciudadano2[i];
		n -> nodo = raiz;
		raiz = n;
	}
	return ciudadano_posicion;
}

void LinkedList::remove(int posicion, int size) {
	int nueva_posicion = size - posicion;
	Ciudadano* ciudadano_posicion;
	vector<Ciudadano*> ciudadano2;
	for (int i = 0; i <= nueva_posicion; i++) {
		Node* n = raiz;
		ciudadano_posicion = n -> ciudadano;
		ciudadano2.push_back(ciudadano_posicion);
		raiz = raiz -> nodo;
	}
	for (int i = ciudadano2.size() - 1; i >= 0; i--) {
		Node* n = new Node();
		if (i != ciudadano2.size() - 1) {
			n -> ciudadano = ciudadano2[i];
			n -> nodo = raiz;
			raiz = n;
		} else {
			delete n;
		}
	}
}

void LinkedList::Delete() {
	do {
		Node* n = raiz;
		Ciudadano* ciudadano2 = n -> ciudadano;
		raiz = raiz -> nodo;
		delete ciudadano2;
		delete n;
	} while (raiz != NULL);
}

