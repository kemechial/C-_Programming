// Exceptions.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

class CustomException {
        private:
            string message;

        public:
            CustomException(string message) {
                this->message = message;
            }
            
            string print_out() {
                return this->message;
            }

};

int division(int a, int b) {
    try
    {

  
        if (b < 1) {
            throw - 1;
        }

        if (a < 1) {
            throw "snap!"; // this is a constant char array
        }

        if (a == b)
            throw CustomException("throwing custom exception.");


        return a / b;

    }
    catch (int err) {
        cout << err << " is less than 1!" << endl;
    }

    catch (const char* s) {
        cout << s << " is catched." << endl;
    }
    
    catch (CustomException ex) {
       cout << ex.print_out() << endl;
    }
}

int main()
{
    division(4, 0);
    division(0, 5);
    division(3, 3);
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
