#include <iostream>

using namespace std;

#define SIZE_OF_ARR 5

int main()
{

	int arrOfFiveNums[SIZE_OF_ARR];

	//Loop for fetching the 5 values
	for (size_t i = 0; i < SIZE_OF_ARR; ++i)
	{

		cin >> arrOfFiveNums[i];

	}

	//Simply go through and use the rule for sorted arrays which is:
	//every succeeding element must have a higher value than the one preceding it
	for (size_t i = 1; i < SIZE_OF_ARR; ++i)
	{
		if (arrOfFiveNums[i-1] > arrOfFiveNums[i])
		{
			cout << "The array is not sorted." << endl;
			return 0;
		}

	}

	cout << "The array is sorted." << endl;

	return 0;
}