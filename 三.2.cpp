#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int number)
{
	for (int divisor = 2; divisor <= number / 2; divisor++)
	{
		if (number % divisor == 0)
		{
			return false;
		}
	}
	return true;
}
void printPrimeNumber(int numofprime)
{
	const int NUMBER_OF_PRIMES = 200;
	const int LINE = 10;
	int count = 0;
	int number = 2;
	while (count < numofprime)
	{
		if (is_prime(number))
		{
			count++;
			if (count % LINE == 0)
			{
				cout << setw(5) << number << endl;
			}
			else
				cout << setw(5) << number;
		}
		number++;
	}
}

int main()
{
	cout << "The first 200 prime numbers are \n";
	printPrimeNumber(200);

	return 0;
}