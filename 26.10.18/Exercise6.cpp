#include <iostream>

using namespace std;

#define SIZE_OF_ARR 10

int main()
{

	int arrToBeSorted[SIZE_OF_ARR];

	//Fetching the values
	for (unsigned i = 0; i < SIZE_OF_ARR; ++i)
	{
		cin >> arrToBeSorted[i];
	}

	unsigned currentSizeOfArr = SIZE_OF_ARR;

	cout << "Array pre-sort condition : ";

	for (size_t i = 0; i < SIZE_OF_ARR; ++i)
	{
		cout << arrToBeSorted[i] << " ";
	}

	cout << endl;

	//Here we use selection sort - on every iteration we get the number
	//with the highest value and we put it at the back of the array - the place where it belongs
	//since it is the highest value number, and after that we cut the size of the array in which we look
	//for the highest value number so that we dont pick the same one again.
	//We repeat these steps N times , where N is the size of the array
	for (unsigned i = 0; i < SIZE_OF_ARR; ++i)
	{
		int localMaxNum = INT_MIN;
		unsigned localMaxIndex = 0;

		for (unsigned j = 0; j < currentSizeOfArr; ++j)
		{
			if (localMaxNum < arrToBeSorted[j])
			{
				localMaxNum = arrToBeSorted[j];
				localMaxIndex = j;
			}
		}

		arrToBeSorted[localMaxIndex] = arrToBeSorted[currentSizeOfArr - 1];

		arrToBeSorted[currentSizeOfArr - 1] = localMaxNum;

		currentSizeOfArr--;

	}

	cout << "Array post-sort condition : ";

	for (size_t i = 0; i < SIZE_OF_ARR; ++i)
	{
		cout << arrToBeSorted[i] << " ";
	}

	cout << endl;

	return 0;
}

//Hint for Exercise 6*. :
//We know that the values that will be set in the array are between 1 and 10
//So we can make an array of unsigned integers with length of 10 -the number of values
//Iterating through the input array we set newArr[inputArr[i]]++ -> the index of the newArr 
//is the value of the input arr at index i, and the value in newArr[input[i]] is the number of such values