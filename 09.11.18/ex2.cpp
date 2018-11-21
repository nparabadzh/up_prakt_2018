#include <iostream>

using namespace std;

int ex2()
{
	//fetcing the input array
	char sampleArray[1024];
	cin.getline(sampleArray, 1024);

	//fetching the element to look for
	char elementToFind;
	cin >> elementToFind;

	unsigned inputArrSize = strlen(sampleArray);

	//we look from back to front to find the last appearence of the element
	for (int i = inputArrSize; i >= 0; --i)
	{
		//if we find it we print the current index and we stop the programme
		if (sampleArray[i] == elementToFind)
		{
			cout << i << endl;
			return 0;
		}
	}

	cout << "Given element is not a part of the array" << endl;

	return 0;
}