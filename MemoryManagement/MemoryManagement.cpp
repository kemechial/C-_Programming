// MemoryManagement.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

class Gun {
    public:
        Gun() {
            cout << "New Gun created." << endl;
        }
        ~Gun() {
            cout << "Gun deleted." << endl;

        }

        void dummy_func() {
            cout << "test" << endl;
        }

};

int main()
{
    int* a = new int;
    *a = 7;
    delete a;

    Gun* g1 = new Gun;
    delete g1;

    {
        Gun g2; //This is managed by stack, it is automatically removed from memory outside curly braces.
    }
    Gun* g3;

    {
      //  Gun* g3 = new Gun; //created in Heap, this is not managed by stack, it is not automatically removed from memory outside curly braces.
        g3 = new Gun;
    }

   // delete g3; this is outside braces, gives error for g3 defined inside braces
    delete g3;

    shared_ptr<Gun> g_ptr = make_shared<Gun>();
    shared_ptr<Gun> g_ptr2 = g_ptr;

    g_ptr2->dummy_func();
    cout << g_ptr2.get() << endl;
    cout << g_ptr.use_count() << endl;
    

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
