#include"matrix.h"

namespace kata
{
	Matrix::Matrix()
	{
		rows = 1;
		columns = 1;
		table = new int*[rows];
		for(int i = 0; i < rows; i++)
			*(table + i) = new int[columns];
		for(int i = 0; i <  rows; i++)
			for(int j = 0; j < columns; j++)
				table[i][j] = 0;
	}

	Matrix::Matrix(int theRows)
	{
		rows = theRows;
		columns = 1;
		table = new int*[rows];
		for(int i = 0; i < rows; i++)
			*(table + i) = new int[columns];
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < columns; j++)
				table[i][j] = 0;
	}

	Matrix::Matrix(int theRows, int theColumns)
	{
		rows = theRows;
		columns = theColumns;
		table = new int*[rows];
		for(int i = 0; i < rows; i++)
			*(table + i) = new int[columns];
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < columns; j++)
				table[i][j] = 0;
	}

	Matrix::Matrix(const Matrix& sample)
	{
		rows = sample.rows;
		columns = sample.columns;
		table = new int*[rows];
		for(int i = 0; i < rows; i++)
			*(table + i) = new int[columns];
		for(int i = 0; i < rows; i++)
			for(int j = 0; j < columns; j++)
				table[i][j] = sample.table[i][j];
	}

	ostream& operator<<(ostream& output, const Matrix& sample)
	{
		for(int i = 0; i < sample.rows; i++)
		{
			output << setw(4) << "|";
			for(int j = 0; j < sample.columns; j++)
				if(j == sample.rows - 1)
					output << sample.table[i][j] << "|";
				else
					output << sample.table[i][j] << setw(4);
			output << endl;
		}

		return output;
	}

	istream& operator>>(istream& input, Matrix& sample)
	{
		cout << "Enter matrix: " << sample.getRows() << "x" << sample.getColumns() << ":\n";
		int counter = 0;
		for(int i = 0; i < sample.rows; i++)
			for(int j = 0; j < sample.columns; j++)
			{
				while(input >> sample.table[i][j])
				{
					counter++;
					if(counter > sample.rows*sample.columns)
					{
						cout << "\nError! Out of range!!!\n";
						exit(1);
					}
				}
			}

		return input;
	}

	int Matrix::getRows() const
	{
		return rows;
	}

	int Matrix::getColumns() const
	{
		return columns;
	}

	Matrix& Matrix::operator=(Matrix rightSide)
	{
		if(rows == rightSide.rows && columns == rightSide.columns)
		{
			for(int i = 0; i < rows; i++)
				for(int j = 0; j < columns; j++)
					table[i][j] = rightSide[i][j];

			return *this;
		}
		else
		{
			for(int i = 0; i < rows; i++)
				delete[] table[i];
			delete[] table;

			rows = rightSide.rows;
			columns = rightSide.columns;

			table = new int*[rows];
			for(int i = 0; i < rows; i++)
				table[i] = new int[columns];

			for(int i = 0; i < rows; i++)
				for(int j = 0; j < columns; j++)
					table[i][j] = rightSide[i][j];

			return *this;
		}
	}

	Matrix::Row Matrix::operator[](int theRow)
	{
		if(theRow >= rows)
		{
			cout << "\nError! Out of range!\n";
			exit(1);
		}
		else
			return Row(*this, theRow);
	}

	Matrix operator+(Matrix firstMatrix, Matrix secondMatrix)
	{
		if(firstMatrix.getRows() != secondMatrix.getRows() || firstMatrix.getColumns() != secondMatrix.getColumns())
		{
			cout << "Summing matrices must have equal dimensions\n";
			exit(1);
		}
		else
		{
			Matrix sum(firstMatrix.getRows(), firstMatrix.getColumns());
			for(int i = 0; i < sum.getRows(); i++)
				for(int j = 0; j < sum.getColumns(); j++)
					sum[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
			return sum;
		}
	}

	Matrix operator-(Matrix firstMatrix, Matrix secondMatrix)
	{
		if(firstMatrix.getRows() != secondMatrix.getRows() || firstMatrix.getColumns() != secondMatrix.getColumns())
		{
			cout << "Subtracting matrices must have equalt dimensions\n";
			exit(1);
		}
		else
		{
			Matrix dif(firstMatrix.getRows(), firstMatrix.getColumns());
			for(int i = 0; i < dif.getRows(); i++)
				for(int j = 0; j < dif.getColumns(); j++)
					dif[i][j] = firstMatrix[i][j] + secondMatrix[i][j];
			return dif;
		}
	}

	Matrix operator*(Matrix firstMatrix, Matrix secondMatrix)
	{
		if(firstMatrix.getRows() != secondMatrix.getColumns())
		{
			cout << "Multiplicated matrices must be coherented\n";
			exit(1);
		}
		else
		{
			Matrix mul(firstMatrix.getRows(), secondMatrix.getColumns());
			int sum = 0, k = 1;
			for(int i = 0; i < mul.getRows(); i++)
				for(int j = 0; j < mul.getColumns(); j++)
					for(int k = 0; k < firstMatrix.getColumns(); k++)
					mul[i][j] = mul[i][j] + firstMatrix[i][k]*secondMatrix[k][j];
			return mul;
		}

	}

	void Matrix::setSize(int theRows, int theColumns)
	{
		rows = theRows;
		columns = theColumns;
	}

	Matrix::~Matrix()
	{
		for(int i = 0; i < rows; i++)
			delete[] table[i];
		delete[] table;
	}
}
