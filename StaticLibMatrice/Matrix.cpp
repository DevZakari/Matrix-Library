#include "pch.h"
#include "Matrix.h"
using namespace std;
using namespace mat;
mat::Matrix::Matrix(unsigned int lig, unsigned int col)
{
	this->lig = lig;
	this->col = lig;
	Matrice = new int* [this->lig];
	for (int i = 0; i < this->lig; i++)
	{
		Matrice[i] = new int[this->col];
	}
	this->Remplissage(0);

}

void mat::Matrix::Remplissage(int val)
{
	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			this->Matrice[i][j] = val;
		}
	}
}

Matrix& mat::Matrix::operator+(const Matrix& mat)
{

	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			this->Matrice[i][j] += mat.Matrice[i][j];
		}
	}
	return (*this);
}

Matrix& mat::Matrix::operator*(const Matrix& mat)
{
	Matrix* newMat = new Matrix(this->lig, this->col);
	if (this->col == mat.col && this->lig == mat.lig)
	{
		int n = this->col;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < n; j++)
			{
				for (int k = 0; k < n; k++)
				{
					newMat->Matrice[i][j] = newMat->Matrice[i][j] + this->Matrice[i][k] * mat.Matrice[k][j];
				}
			}
		}
	}
	else {
		cout << " Les dimentions des deux Matrices ne sont pas egaux ! Try Again. Avec meme dimention. " << endl;
	}
	return *(newMat);

}

void mat::Matrix::Print()
{
	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			cout << "\t" << this->Matrice[i][j];
		}
		cout << endl;
	}
}

mat::Matrix::~Matrix()
{
	for (int i = 0; i < this->lig; i++)
	{
		delete this->Matrice[i];
		this->Matrice[i] = 0;
	}
	delete this->Matrice;
	this->Matrice = 0;
}

Matrix& mat::Matrix::operator-(const Matrix& mat)
{

	for (int i = 0; i < this->lig; i++)
	{
		for (int j = 0; j < this->col; j++)
		{
			this->Matrice[i][j] -= mat.Matrice[i][j];
		}
	}
	return (*this);
}
