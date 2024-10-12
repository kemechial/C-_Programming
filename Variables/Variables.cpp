// Variables.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
	int num1 = 20;
	int num2 = 5;
	std::cout << num1 + num2;

	char c1 = 'x';
	char c2 = 126;

	std::cout << c1;
	std::cout << c2;
   
	int x = -1;
	unsigned int z = 1;

	std::cout << "\n";

	if (x < z) {
		std::cout << "-1<1";

	}
	else {
		std::cout << "-1>1 because signed int is converted to unsigned, \n";
		std::cout <<"signed conversion of -1: " << (unsigned int) x;

	}

		std::cout << "\n";

	if (x < 129) {
		std::cout << "-1<1\n";

	}
	else {

	}

	unsigned short  k { 65535 };

	k = 65536;

	std::cout <<"overflow: "<< k;

	k = 65537;

	std::cout << "\noverflow: " << k;


	unsigned  g{ 3 }, y{ 5 };

	std::cout << "\n" << g - y;

	float f1{ 123456789.0f };
	std::cout << "\n" << f1;
	std::cout << std::setprecision(16);
	std::cout << "\n" << f1 << " This is not our number: float is only  4 bytes so it is rounded.";

	double f2{ 123456789.0};
	std::cout << "\n" << f2 << " double gives the exact number...";

	int8_t test = 104;

	std::cout << "\n" << test << " Since it is exact 1 byte, compiler thinks it is a character.";

	int8_t t2{ 67 };

	std::cout << "\n" << test + t2 << " \"+\" operator so it assumes integers.";
	bool flag = true;
	std::cout << "\n" << sizeof(bool) << "\n" << sizeof(flag);

	const int constant_x{ 7 };

	//constant_x = 6 would give error!

	int m = 1;

	m = 3.4; //truncation warning

	std::cout << "\n implicit type conversion " << m;

	//int w{ 4.7 }; gives truncation error
	//int m = 4.7; gives truncation error

	int m3 = 8;
	
	m3 = static_cast<int>(5.7);

	std::cout << "\n static type conversion " << m3;
	m3 = (int)4.9;
	std::cout << "\n static type conversion " << m3;

	std::cout << "\n memory address of m3:   "<< std::hex << &m3;

	int* ptr = &m3;

	std::cout << "\n memory address of the pointer of m3:   " << std::hex << &ptr;

	std::cout << "\n m3 value from pointer *ptr:    " << *ptr;



}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
