#include "Vector.h"
#include <iostream>

template <class T>
Vector<T>::Vector() {
	dim = 0;
	vector = NULL;
}
template <class T>
Vector<T>::Vector(int newDim) {
	dim = newDim;
	reservar(dim);
	encerar();
}
template <class T>
T* Vector<T>::reservar(int newDim) {
	dim = newDim;
	vector = new T[newDim];
	return vector;
}
template <class T>
void Vector<T>::encerar() {
	for (int i = 0; i < dim; i++)
		*(vector + i) = 0;
}
template <class T>
void Vector<T>::generar(int elm) {

	srand(time(NULL));
	for (int i = 0; i < elm; i++) {
		*(vector + i) = 1 + rand() % 99;
	}
}
template <class T>
void Vector<T>::imprimir() {
	std::cout << char(204) << " ";
	for (int i = 0; i < dim; i++)
		std::cout << *(vector + i) << " ";
	std::cout << char(185) << " " << std::endl;
}
template <class T>
void Vector<T>::borrar_Duplicados(int dim) {

	int cont = 0,nuevaDim=0;

	for (int i = 0; i < dim; i++){
		if (*(vector + i) == *(vector + (i + 1))) {
			cont++;
		}
	}
	
	nuevaDim = dim - cont;

	if (nuevaDim < 0)
		nuevaDim = nuevaDim * (-1);

	this->dim = nuevaDim;

	cont = 0;
	for (int i = 0; i < dim; i++) {
		if (*(vector + i) != *(vector + (i + 1))) {
			*(vector + cont) = *(vector + i);
			cont++;
		}
	}
	
}
template <class T>
void Vector<T>::setDim(int newDim) {
	dim = newDim;
}
template <class T>
int Vector<T>::getDim() {
	return dim;
}
template < class T>
void Vector<T>::setVector(T* newVector) {
	vector = newVector;
}
template <class T>
T* Vector<T>::getVector() {
	return vector;
}
template <class T>
Vector<T>::~Vector() {
}