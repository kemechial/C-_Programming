// FriendFunction.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


class TestClass {
    private:
        int changeThis = 0;

    public:
        void printVar() {
            cout << changeThis << endl;
        }

        friend void changer_function(TestClass* t); // this is a friend function, it can even change a private variable. 

};


void changer_function(TestClass* test) { // for change to take effect we must pass a pointer to object!
    test->changeThis = 5;

}

int main()
{
    TestClass test1;
    changer_function(&test1);
    test1.printVar();
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
