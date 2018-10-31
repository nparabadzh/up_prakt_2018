#include <iostream>

using namespace std;

int main()
{

	int toBeTested;
	
	//Fetching the number;
	cin >> toBeTested;

	//Testing to see if the last bit equals 1
	//That way we have a power of two that equals 1 - 2^0 * 1
	//Thats the only bit that can make a number odd.
	( (toBeTested & 1) == 0) ? cout << "Is even." << endl : cout << "Is odd." << endl;

	return 0;

}