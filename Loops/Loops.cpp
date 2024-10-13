// Loops.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
	bool test = true;

	do
	{
		char t;
		cout << "Do you want to continue ?: (y/n)";
		cin >> t;

		if (t == 'y') {
			continue;
		}
		else if(t=='n') {
			test = false;
		}
		else {
			cout << "invalid entry!" << endl;
		}

		cout << "It is closing!";


	} while (test);

	int x = 0;

	while (1) {
		
		x++;

		if (x % 2 == 0) {
			continue;
		}
		else if (x % 3 == 0) {
			cout << "x: "<<x<<endl;
		}
		else {
			cout << "none"<<endl;
			goto point;
		}


		if (x > 100)
			break;


	point:
		cout << "this is goto!" << "number is: " << x;

	}


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
