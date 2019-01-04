#include <iostream>

using namespace std;

//Defining the size of int so we dont get any 
//unexpected behaviour on different systems
//Disclaimer: some implementations of c++ have bytes
//that are more than 8 bits , but we take it as granted
#define INT_BIT_SIZE sizeof(int)*8

int main()
{

	int toBeTested;

	//Fetching the number
	cin >> toBeTested;

	unsigned counter = 0;

	//Shifting the value 1 which representation is ...0001
	//So by shifting it we get a 1 on each position and the other 31 are 0s
	//This way we can check in the current position if the bit is "fliped" on or off
	for (unsigned i = 0; i < INT_BIT_SIZE; ++i)
	{
		if ((toBeTested & (1<<i) ) != 0)
		{
			counter++;
		}
	}

	cout << "Number of 1s : " << counter << " and number of 0s is : " << INT_BIT_SIZE - counter << endl;

	return 0;
}