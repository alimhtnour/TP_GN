/*
 * Oiseau.h
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */
#ifndef OISEAU_H_
#define OISEAU_H_

#include "vertebre.h"

class Oiseau : public vertebre {
private:
    int oeufs;

public:
    Oiseau(int nb_oeufs, int nb_pattes, std::string type_pelage);
    ~Oiseau();

    void affiche();
    int get_oeufs();
};

#endif
