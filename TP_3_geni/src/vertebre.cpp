/*
 * vertebre.cpp
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */
#include "vertebre.h"
#include <iostream>


vertebre::vertebre(int nb_pattes, std::string type_pelage){
	pattes = nb_pattes ;
	pelage = type_pelage;
}

vertebre::~vertebre() {}

void vertebre::affiche() {
    std::cout << "Vertebre avec " << pattes << " pattes et " << pelage << std::endl;
}

int vertebre::get_pattes(){
    return pattes;
}

std::string vertebre::get_pelage(){
    return pelage;
}
