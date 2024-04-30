/*
 * vertebre.h
 *
 *  Created on: 27 mars 2024
 *      Author: ali
 */

#ifndef VERTEBRE_H_
#define VERTEBRE_H_
#include <string>

class vertebre {
protected:
    int pattes;
    std::string pelage;

public:
    vertebre(int nb_pattes, std::string type_pelage);
    ~vertebre();

    void affiche();
    int get_pattes();
    std::string get_pelage();
};

#endif
