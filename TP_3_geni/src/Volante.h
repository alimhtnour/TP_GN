/*
 * Volante.h
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */


#ifndef VOLANTE_H_
#define VOLANTE_H_

class Volante {
private:
    int ailes;

public:
    Volante(int nb_ailes);
    ~Volante();

    void affiche();
    int get_ailes();
};

#endif
