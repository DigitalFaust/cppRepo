#include<iostream>
using namespace std;

int main()
{
	int **matrix1, **matrix2, **res;
	matrix1 = new int*[3];
	matrix2 = new int*[3];
	res = new int*[3];
	for(int i = 0; i < 3; i++)
	{
		matrix1[i] = new int[3];
		matrix2[i] = new int[3];
		res[i] = new int[3];
	}

	int k = 1;
	cout << "first\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			matrix1[i][j] = k++;
			matrix2[i][j] = k;
			res[i][j] = 0;
			cout << matrix1[i][j] << " ";
		}
		cout << endl;
	}

	cout << endl;
	cout << "second\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << matrix2[i][j] << " ";
		cout << endl;
	}

	cout << endl;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

	cout << endl;
	int sum = 0;
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			for(int k = 0; k < 3; k++)
			{
				res[i][j] = res[i][j] + matrix1[i][k]*matrix2[k][j];
				if(k == 2)
					cout << matrix1[i][k] << "*" << matrix2[k][j] << "=";
				else
					cout << matrix1[i][k] << "*" << matrix2[k][j] << "+";
			}
		cout << res[i][j] << " ";
		}
		cout << endl;
	}

	cout << "res\n";
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 3; j++)
			cout << res[i][j] << " ";
		cout << endl;
	}

	for(int i = 0; i < 3; i++)
	{
		delete[] matrix1[i];
		delete[] matrix2[i];
	}

	delete[] matrix1;
	delete[] matrix2;

	return 0;
}
