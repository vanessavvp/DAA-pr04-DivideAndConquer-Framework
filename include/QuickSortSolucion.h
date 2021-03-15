/**
 * CABECERA DEL PROYECTO
 * @file QuickSortSolucion.h
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

#ifndef QUICKSORT_SOLUCION_H
#define QUICKSORT_SOLUCION_H

#pragma once

#include "../framework/Solucion.h"

class QuickSortSolucion : public Solucion {
  public:
    QuickSortSolucion();
    virtual ~QuickSortSolucion();
    void resolver();
    void mezcla(std::pair<Solucion*, Solucion*>);
    Solucion* getInstance();
    void setValor(std::vector<int> nuevoVector);

  private:
    std::vector<int> vectorDesordenado_;
};

#endif // !QUICKSORT_SOLUCION_H
