/**
 * CABECERA DEL PROYECTO
 * @file MergeSortProblema.cpp
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

#include "../include/MergeSortProblema.h"


MergeSortProblema::MergeSortProblema(std::vector<int> nuevoVector) : Problema::Problema() {
  vectorDesordenado_ = nuevoVector;
}


MergeSortProblema::~MergeSortProblema() {
  vectorDesordenado_.clear();
}


bool MergeSortProblema::isCasoMinimo() {
  return (vectorDesordenado_.size() < 2);
}


std::pair<Problema*, Problema*> MergeSortProblema::descomponer() {
  std::pair<Problema*, Problema*> subProblemas;
  std::vector<int> primeraMitad;
  std::vector<int> segundaMitad;
  int pivote = (vectorDesordenado_.size() / 2);
  
  for (int index = 0; index < pivote; index++) 
    primeraMitad.push_back(vectorDesordenado_[index]);

  for (int index = pivote; index < vectorDesordenado_.size(); index++) 
    segundaMitad.push_back(vectorDesordenado_[index]);
  
  subProblemas.first  = new MergeSortProblema(primeraMitad);
  subProblemas.second = new MergeSortProblema(segundaMitad);

  return subProblemas;
}


void MergeSortProblema::solver(Solucion* s) {
  ((MergeSortSolucion*)s)->setValor(vectorDesordenado_);
}