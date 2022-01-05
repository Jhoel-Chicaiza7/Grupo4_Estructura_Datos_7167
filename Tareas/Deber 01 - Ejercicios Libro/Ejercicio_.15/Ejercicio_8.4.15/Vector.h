/* Universidad de las Fuerzas Armadas "ESPE"
* Eliminador de duplicados
* Suquillo Nicolás
* 27 / 12 / 2021
* 03 / 01 / 2022
* 7167 Estructura de datos
*/

/**
* @file Vector.h
* @version 1.0
* @fecha 03 / 01 / 2022
* @autor Suquillo Nicolas
* @title Eliminador de duplicados
*/

#pragma once
template <class T>
/**
* @brief Vector Indica el vector
*/
class Vector
{
private:
	int dim;
	T* vector;
public:
	/**
	* @brief Vector constructor de la clase Vector
	*/
	Vector();
	/**
	* @brief Vector constructor de la clase Vector
	* @param dim dimension del vector
	*/
	Vector(int dim);
	/**
	* @brief reservar
	* @param dim dimension del vector
	* @return T
	*/
	T* reservar(int);
	/**
	* @brief eliminar_Duplicados
	* @param dim recibe el tamaño del vector
	*/
	void borrar_Duplicados(int dim);
	/**
	* @brief encerar
	*/
	void encerar();
	/**
	* @brief imprimirA
	*/
	void imprimir();
	/**
	* @brief setDim
	* @param newDim dimension del vector
	*/
	void setDim(int newDim);
	/**
	* @brief generar
	* @param elem numero de elementos
	*/
	void generar(int elm);
	/**
	* @brief getDim
	* @return int
	*/
	int getDim();
	/**
	* @brief setVector
	* @param newVector obtiene el vector
	*/
	void setVector(T* newVector);
	/**
	* @brief getVector
	* @return T
	*/
	T* getVector();
	/**
	* @brief ~Vector destructor de la clase Vector
	*/
	~Vector();
};


