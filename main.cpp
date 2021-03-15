
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
	std::vector<int> v(argc - 1);

	if (argc < 2) {
		std::cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< std::endl;
		exit(-1);
	} else {
		for (int i = 1; i < argc; i++) {
			v[i - 1] = atoi(argv[i]);
		}
	}
	/*if (argc != 2) {
		std::cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< std::endl;
		exit(-1);
	}*/

	//std::vector<int> vectorPorOrdenar {829, 242, 170, 587, 555, 171, 527, 355};
	Problema* problemaMerge = new MergeSortProblema(v);
	Solucion* solucionMerge = new MergeSortSolucion();
	Framework* framework = new Framework();

	framework->divideyVenceras(problemaMerge, solucionMerge);
	std::cout << "\nResultado MergeSort:" << std::endl;
	solucionMerge->resolver();

	//std::vector<int> vectorPorOrdenar2 {829, 242, 170, 587, 555, 171, 527, 355};
	Problema* problemaQuick = new QuickSortProblema(v);
	Solucion* solucionQuick = new QuickSortSolucion();
	Framework* framework2 = new Framework();

	framework2->divideyVenceras(problemaQuick, solucionQuick);
	std::cout << "\nResultado QuickSort:" << std::endl;
	solucionQuick->resolver();
}

#endif /* MAIN_ */
