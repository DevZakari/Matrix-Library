
#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace mat {
	class Matrix
	{
	private:
		int col;
		int lig;
		int** Matrice;
	public:
		Matrix(unsigned int lig = 0, unsigned int col = 0);
		Matrix(const Matrix& m) = delete;
		void Remplissage(int val);
		Matrix& operator + (const Matrix& mat);
		Matrix& operator - (const Matrix& mat);
		Matrix& operator * (const Matrix& mat);
		void Print();
		~Matrix();
	};

};
