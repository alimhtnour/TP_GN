/*
 * puissance.cpp
 *
 *  Created on: 20 mars 2024
 *      Author: ali
 */
#include "puissance.h"


double puissance(const matrice& A, const vecteur& w0, int iterations) {
    vecteur w = w0;
    for (int i = 0; i < iterations; ++i) {
        w = produit(A, w);
        w.echelle(1.0 / w.norme()); // Normalisation du vecteur
    }
    return produit(produit(w, A), w) / produit(w, w);
}

