/**
 * CABECERA DEL PROYECTO
 * @file MergeSortSolucion.h
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

#ifndef MERGESORT_SOLUCION_H_
#define MERGESORT_SOLUCION_H_

#pragma once

#include "../framework/Solucion.h"

class MergeSortSolucion : public Solucion {
  public:
    MergeSortSolucion();
    virtual ~MergeSortSolucion();
    void resolver();
    void mezcla(std::pair<Solucion*, Solucion*> subSoluciones);
    Solucion* getInstance();
    void setValor(std::vector<int> nuevoVector);

  private:
    std::vector<int> vectorDesordenado_;
};

#endif // !MERGESORT_SOLUCION_H_
