// Remplace avantageusement les "include guard" classiques à base de #ifnded #define #endif
#pragma once

#include <cstddef> // Pour std::size_t, à remplacer par (unsigned) int si vous préférez
#include <cmath>   // Pour la racine carrée std::sqrt
#include <ostream> // Pour la surcharge de l'opérateur <<

// Point dans R³
class Point
{
private:
    double data[3];

public:
    // Constructeur par défaut
    Point();

    // Dimension du vecteur
    std::size_t size();

    // Opérateur [] permettant de lire et écrire les coordonnées du Point,
    // grâce au fait qu'il retourne la valeur par référence mutable.
    double& operator[] (std::size_t i);

    // Norme l2 du vecteur
    double norme();
};

// Affichage d'un Point
std::ostream& operator<< (std::ostream& out, Point& pt);


///////////////////////////////////////////////////////////////////////////////
// Définitions

Point::Point()
{
    for (std::size_t i = 0; i < size(); ++i)
        data[i] = 0;
}

std::size_t Point::size()
{
    return 3;
}

double& Point::operator[] (std::size_t i)
{
    return data[i];
}

double Point::norme()
{
    double result = 0;
    for (std::size_t i = 0; i < size(); ++i)
        result += data[i] * data[i];
    return std::sqrt(result);
}

std::ostream& operator<< (std::ostream& out, Point& pt)
{
    out << "Point(";
    for (std::size_t i = 0; i < pt.size(); ++i)
        out << pt[i] << ((i < pt.size() - 1) ? "," : "");
    out << ")";
    return out;
}
