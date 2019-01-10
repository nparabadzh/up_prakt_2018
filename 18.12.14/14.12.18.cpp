#include <iostream>

using namespace std;

// exercise 1
void reverseInt(int n)
{

	if (n == 0)
	{
		return;
	}

	cout << n % 10;
	
	reverseInt(n / 10);

}

//ex 2
unsigned long factorial(unsigned n)
{
	if (n == 0)
	{
		return 1;
	}

	return n*factorial(n - 1);
}

//ex 3
unsigned fib(unsigned n)
{
	if (n < 2)
	{
		return (n == 0 ) ? 0 : 1;
	}

	return fib(n - 1) + fib(n - 2);
}

//ex 4 
bool isEven(unsigned n);

bool isOdd(unsigned n )
{
	if (n == 1)
	{
		return true;
	}


	return (n>0) && isEven(n - 1);
}

bool isEven(unsigned n)
{
	if (n == 0)
	{
		return true;
	}

	return  (n>0) && isOdd(n - 1);
}

//ex 5
void bin(unsigned n)
{
	if (n == 0)
	{
		return;
	}

	bin(n / 2);

	cout << n % 2;
	
}

//ex 6
unsigned swap9Helper(unsigned n, int prev, unsigned pow)
{

	if (n == 0)
	{
		return 0;
	}

	unsigned current = n % 10;

	return 
		(swap9Helper(n / 10, current, pow * 10) 
			+ ((current == prev || current == (n / 10) % 10) ? 9 : current)*pow);


}

unsigned swap9(unsigned n)
{
	return swap9Helper(n, -1, 1);
}



int main()
{
	reverseInt(123);


	cout << "\n" <<factorial(5) << endl;

	cout << fib(6) << endl;

	cout << isEven(5)<<endl;

	bin(15);

	cout << endl;

	cout << swap9(1444144332) << endl;

}