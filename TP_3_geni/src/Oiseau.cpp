/*
 * Oiseau.cpp
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */
#include "Oiseau.h"
#include <iostream>

Oiseau::Oiseau(int nb_oeufs, int nb_pattes, std::string type_pelage):vertebre(nb_pattes,type_pelage){
	oeufs=nb_oeufs;
}

Oiseau::~Oiseau() {}

void Oiseau::affiche() {
	 std::cout << "Oiseau avec " << oeufs << " oeufs, qui est un ";
	 vertebre::affiche();
}

int Oiseau::get_oeufs() {
	return oeufs;

}
