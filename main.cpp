
#ifndef MAIN_
#define MAIN_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "framework/Framework.h"
#include "examples/FibonacciS.h"
#include "include/MergeSortProblema.h"
#include "include/QuickSortProblema.h"


int main(int argc, char* argv[]){
	if (argc != 2) {
		std::cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< std::endl;
		exit(-1);
	}

	//Problema* problema = new FibonacciP(atoi(argv[1]));
	//Solucion* solucion = new FibonacciS();
	//Framework* framework = new Framework();

	//framework->divideyVenceras(problema, solucion);
	std::cout << "\nResultado:" << std::endl;
	//solucion->resolver();

};

#endif /* MAIN_ */
