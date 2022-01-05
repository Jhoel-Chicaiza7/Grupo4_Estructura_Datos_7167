#include "pch.h"
#include "CppUnitTest.h"
#include "../Ejercicio_8.4.15/Vector.h"
#include "../Ejercicio_8.4.15/QuickSort.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
            int dimension = 10;
            Vector<int> vec;
            QuickSort<int> qs;
            vec = Vector<int>(dimension);
            vec.generar(dimension);
            std::cout << "Vector " << char(25) << std::endl;
            vec.imprimir();
            qs.ordenar(vec.getVector(), 0, dimension - 1);
            std::cout << std::endl << "Vector ordenado " << char(25) << std::endl;
            vec.imprimir();
            vec.eliminar_Duplicados(dimension);
            std::cout << std::endl << "Vector sin duplicados " << char(25) << std::endl;
            vec.imprimir();
		}
	};
}
