//============================================================================
// Name        : TP_5_geni.cpp
// Author      : ali
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

void affiche(vector<int> vi){
	vector<int>::iterator it;
	for(it=vi.begin();it!=vi.end(); ++it){
		std::cout<<*(it)<<",";
		std::cout<<std::endl;
	}
}
void affiche(list<float> lst){
	list<float>::iterator it;
	for(it=lst.begin();it!=lst.end(); ++it){
		std::cout<<*(it)<<",";
		std::cout<<std::endl;
	}
}
void efface(vector<int> &vi , int val){
	vector<int>::iterator it=find(vi.begin(),vi.end(),val);
	if(it!=vi.end()){
		vi.erase(it);
	}
}

void efface(list<float> &lst , float val){
	list<float>::iterator it=find(lst.begin(),lst.end(),val);
	if(it!=lst.end()){
		lst.erase(it);
	}
}

template <typename T> affiche_vecteur(vector<T> vi){
	typename vector<T>::iterator it;
	for(it=vi.begin();it!=vi.end(); ++it){
		std::cout<<*(it)<<",";
		std::cout<<std::endl;
	}
}



int main()
{
    // Déclaration du viteur d'entiers et de la liste de réels
    std::vector<int> vi;
    std::list<float> lst;

    vi.insert(vi.end(), 10);
    vi.insert(vi.end(), 8);
    vi.insert(vi.end(), 15);
    vi.push_back(20);

    lst.insert(lst.end(), 2.5);
    lst.insert(lst.end(), 1.8);
    lst.insert(lst.end(), 2.2);
    lst.insert(lst.end(), 0.15);
    efface(vi , 8);
    efface(lst, 1.8);
    std::cout<< "affichage vecteur "<<std::endl;
    affiche(vi);

    std::cout<< "affichage liste "<<std::endl;
    affiche(lst);

    return 0;
}


