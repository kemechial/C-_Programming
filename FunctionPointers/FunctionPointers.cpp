// FunctionPointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

//create the function

int func1(int a, int b) {
    return a + b;
}

//create the pointer

int (*func_ptr)(int, int) =  &func1;

int other_func(int c, int d, int(*ptr)(int,int)) {

    return ptr(c, d);

}

int main()
{
    std::cout << other_func(7, 8, func_ptr) << endl;
    std::cout << other_func(7, 8, func1);

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
