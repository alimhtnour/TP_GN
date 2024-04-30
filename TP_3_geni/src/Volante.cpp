/*
 * Volante.cpp
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */

#include "volante.h"

#include <iostream>

Volante::Volante(int nb_ailes) : ailes(nb_ailes) {}

Volante::~Volante() {}

void Volante::affiche() {
    std::cout << "Volante avec " << ailes << " ailes" << std::endl;
}

int Volante::get_ailes() {
    return ailes;
}
