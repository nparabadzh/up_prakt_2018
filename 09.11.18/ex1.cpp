#include <iostream>

using namespace std;

#define ALPHABET_SIZE 26

int main()
{
	//fetching the word
	char inputWord[1024];
	cin.getline(inputWord, 1024);

	unsigned inputWordLength = strlen(inputWord);

	//here we initialize an array that counts every appearence of a given char
	//the size is 26-the number of possible characters
	unsigned letterCounter[ALPHABET_SIZE]{ 0 };

	for (unsigned i = 0; i < inputWordLength ; ++i)
	{
		//for every character in the input string we increment the counter
		//at index : the current character minus the code for the first possible input character
		letterCounter[inputWord[i] - 'a'] ++;
	}

	//after that we just print out every character that has more than 0 appearences
	//and the number of appearences
	for (unsigned i = 0; i < ALPHABET_SIZE; ++i)
	{
		if (letterCounter[i])
		{
			cout << (char)(i + 'a') << ":" << letterCounter[i] << " ";
		}
	}

	cout << endl;

	return 0;

}