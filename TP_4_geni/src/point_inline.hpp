// Remplace avantageusement les "include guard" classiques à base de #ifnded #define #endif
#pragma once

#include <cstddef> // Pour std::size_t, à remplacer par (unsigned) int si vous préférez
#include <cmath>   // Pour la racine carrée std::sqrt
#include <ostream> // Pour la surcharge de l'opérateur <<

// Point dans R³
template <typename T , std::size_t d> class Point
{
private:
    //double data[3];
	T data[d];

public:
    // Constructeur par défaut
    Point()
    {
        for (std::size_t i = 0; i < size(); ++i)
            data[i] = 0;
    }

    // Dimension du vecteur
    std::size_t size()
    {
        return 3;
    }

    // Opérateur [] permettant de lire et écrire les coordonnées du Point,
    // grâce au fait qu'il retourne la valeur par référence mutable.
   // double& operator[] (std::size_t i)
    T& operator[] (std::size_t i)

    {
        return data[i];
    }

    // Norme l2 du vecteur
    //double norme()
    T norme()
    {
    	std::cout<<"generique" ;
        T result = 0;
        for (std::size_t i = 0; i < size(); ++i)
        	 result += data[i] * data[i];
        return std::sqrt(result);
    }
};

// Affichage d'un Point
template <typename T, size_t d> std::ostream& operator<< (std::ostream& out, Point<T,d>& pt)
{
    out << "Point(";
    for (std::size_t i = 0; i < pt.size(); ++i)
        out << pt[i] << ((i < pt.size() - 1) ? "," : "");
    out << ")";
    return out;
}
//--------------------------------------------------- duplucation
template <typename T> class Point<T,1>
{
private:
    //double data[3];
	T data[1];

public:
    // Constructeur par défaut
    Point()
    {
           data[0] = 0;
    }

    // Dimension du vecteur
    std::size_t size()
    {
        return 1;
    }

    // Opérateur [] permettant de lire et écrire les coordonnées du Point,
    // grâce au fait qu'il retourne la valeur par référence mutable.
   // double& operator[] (std::size_t i)
    T& operator[] (std::size_t i)

    {
        return data[i];
    }

    // Norme l2 du vecteur
    //double norme()
    T norme()
    {
    	std::cout<<"p specifique" ;
        return std::abs(data[0]);
    }
};


