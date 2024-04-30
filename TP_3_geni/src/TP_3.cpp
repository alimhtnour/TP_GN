//============================================================================
// Name        : TP_3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "vertebre.h"
#include "Oiseau.h"
#include <iostream>


int main() {
	vertebre vertebre_test(4, "poiles");
	vertebre_test.affiche();

	int nb_pattes = vertebre_test.get_pattes();
	std::string type_pelage = vertebre_test.get_pelage();
	std::cout << " -----------objet vertebre-------------- " << std::endl;
	std::cout << "Nombre de pattes : " << nb_pattes << std::endl;
	std::cout << "Type de pelage : " << type_pelage << std::endl;

    Oiseau piaf(3, 2, "des plumes");
    piaf.affiche();

    int nb_pattes1 = piaf.get_pattes();
    std::string type_pelage1 = piaf.get_pelage();
    int nb_oeufs = piaf.get_oeufs();
	std::cout << " -----------objet Oiseau -------------" << std::endl;
    std::cout << "Nombre de pattes : " << nb_pattes1 << std::endl;
    std::cout << "Type de pelage : " << type_pelage1 << std::endl;
    std::cout << "Nombre d'oeufs : " << nb_oeufs << std::endl;

    return 0;
}

