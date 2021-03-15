/**
 * CABECERA DEL PROYECTO
 * @file MergeSortSolucion.cpp
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

#include "../include/MergeSortSolucion.h"


MergeSortSolucion::MergeSortSolucion() : Solucion::Solucion() {}


MergeSortSolucion::~MergeSortSolucion() {}


void MergeSortSolucion::resolver() {
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


void MergeSortSolucion::mezcla(std::pair<Solucion*, Solucion*> subSoluciones) {
  std::vector<int> vectorIzq  = ((MergeSortSolucion*)subSoluciones.first)->vectorDesordenado_;
  std::vector<int> vectorDer = ((MergeSortSolucion*)subSoluciones.second)->vectorDesordenado_;

  int indiceIzq = 0;
  int indiceDer = 0;

  while ((indiceIzq < vectorIzq.size()) && (indiceDer < vectorDer.size())) {
    if (vectorIzq[indiceIzq] <= vectorDer[indiceDer]) {
      vectorDesordenado_.push_back(vectorIzq[indiceIzq]);
      indiceIzq++;
    }
    else {
      vectorDesordenado_.push_back(vectorDer[indiceDer]);
      indiceDer++;
    }
  }
    
  while (indiceIzq < vectorIzq.size()) {
    vectorDesordenado_.push_back(vectorIzq[indiceIzq]);
    indiceIzq++;
  }

  while (indiceDer < vectorDer.size()) {
    vectorDesordenado_.push_back(vectorDer[indiceDer]);
    indiceDer++;
  }
}


Solucion* MergeSortSolucion::getInstance() {
  return new MergeSortSolucion();
}


void MergeSortSolucion::setValor(std::vector<int> nuevoVector) {
  vectorDesordenado_ = nuevoVector;
}