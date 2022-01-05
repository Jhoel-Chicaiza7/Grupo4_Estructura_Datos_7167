/* Universidad de las Fuerzas Armadas "ESPE"
* Eliminador de duplicados
* Suquillo Nicolás
* 27 / 12 / 2021
* 03 / 01 / 2022
* 7167 Estructura de datos
*/

/**
* @file QuickSort.h
* @version 1.0
* @fecha 03 / 01 / 2022
* @autor Suquillo Nicolas
* @title Eliminador de duplicados
*/

#pragma once
template <class T>
/**
* @brief QuickSort Indica el metodo de ordenamiento QuickSort
*/
class QuickSort
{
private:
	int auxIzq;
	int auxDer;
	int pivote;
	int auxDato;
public:
	/**
	* @brief intercambiar
	* @param vector recibe el vector a intercambiar
	* @param prim primer numero del vector
	* @param ulti ultimo numero del vector
	*/
	void intercambiar(T* vector, int prim, int ulti);
	/**
	* @brief ordenar
	* @param vector recibe el vector a ordenar
	* @param prim primer numero del vector
	* @param ulti ultimo numero del vector
	*/
	void ordenar(T*, int, int);
	/**
	* @brief intercambio
	* @param vector obtiene el vector para realizar el intercambio
	*/
	void intercambio(T* vector);
	/**
	* @brief primer_while
	* @param vector obtiene el vector para realizar el intercambio
	* @param prim primer numero del vector
	*/
	void primer_while(T* vector, int prim);
	/**
	* @brief segundo_while
	* @param vector obtiene el vector para realizar el intercambio
	* @param ult ultimo numero del vector
	*/
	void segundo_while(T* vector, int ult);
};

