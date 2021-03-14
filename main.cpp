
#ifndef MAIN_
#define MAIN_

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include "framework/Framework.h"
#include "include/MergeSortProblema.h"
#include "include/MergeSortSolucion.h"
#include "include/QuickSortProblema.h"
#include "include/QuickSortSolucion.h"


int main(int argc, char* argv[]){
	if (argc != 2) {
		std::cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< std::endl;
		exit(-1);
	}

	std::vector<int> vectorPorOrdenar {829, 242, 170, 587, 555, 171, 527, 355};
	Problema* problema = new MergeSortProblema(vectorPorOrdenar);
	Solucion* solucion = new MergeSortSolucion();
	Framework* framework = new Framework();

	framework->divideyVenceras(problema, solucion);
	std::cout << "\nResultado:" << std::endl;
	//solucion->resolver();

};

#endif /* MAIN_ */
