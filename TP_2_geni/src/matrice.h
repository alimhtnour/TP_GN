/*
 * matrice.h
 *
 *  Created on: 14 mars 2024
 *      Author: ali
 */



#ifndef MATRICE_HPP
#define MATRICE_HPP

#include "vecteur.h"

class matrice {
private:
    double** coefficients;
    int lignes;
    int colonnes;

public:
    matrice();
    matrice(int lignes, int colonnes, double valeurs[]); // Constructeur avec lignes, colonnes et valeurs initiales
    matrice(const matrice& autre); // Constructeur par copie
    matrice& operator=(const matrice& m);
    ~matrice();

    void affiche() const;
    friend vecteur produit(const  matrice& mat, const vecteur& vec);
    matrice operator*(const matrice& m) const; // Surcharge de l'opérateur *
};

#endif
