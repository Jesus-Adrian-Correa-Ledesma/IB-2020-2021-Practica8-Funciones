/*
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Jesús Adrián Correa Ledesma
 */

#include <iostream>
#include <vector>
#include "primos_functions.h"

int main(int argc, char* argv[]){
    std::vector<int> primos;
    int j{0}, i{2};
    std::string number{argv[1]};
    
    const int kNumber = stoi(number);
    primos.reserve(kNumber);
    
    while(primos[kNumber-1] == 0){
        if (EsPrimo(i)== true){
            primos[j]=i;
            j++;
        }
        i++;
    }

    std::cout << primos[kNumber-1] << std::endl;
    std::cout << "La media entre el 1er primo y el último primo es: "<< kNumber << " es: " << Media(primos[0],primos[kNumber-1]) << std::endl;

    return 0;
}