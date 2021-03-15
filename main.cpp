/**
 * CABECERA DEL PROYECTO
 * @file main.cpp
 * @author: Vanessa Valentina Villalba Perez
 * Contacto:  alu0101265704@ull.edu.es
 * @date: 14/03/2021
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Asignatura: Diseño y Análisis de Algoritmos
 * Práctica: Numberº4
 * Propósito: Implementación del algoritmo divide y vencerás para distintos
 *    métodos de ordenación, a partir de un framework dado
 */

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

std::vector<int> generadorVectoresAleatorios(int tamanyo) {
	std::vector<int> nuevoVector(tamanyo);
	for (int index = 0; index < nuevoVector.size(); index++) {
		nuevoVector[index] = (rand() % 100);
	}

	std::cout << "Vector inicial: [";
	for (int index = 0; index < nuevoVector.size(); index++) {
		std::cout << nuevoVector[index] << " ";
	}
	std::cout << "]\n";

	return nuevoVector;
}

int main(int argc, char* argv[]){
	std::vector<int> nuevoVector;
	
	if (argc != 2) {
		std::cout << "\nNúmero de parametros incorrecto. Encontrado " << argc-1 << " requerido 1."<< std::endl;
		exit(-1);
	} else {
		nuevoVector.resize(atoi(argv[1]));
		nuevoVector = generadorVectoresAleatorios(nuevoVector.size());
	}
	
	Problema* problemaMerge = new MergeSortProblema(nuevoVector);
	Solucion* solucionMerge = new MergeSortSolucion();
	Framework* framework = new Framework();

	framework->divideyVenceras(problemaMerge, solucionMerge);
	std::cout << "\nResultado MergeSort:" << std::endl;
	solucionMerge->resolver();

	Problema* problemaQuick = new QuickSortProblema(nuevoVector);
	Solucion* solucionQuick = new QuickSortSolucion();
	Framework* framework2 = new Framework();

	framework2->divideyVenceras(problemaQuick, solucionQuick);
	std::cout << "\nResultado QuickSort:" << std::endl;
	solucionQuick->resolver();
}

#endif /* MAIN_ */
