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

#include "../include/QuickSortSolucion.h"


QuickSortSolucion::QuickSortSolucion() : Solucion::Solucion() {}


QuickSortSolucion::~QuickSortSolucion() {}


void QuickSortSolucion::resolver() {
  bool ordenado = false;

  std::cout << "Vector resultante: [ ";
  for (int index = 0; index < vectorDesordenado_.size(); index++) {
    std::cout << vectorDesordenado_[index] << " ";
  }
  std::cout << "] <- ";

  for (int index = 0; index < vectorDesordenado_.size() - 1; index++) {
    if (vectorDesordenado_[index] <= vectorDesordenado_[index + 1]) {
      ordenado = true;
    }
    else {
      ordenado = false;
      break;
    }
  }

  if (ordenado) {
    std::cout << "Ha sido ordenado." << std::endl;
  }
  else {
    std::cout << "No ha podido ordenarse." << std::endl;
  }
}


void QuickSortSolucion::mezcla(std::pair<Solucion*, Solucion*> subSoluciones) {
  std::vector<int> primeraSubSol = ((QuickSortSolucion*)subSoluciones.first)->vectorDesordenado_;
  std::vector<int> segundaSubSol = ((QuickSortSolucion*)subSoluciones.second)->vectorDesordenado_;

  for (int index = 0; index < primeraSubSol.size(); index++) 
    vectorDesordenado_.push_back(primeraSubSol[index]);

  for (int index = 0; index < segundaSubSol.size(); index++) 
    vectorDesordenado_.push_back(segundaSubSol[index]);
}


Solucion* QuickSortSolucion::getInstance() {
  return new QuickSortSolucion();
}


void QuickSortSolucion::setValor(std::vector<int> nuevoVector) {
  vectorDesordenado_ = nuevoVector;
}