/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jesús Adrián Correa Ledesma
 */

#include <iostream>
#include "primos_functions.h"

bool EsPrimo (int n){
    for (int divisor = 2; divisor < n; divisor++){
        if(n % divisor == 0){
            return false;
        }
    }
    return true;
}

double Media (double primer, double ultimo){
    double media;
    media = (primer + ultimo)/2;
    return media;
}