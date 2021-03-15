/**
 * CABECERA DEL PROYECTO
 * @file QuickSortSolucion.cpp
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

#include "../include/QuickSortProblema.h"


QuickSortProblema::QuickSortProblema(std::vector<int> nuevoVector) : Problema::Problema() {
  vectorDesordenado_ = nuevoVector;
}


QuickSortProblema::~QuickSortProblema() {
  vectorDesordenado_.clear();
}


bool QuickSortProblema::isCasoMinimo() {
  return (vectorDesordenado_.size() < 2);
}


std::pair<Problema*, Problema*> QuickSortProblema::descomponer() {
  std::pair<Problema*, Problema*> subProblemas;
  std::vector<int> primeraMitad;
  std::vector<int> segundaMitad;
  int inicio = 0;
  int fin = (vectorDesordenado_.size() - 1);
  int pivote = vectorDesordenado_[round(fin / 2)];

  while (inicio <= fin) {
    while (vectorDesordenado_[inicio] < pivote) inicio++;
    while (vectorDesordenado_[fin] > pivote) fin--;

    if (inicio <= fin) {
      int auxInicio = vectorDesordenado_[inicio];
      vectorDesordenado_[inicio] = vectorDesordenado_[fin];
      vectorDesordenado_[fin] = auxInicio;
      inicio++;
      fin--;
    }
  }

  for (int index = 0; index <= ((inicio + fin) / 2); index++) 
    primeraMitad.push_back(vectorDesordenado_[index]);

  for (int index = (((inicio + fin) / 2) + 1); index < vectorDesordenado_.size(); index++)
    segundaMitad.push_back(vectorDesordenado_[index]);
  
  subProblemas.first  = new QuickSortProblema(primeraMitad);
  subProblemas.second = new QuickSortProblema(segundaMitad);

  return subProblemas;
}


void QuickSortProblema::solver(Solucion* s) {
  ((QuickSortSolucion*)s)->setValor(vectorDesordenado_);
}