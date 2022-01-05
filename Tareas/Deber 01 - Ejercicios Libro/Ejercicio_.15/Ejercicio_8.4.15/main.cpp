/* UNIVERSIDAD DE LAS FUERZAS ARMADAS (ESPE)
Nombre del programa: Ejercicio eliminar duplicados
Autores: Pablo Yanez, Ariel Pozo, Jhoel Chicaiza
Fecha de creacion: 28/12/2021
Fecha de modificacion: 02/01/2022
7167 ESTRUCTURA DE DATOS
*/

#include <iostream>
#include "Quicksort.h"
#include "Vector.h"
#include <stdlib.h>
#include "Quicksort.cpp"
#include "Vector.cpp"

int main()
{
    int dimension = 10;
    Vector<int> vec;
    QuickSort<int> qs;
    vec = Vector<int>(dimension);
    vec.generar(dimension);
    std::cout << "Vector " << char(25) << std::endl;
    vec.imprimir();
    qs.ordenar(vec.getVector(), 0, dimension - 1);
    std::cout << std::endl << "Vector en orden " << char(25) << std::endl;
    vec.imprimir();
    vec.borrar_Duplicados(dimension);
    std::cout << std::endl << "Vector sin duplicados " << char(25) << std::endl;
    vec.imprimir();

}
