// OOP_Exercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Area
{
public:
	int width;
	int height;
	int area;

	void input_data() {
		cout << "width: ";
		cin >> width;

		cout << "height: ";
		cin >> height;

	}

	Area() {
		width = 0;
		height = 0;
		cout << "new Area created." << endl;
	}



	Area(bool t) {
		cout << "new Area created. (bool)" << endl;

	}

	~Area() {
		cout << "Area destroyed" << endl;

	}

	void calculate() {
		area = height * width;
		cout << "area is: " << area << endl;
	}


};







int main()
{
	{
		Area area1;
		area1.input_data();
		area1.calculate();
		Area area2(true);

	} // object is destructed outside the block

	cout << "outside the block.";
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
