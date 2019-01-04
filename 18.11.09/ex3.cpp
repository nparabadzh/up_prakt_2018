#include <iostream>

using namespace std;

#define MATRIX_SIZE 4

int main()
{

	//this is a sample matrix, just so we don't input it every time
	char sampleMatrix[MATRIX_SIZE][MATRIX_SIZE] = { {'F', 'A', 'C', 'I'},
	{'O', 'B', 'Q', 'P'},
	{'A', 'N', 'O', 'B'},
	{'M', 'A', 'S', 'S'} };

	char wordToSearch[MATRIX_SIZE+1];

	cin.getline(wordToSearch, MATRIX_SIZE+1);

	unsigned wordLength = strlen(wordToSearch);

	
	//we start of by looking for the first character of the word
	//in the sample matrix
	for (unsigned i = 0; i < MATRIX_SIZE; ++i)
	{
		for (unsigned j = 0; j < MATRIX_SIZE; ++j)
		{
			//if we find it we start searching from left to right
			//and after that we start searching downwards
			if (sampleMatrix[i][j] == wordToSearch[0])
			{

				unsigned counterHorizontal = wordLength - 1;
				unsigned counterVertical = wordLength - 1;

				for (unsigned k = 1; k < wordLength; ++k)
				{
					//if we go out of bounds we stop searching
					//or
					//if we encounter a character that is not the current one we are looking for
					//we stop
					//(1)
					if (i+k>MATRIX_SIZE || wordToSearch[k] != sampleMatrix[i+k][j])
					{
						break;
					}

					counterVertical--;

				}

				//same logic as with (1), but this time we search downwards
				for (unsigned k = 1; k < wordLength; ++k)
				{

					if (j + k>MATRIX_SIZE || wordToSearch[k] != sampleMatrix[i][j + k])
					{
						break;
					}

					counterHorizontal--;

				}

				//if we have successfully decremented one of the two counters
				//we have found the word we are looking for
				//so we print true and stop the programme
				if (!counterHorizontal || !counterVertical)
				{
					cout << "true"<< endl;
					return 0;
				}
			}
		}
	}

	cout << "false" << endl;

	return 0;

}