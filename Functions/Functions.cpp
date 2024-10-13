// Functions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int test_fun(int x = 4, int y = 3);
double test_fun(double, double);


int main()
{
   cout << test_fun(5, 7) << endl;

   double x{ 5 }, y{ 9 };

   cout << test_fun(x, y) << endl;

    // cout << test_fun(5l, 7l); gives error
     cout << test_fun(4.7f, 5.6f) << endl; 
     cout << test_fun() << endl;
     cout << "size of float: " << sizeof(float) << endl;
     cout << "size of double: " << sizeof(double) << endl;
     cout << "size of long: " << sizeof(long);

}


int test_fun(int a, int b) // default values
{
    return a + b;
}

//overloading of test_fun
double test_fun(double a, double b)
{
    return a + b;
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
