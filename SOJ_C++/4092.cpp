#include <iostream>
using namespace std;
class Matrix
{
public:
	int row;
	int col;
	bool errorbit;
	double **pool;
	Matrix(int _row = 1, int _col = 1);
	double& operator()(int i, int j);
	Matrix& operator+=(const Matrix &obj);
	Matrix& operator*=(const Matrix &obj);
	Matrix& operator=(const Matrix &obj);
};

Matrix::Matrix(int _row, int _col) {
	row = _row;
	col = _col;
	errorbit = false;
	pool = new double*[row*col];
	for (int i = 0; i < row; i++){
		pool[i] = new double[col];
	}
}
double& Matrix::operator()(int i, int j)
{
	return pool[i][j];
}
ostream& operator<<(ostream &os, const Matrix &obj)
{
	if (obj.errorbit) {
		cout << "ERROR!" << endl;
		return os;
	}
	for (int i = 0; i < obj.row; i++) {
		for (int j = 0; j < obj.col; j++) {
			os << obj.pool[i][j] << " ";
		}
		os << endl;
	}
	return os;
}
istream& operator>>(istream &in, Matrix &obj)
{
	if (obj.pool) {
		for (int i = 0; i < obj.row; i++) {
			delete obj.pool[i];
		}
		delete obj.pool;
	}
	in >> obj.row >> obj.col;
	obj.pool = new double*[obj.row];
	for (int i = 0; i < obj.row; i++){
		obj.pool[i] = new double[obj.col];
	}
	for (int i = 0; i < obj.row; i++) {
		for (int j = 0; j < obj.col; j++) {
			in >> obj.pool[i][j];
		}
	}
	obj.errorbit = false;
	return in;
}
Matrix& Matrix::operator+=(const Matrix &obj)
{
	if (row != obj.row || col != obj.col) {
		errorbit = true;
		return *this;
	}
	for (int i = 0; i < obj.row; i++) {
		for (int j = 0; j < obj.col; j++) {
			pool[i][j] += obj.pool[i][j];
		}
	}
	errorbit = false;
	return *this;
}
Matrix& Matrix::operator*=(const Matrix &obj)
{
	if (col != obj.row) {
		errorbit = true;
		return *this;
	}
	double **result = new double*[row];
	for (int i = 0; i < row; i++) {
		result[i] = new double[obj.col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < obj.col; j++) {
			result[i][j] = 0;
			for (int k = 0; k < col; k++) {
				result[i][j] += pool[i][k] * obj.pool[k][j];
			}
		}
	}
	for (int i = 0; i < row; i++) {
		delete[] pool[i];
	}
	delete[] pool;
	pool = result;
	col = obj.col;
	errorbit = false;
	return *this;
}
Matrix& Matrix::operator=(const Matrix &obj)
{
	if (pool) {
		for (int i = 0; i < row; i++) {
			delete pool[i];
		}
		delete pool;
	}
	row = obj.row;
	col = obj.col;
	pool = new double*[row];
	for (int i = 0; i < row; i++){
		pool[i] = new double[col];
	}
	for (int i = 0; i < row; i++) {
		for (int j = 0; j < col; j++) {
			pool[i][j] = obj.pool[i][j];
		}
	}
	errorbit = false;
	return *this;
}

int main()
{
	Matrix table1, table2;
	cin >> table1 >> table2;
	cout << table1(table1.row / 2, table1.col / 2) << endl;
	cout << (table1 *= table2);
	cout << (table1 += table2);
	cout << (table1 = table2);
	return 0;
}