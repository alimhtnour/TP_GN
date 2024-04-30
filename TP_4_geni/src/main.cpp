/*
 * main.cpp
 *
 *  Created on: 15 avr. 2024
 *      Author: ali
 */




#include <iostream>
#include <cmath> // Pour la fonction puissance std::pow

#include "point_inline.hpp"
//#include "point_outofline.hpp"

int main()
{
    // Point placé à l'origine par défaut
    Point<float, 1> pt;
    std::cout << "pt = " << pt << std::endl;
    std::cout << "||pt|| = " << pt.norme() << std::endl;
    std::cout << std::endl;

    for (std::size_t i = 0; i < pt.size(); ++i)
        pt[i] = std::pow(-1, i) * (i + 1);

    std::cout << "pt = " << pt << std::endl;
    std::cout << "||pt|| = " << pt.norme() << std::endl;
    std::cout << std::endl;

    // Quelques informations sur ce point
    std::cout
        << "pt est de dimension " << pt.size()
        << " et occupe " << sizeof(pt) << " octets en mémoire."
        << std::endl;
    return 0;
}

