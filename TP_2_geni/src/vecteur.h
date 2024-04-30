/*
 * vecteur.h
  *  Created on: 14 mars 2024
 *      Author: ali
 */
#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>

class vecteur {
private:
    double* coefficients;
    int taille;

public:
    vecteur();
    vecteur(int taille, double valeurs[]); // Constructeur avec taille et valeurs initiales
    vecteur(const vecteur& autre); // Constructeur par copie
    ~vecteur();

    void affiche() const;
    vecteur& operator=(const vecteur& v);
    void echelle(double facteur);
    friend double produit(const vecteur& v1, const vecteur& v2);
    vecteur operator*(double facteur) const; // Surcharge de l'opérateur *
};

#endif

