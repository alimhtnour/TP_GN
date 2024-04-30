/*
 * Array.h
 *
 *  Created on: 13 mars 2024
 *      Author: ali
 */

#ifndef ARRAY_H_
#define ARRAY_H_

class Array {
private:
	int n ; // taille du tableau
	double *data;
public:
	Array(int n = 0);
	Array(const Array &other);
	Array& operator=(const Array &other);
	virtual ~Array();
};

#endif /* ARRAY_H_ */
