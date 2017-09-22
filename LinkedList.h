#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
#include <string>
#include <vector>
#include "Ciudadano.h"
using namespace std;

class LinkedList {
	struct Node {
		Ciudadano* ciudadano;
		Node* nodo;
	};
	private:
		Node* raiz;
	public:
		LinkedList();
		void insert(Ciudadano*);
		int getSize();
		Ciudadano* get(int, int);
		void Delete();
		void remove(int, int);
};

#endif
