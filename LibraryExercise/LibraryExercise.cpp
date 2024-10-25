// LibraryExercise.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream* file1 = new ofstream("file1.txt");
    int count;
    string* msg = new string;
    if (file1->is_open()) { 
        cout << "how many lines to write: ";
        cin >> count;
        for (int i = 0; i < count; i++) {
            *file1 << "This is line " << i << endl;
        }
        cout << "Enter final message: ";
        cin >> *msg;
        *file1 << *msg;
        file1->close();
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
