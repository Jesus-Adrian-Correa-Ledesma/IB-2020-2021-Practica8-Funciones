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
#include "string_statistics_functions.h"

int main(int argc, char* argv[]){
    const std::vector<std::string> cadenas {"Hola compañeros y amigos", "Tengo una moto roja", "Tengo hambre", "Mi coche de radiocontrol", 
    "Hay que ponerse las mascarillas", "La clave secreta es 123", "Haz ejercicio", "Me he comprado un tigre de bengala y un cocodrilo africano", 
    "Tengo 7 primos", "Yo sé hablar dos idiomas" };
    
    for(int i=0; i< 10; i++){
        std::cout << "\nCadena " << i+1 << " <" << cadenas[i] << ">: " << std::endl;
        std::cout << "- Longitud: " << cadenas[i].length() << " caracteres." << std::endl;
        std::cout << "- Primer carácter: " << cadenas[i].at(0) << std::endl;
        std::cout << "- Ultimo carácter: " << cadenas[i].at(cadenas[i].length()-1) << std::endl;
        std::cout << "¿Aparece la parabra <abracadabra>? ";
        if(Abracadabra(cadenas[i]) == true){
            std::cout << "Sí" << std::endl;
        }
        else{
            std::cout << "No" << std::endl;
        }

    }

    return 0;
}