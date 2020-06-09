#ifndef MATRIX_H
#define MATRIX_H

#include<iostream>
#include<iomanip>
using std::setw;
using std::cout;
using std::cin;
using std::endl;
using std::ostream;
using std::istream;

namespace kata
{
	class Matrix
	{
		public:
			Matrix();
			Matrix(int theRows);
			Matrix(int theRows, int theColumns);
			Matrix(const Matrix& sample);
			friend ostream& operator<<(ostream& output, const Matrix& sample);
			friend istream& operator>>(istream& input, Matrix& sample);
			int getRows() const;
			int getColumns() const;
			Matrix& operator=(Matrix rightSide);
			class Row
			{
				friend class Matrix;
				public:
					Row(Matrix& theParent, int theRow) : parent(theParent), row(theRow) {}
					int& operator[](int theColumn)
					{
						if(theColumn >= parent.columns)
						{
							cout << "\nError! Out of range!\n";
							exit(1);
						}
						else
							return parent.table[row][theColumn];
					}
				private:
					Matrix& parent;
					int row;
			};
			Row operator[](int theRow);
			friend Matrix operator+(Matrix firstMatrix, Matrix secondMatrix);
			friend Matrix operator-(Matrix firstMatrix, Matrix secondMatrix);
			friend Matrix operator*(Matrix firstMatrix, Matrix secondMatrix);
			void setSize(int theRows, int theColumns);
			~Matrix();
		private:
			int rows;
			int columns;
			int **table;
	};
}

#endif //MATRIX_H
