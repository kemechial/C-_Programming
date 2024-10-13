// Arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void test_fun(int[]);

int main()
{
	float ar1[4]{ 3.2,5.6,2,6 };
	int ar2[3];
	int ar3[5]{};
	double ar4[2]{ 0 };

	cout << ar2[2] << endl;
	cout << ar3[1] << endl;
	cout << ar4[0] << endl;

	cout << "Memory starting point of ar1: " << ar1 << endl;
	cout << "Second element in the array: " << *(ar1 + 1) << endl;

	//multidimensional array
	int ar5[2][2]{
		{2,4} ,
		{1,7} 
	};
	cout << ar5[1][0] << endl;

	// array size
	cout << "array size: "<< sizeof(ar4) / sizeof(double) << endl;
	//or
	cout << "array size: " << size(ar4) << endl;

	test_fun(ar3);
}

void test_fun(int ar[]) { //or test_fun(int* ar)
	cout << ar;
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
