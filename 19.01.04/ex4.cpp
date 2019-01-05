#include <iostream>

using namespace std;

void islandCrawler(bool** matrix, int posX, int posY, unsigned xSize, unsigned ySize)
{
	if (posX >= xSize || posX < 0 
		|| posY < 0 || posY >= ySize
		|| !matrix[posX][posY])
	{
		return;
	}

	matrix[posX][posY] = false;

	islandCrawler(matrix, posX - 1, posY, xSize, ySize);
	islandCrawler(matrix, posX + 1, posY, xSize, ySize);
	islandCrawler(matrix, posX , posY-1, xSize, ySize);
	islandCrawler(matrix, posX, posY+1, xSize, ySize);

}

unsigned ex4(bool** matrix, unsigned xSize, unsigned ySize)
{
	unsigned islandCount = 0;

	for (int i = 0; i < xSize; ++i)
	{
		for (int j = 0; j < ySize; ++j)
		{
			if (matrix[i][j] == true)
			{
				islandCount++;
				islandCrawler(matrix, i, j, xSize, ySize);
			}
		}
	}

	return islandCount;
}


int main()
{

	unsigned n, m;
	cin >> n;
	cin >> m;

	bool** matrix = new bool*[n];

	for (unsigned i = 0; i < n; ++i)
	{
		matrix[i] = new bool[m];
	}

	for (unsigned i = 0; i < n; i++)
	{
		for (unsigned j = 0; j < m; j++)
		{
			cin >> matrix[i][j];
		}
	}

	cout << ex4(matrix, n, m) << endl;

	for (unsigned i = 0; i < n; ++i)
	{
		delete[] matrix[i];
	}
	
	delete[] matrix;
}
