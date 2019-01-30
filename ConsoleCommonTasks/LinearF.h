#pragma once
#ifndef LINEARF
#define LINEARF
#include <vector>

class Matrix
{
private:
	int dimx = 0;
	int dimy = 0;
	int matrixSize = dimx * dimy;
	std::vector<std::vector<int>> M;


public:
	Matrix();

	void add(std::vector<std::vector<int>> v1, std::vector<std::vector<int>> v2);
	void subtract(std::vector<std::vector<int>> v1, std::vector<std::vector<int>> v2);
	void Multiply();
	void ColumnSpace();
	void RowSpace();
	void NullSpace();
	void DeleteMatrix();
	void DeleteAll();
	void NewMatrix();
	bool isValid(std::vector<std::vector<int>>, std::vector<std::vector<int>>);
	unsigned int GetSize(Matrix M);
	friend void showMatrix(Matrix M);
};


#endif 

#include "LinearF.hpp"