/*
 * vecteur.cpp
 *
 *  Created on: 14 mars 2024
 *      Author: ali
 */

#include <iostream>
using namespace std;
#include "vecteur.h"

vecteur::vecteur() : coefficients(nullptr), taille(0) {}

vecteur::vecteur(int taille, double valeurs[]) : taille(taille) {
    coefficients = new double[taille];
    for (int i = 0; i < taille; ++i) {
        coefficients[i] = valeurs[i];
    }
}

vecteur::vecteur(const vecteur& autre) : taille(autre.taille) {
    coefficients = new double[taille];
    for (int i = 0; i < taille; ++i) {
        coefficients[i] = autre.coefficients[i];
    }
}

vecteur::~vecteur() {
    delete[] coefficients;
}

void vecteur::affiche() const {
    std::cout << "[";
    for (int i = 0; i < taille; ++i) {
        std::cout << coefficients[i];
        if (i < taille - 1) {
            std::cout << ", ";
        }
    }

    std::cout << "]" << std::endl;
}

vecteur& vecteur::operator=(const vecteur& v) {
    if (this != &v) {
        delete[] coefficients;
        taille = v.taille;
        coefficients = new double[taille];
        for (int i = 0; i < taille; ++i) {
            coefficients[i] = v.coefficients[i];
        }
    }
    return *this;
}

void vecteur::echelle(double facteur) {
    for (int i = 0; i < taille; ++i) {
        coefficients[i] *= facteur;
    }
}

double produit(const vecteur& v1, const vecteur& v2) {
    double resultat = 0.0;
    for (int i = 0; i < v1.taille; ++i) {
        resultat += v1.coefficients[i] * v2.coefficients[i];
    }
    return resultat;
}

vecteur vecteur::operator*(double facteur) const {
    vecteur resultat(*this);
    for (int i = 0; i < taille; ++i) {
        resultat.coefficients[i] *= facteur;
    }
    return resultat;
}
