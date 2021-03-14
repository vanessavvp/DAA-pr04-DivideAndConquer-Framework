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
  vectorPorOrdenar_ = nuevoVector;
}


QuickSortProblema::~QuickSortProblema() {
  vectorPorOrdenar_.clear();
}


QuickSortProblema::bool isCasoMinimo() {

}


std::pair<Problema*, Problema*> QuickSortProblema::descomponer() {

}


void QuickSortProblema::solver(Solucion* s) {
  
}