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
  vectorPorOrdenar_ = nuevoVector;
}


MergeSortProblema::~MergeSortProblema() {
  vectorPorOrdenar_.clear();
}


MergeSortProblema::bool isCasoMinimo() {

}


std::pair<Problema*, Problema*> MergeSortProblema::descomponer() {

}


void MergeSortProblema::solver(Solucion* s) {
  
}