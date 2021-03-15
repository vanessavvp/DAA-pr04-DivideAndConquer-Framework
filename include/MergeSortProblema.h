/**
 * CABECERA DEL PROYECTO
 * @file MergeSortProblema.h
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

#ifndef MERGESORT_PROBLEMA_H_
#define MERGESORT_PROBLEMA_H_

#pragma once

#include "../framework/Problema.h"
#include "./MergeSortSolucion.h"

class MergeSortProblema : public Problema {
  public:
    MergeSortProblema(std::vector<int> nuevoVector);
    virtual ~MergeSortProblema();
    bool isCasoMinimo();
    std::pair<Problema*, Problema*> descomponer();
    void solver(Solucion* s);
    
  private:
    std::vector<int> vectorDesordenado_;
};

#endif // !MERGESORT_PROBLEMA_H_