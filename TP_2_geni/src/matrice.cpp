/*
 * matrice.cpp
 *
 *  Created on: 14 mars 2024
 *      Author: ali
 */

#include "matrice.h"

matrice::matrice() : coefficients(nullptr), lignes(0), colonnes(0) {}

matrice::matrice(int lignes, int colonnes, double valeurs[]) : lignes(lignes), colonnes(colonnes) {
    coefficients = new double*[lignes];
    for (int i = 0; i < lignes; ++i) {
        coefficients[i] = new double[colonnes];
        for (int j = 0; j < colonnes; ++j) {
            coefficients[i][j] = valeurs[i * colonnes + j];
        }
    }
}

matrice::matrice(const matrice& autre) : lignes(autre.lignes), colonnes(autre.colonnes) {
    coefficients = new double*[lignes];
    for (int i = 0; i < lignes; ++i) {
        coefficients[i] = new double[colonnes];
        for (int j = 0; j < colonnes; ++j) {
            coefficients[i][j] = autre.coefficients[i][j];
        }
    }
}

matrice::~matrice() {
    for (int i = 0; i < lignes; ++i) {
        delete[] coefficients[i];
    }
    delete[] coefficients;
}

void matrice::affiche() const {
    for (int i = 0; i < lignes; ++i) {
        for (int j = 0; j < colonnes; ++j) {
            std::cout << coefficients[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

matrice& matrice::operator=(const matrice& m) {
    if (this != &m) {
        for (int i = 0; i < lignes; ++i) {
            delete[] coefficients[i];
        }
        delete[] coefficients;

        lignes = m.lignes;
        colonnes = m.colonnes;
        coefficients = new double*[lignes];
        for (int i = 0; i < lignes; ++i) {
            coefficients[i] = new double[colonnes];
            for (int j = 0; j < colonnes; ++j) {
                coefficients[i][j] = m.coefficients[i][j];
            }
        }
    }
    return *this;
}

vecteur produit(const matrice& mat, const vecteur& vec) {
    vecteur resultat(mat.lignes, new double[mat.lignes]);
    for (int i = 0; i < mat.lignes; ++i) {
        double somme = 0.0;
        for (int j = 0; j < mat.colonnes; ++j) {
            somme += mat.coefficients[i][j] * vec.coefficients[j];
        }
        resultat.coefficients[i] = somme;
    }
    return resultat;
}

matrice matrice::operator*(const matrice& m) const {
    matrice resultat(lignes, m.colonnes, new double[lignes * m.colonnes]);
    for (int i = 0; i < lignes; ++i) {
        for (int j = 0; j < m.colonnes; ++j) {
            double somme = 0.0;
            for (int k = 0; k < colonnes; ++k) {
                somme += coefficients[i][k] * m.coefficients[k][j];
            }
            resultat.coefficients[i][j] = somme;
        }
    }
    return resultat;
}


