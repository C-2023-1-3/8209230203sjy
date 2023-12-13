
#include<iostream>
#include<iomanip>
#include"mytemperature.h"
using namespace std;
int main()
{
	cout << "Celsius"<<"    "<<"Fahrenheit" << "  "<<"|" << "  "<<"Fahrenheit" << "    "<<"Celsius" << endl;
	double cel = 40.0;
	double fah = 120.0;
	celsius_to_fah(cel);
	cout << "  " << " |  " ;
	fahrenheit_to_cels(fah);
	cout << endl;

	 cel = 39.0;
	 fah = 110.0;
	celsius_to_fah(cel);
	cout << "  " << " |  ";
	fahrenheit_to_cels(fah);
	cout << endl;

	 cel = 31.0;
	 fah = 30.0;
	celsius_to_fah(cel);
	cout << "   " << " |  ";
	fahrenheit_to_cels(fah);

}