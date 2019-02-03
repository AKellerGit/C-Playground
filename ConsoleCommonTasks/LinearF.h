#pragma once
#ifndef LINEARF
#define LINEARF
#include <vector>

class Matrix
{
public:
	int dimx = 0;
	int dimy = 0;
	int matrixSize = dimx * dimy;
	std::vector<std::vector<int>> M;


public:
	Matrix();
	Matrix(unsigned int, unsigned int);

	friend void Add(Matrix m1, Matrix m2);
	friend void Subtract(Matrix m1, Matrix m2);
	void Multiply();
	void ColumnSpace();
	void RowSpace();
	void NullSpace();
	void InputComponentsMatrix();
	friend bool isValid(Matrix m1, Matrix m2);
	unsigned int GetDimX();
	unsigned int GetDimY();
	unsigned int GetSize();
	void showMatrix();
};


#endif 
#include "LinearF.hpp"