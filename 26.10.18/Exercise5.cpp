#include <iostream>

using namespace std;

#define SIZE_OF_ARR 10

int main()
{
	//Setting the max to the min value so that it can be set to the first given
	//in the beggining
	int maxSoFar = INT_MIN;
	int current;

	//Fetching the values and just comparing to the max number found so far
	for (unsigned i = 0; i < SIZE_OF_ARR ; ++i)
	{
		cin >> current;

		maxSoFar = (current > maxSoFar) ? current : maxSoFar;
	}

	cout << "The largest number out of the 10 given is : " << maxSoFar<<endl;

	return 0;
}