/*
 * Array.cpp
 *
 *  Created on: 13 mars 2024
 *      Author: ali
 */
#include <iostream>
#include "Array.h"
using namespace std;

Array::Array(int n){
	this -> n = n;
	this -> data = data;
	data = new int[n+1];
}

Array::~Array() {
	cout<< " Constructeur " ;
}

