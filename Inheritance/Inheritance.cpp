// Inheritance.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string.h>

using namespace std;

class vehicle {
    public:
       string name;


    protected: 
        double weight;
        int get_id() {
            return id;
        }

    private:
        int id;


};


class Car : public vehicle {

        public:
            string drive;
            int ret_weight() {
                return weight;
            }

            Car(int w) {
                weight = w;
            }

};

void test_fun(Car& c) {
    c.name = "changed";
}

int main()
{
    Car c1(8);
    cout << c1.ret_weight() << endl;
    // pointer to object
    Car* c1_ptr = &c1;
    c1_ptr->drive = "4WD";
    // reference 
    int x = 5;
    int& z = x;
    z = 3;
    cout << "changed through reference " << x << endl;

    Car& ref_c = c1;
    test_fun(ref_c);
    //or
    test_fun(c1);

    int w = 5;
    int& q = w;
    q = 9;
    cout << w << endl;
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
