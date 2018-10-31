#include <iostream>

using namespace std;

#define SIZE_OF_ARR 10

int main()
{

	int arrOfTenNums[SIZE_OF_ARR];

	unsigned maxLongest, currentLongest;

	//Setting the current to 1 because we trivially have a subsequence of 1
	//because or loop will start from 1 so that we compare i to i-1
	//just in case we dont go out of the bounds of the array
	maxLongest = 0;
	currentLongest = 1;

	//Fetching the values
	for (unsigned i = 0; i < SIZE_OF_ARR; ++i)
	{
		cin >> arrOfTenNums[i];
	}

	//If we hit a number that: A[i]>A[j] && i<j we have to reset the current longest
	// subsequence - so we set it to 1 again .. the trivial example of a subsequence of 1 element
	//in the other case we continue to count the length
	for (unsigned i = 1; i < SIZE_OF_ARR; ++i)
	{

		if (arrOfTenNums[i - 1] > arrOfTenNums[i])
		{
			currentLongest = 1;
		}
		else
		{
			currentLongest++;
		}

		maxLongest = (maxLongest < currentLongest) ? currentLongest : maxLongest;
	}

	cout << "The length of the longest subsequence is : " << maxLongest << endl;

	return 0;
}