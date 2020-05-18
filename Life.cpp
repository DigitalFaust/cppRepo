//Game of life

#include<iostream>
using std::cout;
using std::cin;
using std::endl;

const int DIMENSION = 5;

int aliveCells(int array[][DIMENSION], int firstDim, int secondDim);
void wrap(int array[][DIMENSION]);
void fillZero(int array[][DIMENSION]);
void showGrid(int array[][DIMENSION]);

int main() 
{
	int grid[DIMENSION][DIMENSION], newGrid[DIMENSION][DIMENSION];
	int lifePos1 = 0, lifePos2 = 0;

	fillZero(grid);
	fillZero(newGrid);
	wrap(grid);

	cout << "\t\tWelcome to the Conway's Game of Life\n";
	cout << "Enter initial life positions, to stop enter press 's': ";
	while(cin >> lifePos1 >> lifePos2)
		grid[lifePos1][lifePos2] = 1;

	showGrid(grid);
	cout << endl;
	
	for(int i = 0; i < 5; i++)
		for(int j = 0; j < 5; j++)
		{
			//cell become alive having exactly 3 alive neighbours
			if(aliveCells(grid, i, j) == 3 && grid[i][j] == 0) 
				newGrid[i][j] = 1;
			else
				//cell become dead having less than 2 or more than 3 alive cells
				if((aliveCells(grid, i, j) < 2 || aliveCells(grid, i, j) > 3)&& grid[i][j] == 1) 
					newGrid[i][j] = 0;
				else
					newGrid[i][j] = grid[i][j];
		}

	cout << endl;
	showGrid(newGrid);

	return 0;
}

int aliveCells(int array[][DIMENSION], int firstDim, int secondDim)
{
	int counter = 0;

	for(int i = -1; i <= 1; i++)
		for(int j = -1; j <= 1; j++)
			if(array[firstDim + i][secondDim + j] == 1)
				counter++;

	return (counter - array[firstDim][secondDim]);
}

void wrap(int array[][DIMENSION])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		array[i][0] = array[i][2];
		array[0][i] = array[2][i];
	}
}

void fillZero(int array[][DIMENSION])
{
	for(int i = 0; i < DIMENSION; i++)
		{
			for(int j = 0; j < DIMENSION; j++)
				array[i][j] = 0;
		}
}

void showGrid(int array[][DIMENSION])
{
	for(int i = 0; i < DIMENSION; i++)
	{
		for(int j = 0; j < DIMENSION; j++)
			cout << array[i][j] << " ";
		cout << endl;
	}
}
